%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
void buscar(char *);
extern char* yytext;
extern FILE* yyin;
extern FILE* yyout;
extern char* yycopy;
extern int contador;
%}
%token Lit_int
%token IGUAL
%token Palabra_reservada
%token <identificador>Identificador
%token Operador
%token Opcompuesto
%token OpControl
%token OP
%token OPLog
%token OpLogControl
%token <tipo>TipoDato
%token Lit_float
%token <entero>ENTERO
%token ENTERO_NEG
%token Lit_bool
%token Lit_char
%token Lit_String
%token ASIGNACION
%token PUNTOCOM
%token SEPARADOR
%token AGRPAR_AB
%token AGRPAR_CE
%token AGRCOR_AB 
%token AGRCOR_CE
%token AGRLLAV_AB 
%token AGRLLAV_CE
%token IF
%token THEN
%token ELSE
%token WHILE
%token DO
%token INPUT
%token OUTPUT
%token RETURN

%union {
int entero;
char* tipo;
char* identificador;
}


%%
prog: 
		prog asignacionglobal
		|prog funcion 
		|
		;

asignacionglobal:
		TipoDato ASIGNACION Identificador {fprintf(yyout,"%s,%s,Asignacion Global,\n",$3,$1);}
		;
funcion:
		TipoDato Identificador ASIGNACION stackAsig AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE	
		|TipoDato Identificador ASIGNACION AGRPAR_AB  AGRPAR_CE AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE {fprintf(yyout,"%s,%s,Funcion,\n",$2,$1);}
		|TipoDato Identificador ASIGNACION AGRPAR_AB  AGRPAR_CE AGRLLAV_AB RETURN Identificador AGRLLAV_CE
{fprintf(yyout,"%s,%s,Funcion,\n",$2,$1);}
		|TipoDato tamaVector Identificador AGRPAR_AB  AGRPAR_CE AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE 
		|TipoDato tamaVector Identificador stackAsig AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE  
		;
tamaVector: 	
		AGRCOR_AB ENTERO AGRCOR_CE
		;
bloqueComandosFunciones: 
		stackAsig bloqueComandosFunciones 		
		|atribucion bloqueComandosFunciones		
		|asignacionLocal bloqueComandosFunciones	
		|if bloqueComandosFunciones			
		|while bloqueComandosFunciones			
		|stackAsig					
		|atribucion					
		|asignacionLocal				
		|if						
		|while						
		|input
		|output
		;

if: 
		IF stackOpLogControl				
		|IF stackOpLogControl THEN bloqueComandosIF	
		|IF stackOpLogControl THEN bloqueComandosIF ELSE bloqueComandosIF	
		|IF stackOpLogControl THEN AGRLLAV_AB if AGRLLAV_CE	
		|IF stackOpLogControl THEN AGRLLAV_AB if AGRLLAV_CE ELSE AGRLLAV_AB bloqueComandosIF AGRLLAV_CE
		;

bloqueComandosIF: 
		AGRLLAV_AB bloqueComandosIF AGRLLAV_CE	
		|atribucion			
		|asignacionLocal			
		|atribucion bloqueComandosIF		
		|asignacionLocal bloqueComandosIF	
		|while					
		|input
		|output
		;

while:
		WHILE stackOpLogControl DO bloqueComandosWhile
		|WHILE stackOpLogControl DO while		
		|DO bloqueComandosWhile WHILE stackOpLogControl	
		|DO while WHILE stackOpLogControl		
		|if						
		;

stackOpLogControl: 	
		AGRPAR_AB stackOpLogControl AGRPAR_CE
		|Identificador OpControl Identificador     { char *palabra, *palabra2;
								palabra = $1;
								palabra = $3;
								buscar(palabra);
								buscar(palabra2);}
 
		|Identificador OpControl valorNumerico  { char *palabra;
								palabra = $1;
								buscar(palabra);}
		|Identificador OpControl valorCaracter { char *palabra;
								palabra = $1;
								buscar(palabra);}
		|Identificador OpControl OperacionArit { char *palabra;
								palabra = $1;
								buscar(palabra);}
		|AGRPAR_AB stackOpLogControl AGRPAR_CE OpLogControl stackOpLogControl
		|Identificador OpControl Identificador OpLogControl stackOpLogControl  { char *palabra, *palabra2;
											palabra = $1;
											palabra = $3;
											buscar(palabra);
											buscar(palabra2);}
		|Identificador OpControl valorNumerico OpLogControl stackOpLogControl { char *palabra;
											palabra = $1;
											buscar(palabra);}
		|Identificador OpControl valorCaracter OpLogControl stackOpLogControl { char *palabra;
											palabra = $1;
											buscar(palabra);}
		|Identificador OpControl OperacionArit OpLogControl stackOpLogControl { char *palabra;
											palabra = $1;
											buscar(palabra);}
		|AGRPAR_AB stackOpLogControl AGRPAR_CE bloqueComandosWhile
		|Identificador OpControl Identificador bloqueComandosWhile 	 { char *palabra, *palabra2;
											palabra = $1;
											palabra = $3;
											buscar(palabra);
											buscar(palabra2);}
		|Identificador OpControl valorNumerico bloqueComandosWhile { char *palabra;
										palabra = $1;
										buscar(palabra);}
		|Identificador OpControl valorCaracter bloqueComandosWhile { char *palabra;
										palabra = $1;
										buscar(palabra);}
		|Identificador OpControl OperacionArit bloqueComandosWhile { char *palabra;
										palabra = $1;
										buscar(palabra);}
		|AGRPAR_AB stackOpLogControl AGRPAR_CE OpLogControl stackOpLogControl bloqueComandosWhile
		|Identificador OpControl Identificador OpLogControl stackOpLogControl bloqueComandosWhile  { char *palabra, *palabra2;
														palabra = $1;
														palabra = $3;
														buscar(palabra);
														buscar(palabra2);}
		|Identificador OpControl valorNumerico OpLogControl stackOpLogControl bloqueComandosWhile { char *palabra;
														palabra = $1;
														buscar(palabra);}
		|Identificador OpControl valorCaracter OpLogControl stackOpLogControl bloqueComandosWhile { char *palabra;
														palabra = $1;
														buscar(palabra);}
		|Identificador OpControl OperacionArit OpLogControl stackOpLogControl bloqueComandosWhile { char *palabra;
														palabra = $1;
														buscar(palabra);}
		;
