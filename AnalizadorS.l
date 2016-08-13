%{
#include <stdlib.h>
void yyerror(char *);
#include "AnalizadorS.tab.h"
char *yycopy = 0 ;
int contador=0;
FILE *yyout2;
FILE *yyout3;
%}
ID [a-z][a-z|A-Z|0-9]*
DIGITO [0-9]
CHAR [a-z|0-9]
%%

int|float|bool|char|string 		yylval.string=strdup(yytext);		return TipoDato;
"if"										return IF;
"then"										return THEN;
"else"										return ELSE;
"while"										return WHILE;
"do"										return DO;
"printf"									return INPUT;
"scanf"										return OUTPUT;
"return"									return RETURN;
{ID}					yylval.string=strdup(yytext);	return Identificador;
"=" 										return IGUAL;
":"										return ASIGNACION;
","										return SEPARADOR;
["\+"|"\-"|"\*"|"\%"""|"\/"]							return *yytext;
"|"|"&"										return OPLog;	
"<"|">"|"<="|">="|"=="|"!="		 					return OpControl;
"&&"|"||"									return OpLogControl;
"("										return AGRPAR_AB;
")"										return AGRPAR_CE;
"{"										return AGRLLAV_AB;
"}"										return AGRLLAV_CE;
"["										return AGRCOR_AB;
"]"										return AGRCOR_CE;
{DIGITO}+	{yylval.entero = atoi(yytext);		return ENTERO;}
-{DIGITO}+	{yylval.enteroNeg = atoi(yytext);	return ENTERO_NEG;}
{DIGITO}*".""0"+|{DIGITO}*"."{DIGITO}+|"-"{DIGITO}*".""0"+|"-"{DIGITO}*"."{DIGITO}+ {yylval.flotante = atof(yytext); return Lit_float;}
true|false|TRUE|FALSE 								return Lit_bool;
"'"[a-z|A-Z|0-9]"'"  					 			return Lit_char;
"\""[^\n]*"\"" 									return Lit_String;
";" 										return PUNTOCOM;
"/""*"[^·]*"*""/"
"\/""\/"[^}\n]*
[ \t\n]

.										yyerror("invalid character"); 
%%
int yywrap(void) { 
	yyout = fopen("tablaSimbolos.csv","w");
    return 1; 
}