bloqueComandosWhile: 
		AGRLLAV_AB bloqueComandosWhile AGRLLAV_CE 	
		|atribucion					
		|asignacionLocal				
		|atribucion bloqueComandosWhile			
		|asignacionLocal bloqueComandosWhile		
		|if						
		|input
		|output
		;

atribucion:
		Identificador IGUAL stackOp	{ char *palabra;
							palabra = $1;
							buscar(palabra);}	
		| Identificador IGUAL valorNumerico	{ char *palabra;
							palabra = $1;
							buscar(palabra);}
		| Identificador IGUAL valorCaracter     { char *palabra;
							palabra = $1;
							buscar(palabra);}	
		| Identificador IGUAL Identificador   	{ char *palabra,*palabra2;
								palabra = $1;
								palabra2 = $3;
								buscar(palabra);
								buscar(palabra2);}
		| Identificador AGRCOR_AB ENTERO AGRCOR_CE IGUAL valorNumerico  { char *palabra;
											palabra = $1;
											buscar(palabra);}
		| Identificador AGRCOR_AB ENTERO AGRCOR_CE IGUAL valorCaracter { char *palabra;
											palabra = $1;
											buscar(palabra);}
		| Identificador AGRCOR_AB ENTERO AGRCOR_CE IGUAL Identificador AGRCOR_AB ENTERO AGRCOR_CE { char *palabra;
											palabra = $1;
											buscar(palabra);}
		;

stackAsig: 	
		AGRPAR_AB stackAsig AGRPAR_CE
		|lista
		;
stackOp: 	
		AGRPAR_AB stackOp AGRPAR_CE
		|OperacionArit
		|OperacionLog
		;

OperacionArit:
		Identificador OP valorNumerico 		
		|valorNumerico OP valorNumerico		
		|Identificador OP Identificador		
		|Identificador OP OperacionArit		
		|valorNumerico OP OperacionArit		
		;
OperacionLog:
		Identificador OPLog valorNumerico 
		|valorNumerico OPLog valorNumerico	
		|Identificador OPLog Identificador
		|Identificador OPLog OperacionLog
		|valorNumerico OPLog OperacionLog
		;

lista:
		TipoDato ASIGNACION Identificador
		|lista SEPARADOR lista
		; 

asignacionLocal:
		TipoDato ASIGNACION Identificador PUNTOCOM  {fprintf(yyout,"%s,%s,Asignacion Local,\n",$3,$1);}
		;
valorNumerico: 
		ENTERO_NEG
		|ENTERO
		|Lit_float 
		;
valorCaracter:
		Lit_char
		|Lit_bool
		|Lit_String
		;

input:
		INPUT AGRPAR_AB Lit_String AGRPAR_CE	
		;
output:
		OUTPUT AGRPAR_AB Lit_String SEPARADOR Identificador AGRPAR_CE 
		;

		
	
%%
void buscar(char *palabra)
{
FILE *archivo;
 	 int  encontrado = 0;
    	 char cadena[256], nombre[25];
    	 char *a,*buscar;
	archivo = fopen("output.csv","r");
	 if (archivo != NULL)
    	{ 
		buscar = palabra;
            	rewind(archivo);
 	      	encontrado = 0;
 		while (!feof(archivo))
		{
        		contador++;
        		fgets(cadena,256,archivo);
                	a = strtok(cadena,",.- ");
                	while (a != NULL)
                	{
				if (!strcmp(buscar, a))
				{
					encontrado++;
					if (encontrado == 1)
					{
					 
					break;
					}
				}
				a = strtok (NULL, " ");
			}
		}   
            	if (encontrado <= 0){
			printf("\nLa variable %s no fue declarada\n",palabra);
			printf("\n Linea en que se encontro: %d\n", contador);
				}
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(archivo);
	}
   
}

void yyerror(char *s) { 
    fprintf(stderr, "%s\n", s);}


int main () {
        yyin = fopen ("Codigo.txt", "r");
        yyout = fopen ("output2.csv","w");
        yyparse();
      	fclose(yyout);
}
