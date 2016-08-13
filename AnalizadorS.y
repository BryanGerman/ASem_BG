%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
char* buscarTipo(char *);
char* buscar(char *,FILE*);
char* buscarVariable(char *,FILE*,char*);
char *buscarInduccion(int);
extern char* yytext;
extern FILE* yyin;
extern FILE* yyout;
extern FILE* yyout2;
extern FILE* yyout3;
extern char* yycopy;
extern int contador;
char *palabra,*palabra2;
%}
%token Lit_int
%token IGUAL
%token Palabra_reservada
%token <string>Identificador
%token Operador
%token Opcompuesto
%token OpControl
%token OP
%token OPLog
%token OpLogControl
%token ASIGNACION
%token <flotante>Lit_float
%token <entero>ENTERO
%token <enteroNeg>ENTERO_NEG
%token Lit_bool
%token Lit_char
%token Lit_String
%token <string>TipoDato
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

%type <entero>OperacionArit
%type <entero>atribucion
%type <entero>num_entero




%union {
int entero;
char* string;
int enteroNeg;
float flotante;
}

%start prog
%%

prog: 
		prog asignacionglobal
		|prog funcion 
		|asignacionglobal
		|funcion 
		|
		;

asignacionglobal:
		TipoDato ASIGNACION Identificador {
							char *alcance;
							palabra = $3;
							if(buscarVariable(palabra,yyout,"AG")==NULL){	
									fprintf(yyout,"%s %s AG, \n",$3,$1);
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
		;
funcion:
		TipoDato Identificador ASIGNACION stackAsig AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE	{
							char* alcance;
							palabra = $2;
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU, \n",$2,$1);
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
		|TipoDato Identificador ASIGNACION AGRPAR_AB  AGRPAR_CE AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE {
							char* alcance;
							palabra = $2;
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU, \n",$2,$1);
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}

		|TipoDato Identificador ASIGNACION AGRPAR_AB  AGRPAR_CE AGRLLAV_AB RETURN Identificador AGRLLAV_CE{
							char* alcance;
							palabra = $2;
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU, \n",$2,$1);
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}

		|TipoDato tamVector Identificador AGRPAR_AB  AGRPAR_CE AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE {
							char* alcance;
							palabra = $3;
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU[], \n",$3,$1);
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
		|TipoDato tamVector Identificador stackAsig AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE {
							char* alcance;
							palabra = $3;
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU[], \n",$3,$1);
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
		;
tamVector: 	
		AGRCOR_AB num_entero AGRCOR_CE
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
stackAsig: 	
		AGRPAR_AB stackAsig AGRPAR_CE
		|lista
		;


if: 
		IF stackOpLogControl THEN bloqueComandosIF	
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
		|Identificador OpControl Identificador     { 	palabra = $1;
														palabra2 = $3;
														buscar(palabra,yyout);
														buscar(palabra2,yyout);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscar(palabra2,yyout);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
 
		|Identificador OpControl num_entero  { 			palabra = $1;
														int numero;
														numero = $3;
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscarInduccion(numero);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
		|Identificador OpControl OperacionArit {		palabra = $1;
														int numero;
														numero = $3;
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscarInduccion(numero);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
		|AGRPAR_AB stackOpLogControl AGRPAR_CE OpLogControl stackOpLogControl
		|Identificador OpControl Identificador OpLogControl stackOpLogControl { 	
														palabra = $1;
														palabra2 = $3;
														buscar(palabra,yyout);
														buscar(palabra2,yyout);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscar(palabra2,yyout);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
		|Identificador OpControl num_entero OpLogControl stackOpLogControl {		
														palabra = $1;
														int numero;
														numero = $3;
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscarInduccion(numero);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
		|Identificador OpControl OperacionArit OpLogControl stackOpLogControl {		
														palabra = $1;
														int numero;
														numero = $3;
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscarInduccion(numero);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
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
		Identificador IGUAL stackOp	{ 
							palabra = $1;
							buscar(palabra,yyout);
							}	
		| Identificador IGUAL num_entero	{ 
											palabra = $1;
											fprintf(yyout3,"%s, %d,",$1,$3);
											char *busca1;
											char *busca2;
											busca1 = buscar(palabra,yyout);
											busca2 = buscar(palabra2,yyout);
											if(busca1!=NULL){ 
												if(busca2!=NULL){
													if(strcmp(busca1,busca2)==0){
														fprintf(stderr,"\nLas variables son compatibles\n");
														 fprintf(yyout3,"%s %d,\n",$1, $3);
													}
													else{
														fprintf(stderr,"Las variables no son compatibles");
													}
												}	
											}						
											else {
												fprintf(stderr,"variable %s no declarada",palabra);
											}
										}
		| Identificador IGUAL Identificador   	{ 	
														palabra = $1;
														palabra2 = $3;
														buscar(palabra,yyout);
														buscar(palabra2,yyout);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscar(palabra2,yyout);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
		| Identificador AGRCOR_AB num_entero AGRCOR_CE IGUAL num_entero  { 
											
								palabra = $1;
								int numero;
								numero = $6;
								buscar(palabra,yyout);
								char *busca1;
								char *busca2;
								busca1 = buscar(palabra,yyout);
								busca2 = buscarInduccion(numero);
								if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"\nLas variables son compatibles\n");
									 fprintf(yyout3,"%s %d,\n",$1, $6);				}
									else
									{fprintf(stderr,"Las variables no son compatibles");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}}
		| Identificador AGRCOR_AB num_entero AGRCOR_CE IGUAL Identificador AGRCOR_AB num_entero AGRCOR_CE { 
											
								palabra = $1;
								palabra2 = $6;
								char *busca1;
								char *busca2;
								busca1 = buscar(palabra,yyout);
								busca2 = buscar(palabra2,yyout);
								if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"\nLas variables son compatibles\n");
									 fprintf(yyout3,"%s %d,\n",$1, $8);}
									else
									{fprintf(stderr,"Las variables no son compatibles");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}}

		| Identificador IGUAL OperacionArit { 
											palabra = $1;
											fprintf(yyout3,"%s, %d,",$1,$3);
											char *busca1;
											char *busca2;
											busca1 = buscar(palabra,yyout);
											busca2 = buscar(palabra2,yyout);
											if(busca1!=NULL){ 
												if(busca2!=NULL){
													if(strcmp(busca1,busca2)==0){
														fprintf(stderr,"\nLas variables son compatibles\n");
														 fprintf(yyout3,"%s %d,\n",$1, $3);
													}
													else{
														fprintf(stderr,"Las variables no son compatibles");
													}
												}	
											}						
											else {
												fprintf(stderr,"variable %s no declarada",palabra);
											}
										}

								
											
		;
asignacionLocal:
		TipoDato ASIGNACION Identificador PUNTOCOM  {
							char *alcance;
							palabra = $3;
							alcance = "AL";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s AL, \n",$3,$1);
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
		;

stackOp: 	
		AGRPAR_AB stackOp AGRPAR_CE
		|OperacionArit		
		|OperacionLog
		;

OperacionArit:
		Identificador OP ENTERO 	{	
							palabra = $1;
							int numero = $3;
							fprintf(yyout2,"%d int,",numero);
							char *busca1;
							char *busca2;
							busca1 = buscar(palabra,yyout);
							busca2 = buscarInduccion(numero);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
								
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"Las variables son compatibles");}
									else
									{fprintf(stderr,"Las variables no son compatibles");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}
		|Identificador OP Lit_float {	
							palabra = $1;
							float numero = $3;
							fprintf(yyout2,"%f float",$3);
							char *busca1;
							char *busca2;
							busca1 = buscar(palabra,yyout);
							busca2 = buscarInduccion(numero);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"Las variables son compatibles");}
									else
									{fprintf(stderr,"Las variables no son compatibles");} 
								}
								
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}
	
		|num_entero '+' num_entero	{	
							
							int numero = $1;
							int numero2 = $3;
							char *busca1;
							char *busca2;	
							fprintf(yyout2,"%d int,",numero);
							busca1 = buscarInduccion(numero);
							fprintf(yyout2,"%d int,",numero2);
							busca2 = buscarInduccion(numero2);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{
									$$ = $1 + $3;}
									else
									{fprintf(stderr,"\nLas variables no son compatibles\n");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}	
		|num_entero '*' num_entero	{	
							
							int numero = $1;
							int numero2 = $3;
							char *busca1;
							char *busca2;	
							fprintf(yyout2,"%d int,",numero);
							busca1 = buscarInduccion(numero);
							fprintf(yyout2,"%d int,",numero2);
							busca2 = buscarInduccion(numero2);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{
									$$ = $1 * $3;}
									else
									{fprintf(stderr,"\nLas variables no son compatibles\n");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}	
		|num_entero '/' num_entero	{	
							
							int numero = $1;
							int numero2 = $3;
							char *busca1;
							char *busca2;	
							fprintf(yyout2,"%d int,",numero);
							busca1 = buscarInduccion(numero);
							fprintf(yyout2,"%d int,",numero2);
							busca2 = buscarInduccion(numero2);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{
									$$ = $1 / $3;}
									else
									{fprintf(stderr,"\nLas variables no son compatibles\n");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}	
		
		|Identificador OP Identificador	{	palabra = $1;
								palabra2 = $3;
								buscar(palabra,yyout);
								buscar(palabra2,yyout);
								palabra = $1;
								char *busca1;
								char *busca2;
								busca1 = buscar(palabra,yyout);
								busca2 = buscar(palabra2,yyout);
								if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"\nLas variables son compatibles\n");}
									else
									{fprintf(stderr,"Las variables no son compatibles");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}}

		//|Identificador OP OperacionArit		
		|num_entero OP OperacionArit
						{	
							
							int numero = $1;
							int numero2 = $3;
							char *busca1;
							char *busca2;	
							fprintf(yyout2,"%d int,",numero);
							busca1 = buscarInduccion(numero);
							fprintf(yyout2,"%d int,",numero2);
							busca2 = buscarInduccion(numero2);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{
									$$ = $1 + $3;}
									else
									{fprintf(stderr,"\nLas variables no son compatibles\n");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}		
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

num_entero:		ENTERO  {$$ = $1;}



;

valorNumerico: 
		ENTERO_NEG 

		 
		;
input:
		INPUT AGRPAR_AB Lit_String AGRPAR_CE	
		;
output:
		OUTPUT AGRPAR_AB Lit_String SEPARADOR Identificador AGRPAR_CE 
		;

		
	
%%

char* buscarVariable(char *palabra,FILE* archivo,char* alcance){
 	 int  encontrado = 0;
    	 char cadena[300],cadena2[300];
    	 char *buscar,*nombre[50],*nombre2[3][50],*tipo=NULL;
	 int chek = -1,i=0,j=0,k,a=0,b=0,c=0;
	 if (archivo != NULL){ 
		buscar = palabra;
            	rewind(archivo);
 	      	encontrado = 0;
 		while (feof(archivo)==0){
        		fgets(cadena,256,archivo);
			char *token = strtok(cadena,",");
			while (token){
				nombre[i] = token;
				token = strtok (NULL, ",");
				i++;
			}
			a=0;
			while(a<3){
				j=0;
				char *token2 = strtok(nombre[a]," ");
				while (token2){
					nombre2[a][j] = token2;
			
						
					if (strcmp(buscar, nombre2[0][j])==0 && strcmp(alcance, nombre2[a][j])==0){
						encontrado++;
						if(encontrado ==1){
							b =a;
							c = j;
							tipo ="Encontrada";		
							}
					
					}
					token2 = strtok (NULL, " ");
					tipo = nombre2[b][1];
						
					j++;
					
					
				}
				a++;
			}
		}
		if (encontrado <= 0){
			tipo = NULL;
		}   
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(yyout);
	}
	return tipo;
   
}

char* buscar(char *palabra,FILE* archivo){
 	 int  encontrado = 0;
    	 char cadena[300],cadena2[300];
    	 char *buscar,*nombre[50],*nombre2[3][50],*tipo=NULL;
	 int chek = -1,i=0,j=0,k,a=0,b=0,c=0;
	 if (archivo != NULL){ 
		buscar = palabra;
            	rewind(archivo);
 	      	encontrado = 0;
 		while (feof(archivo)==0){
        		fgets(cadena,256,archivo);
			char *token = strtok(cadena,",");
			while (token){
				nombre[i] = token;
				token = strtok (NULL, ",");
				i++;
			}
			a=0;
			while(a<=3){
				j=0;
				char *token2 = strtok(nombre[a]," ");
				while (token2){
					nombre2[a][j] = token2;
					if (strcmp(buscar, nombre2[a][j])==0){
						encontrado++;
						if(encontrado ==1){
							b =a;
							c = j;
							tipo ="Encontrada";		
							}
					}
					token2 = strtok (NULL, " ");
					tipo = nombre2[b][1];
					j++;
				}
				a++;
			}
		}
		if (encontrado <= 0){
			tipo = NULL;
		}   
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(yyout);
	}
	return tipo;
   
}

char* buscarInduccion(int numero)
{

 	 	int  encontrado = 0;
   		char cadena[300],cadena2[300];
    	char *nombre3[50],*nombre4[3][50],*tipo=NULL;
		int buscar;
		buscar = numero;
		int chek = -1,i=0,j=0,k,a=0,b=0,c=0;
	 	if (yyout2 != NULL){ 
			rewind(yyout2);
 	      	encontrado = 0;
 				while (feof(yyout2)==0){
	        		fgets(cadena,256,yyout2);
					char *token = strtok(cadena,",");
					while (token){
						nombre3[i] = token;
						token = strtok (NULL, ",");
						i++;
					}
					a=0;
					while(a<1)	{
						j=0;
						char *token2 = strtok(nombre3[a]," ");
						while (token2){				
							nombre4[a][j] = token2;
							int convertir = atoi(nombre4[a][0]);
							if (buscar == convertir){						
								encontrado++;
								if(encontrado ==1){
									b =a;
									c = j;
									tipo ="Encontrada";
								}
							}
							token2 = strtok (NULL, " ");
							tipo = nombre4[b][1];
							j++;
						}
						a++;
					}	
				}	
		}
  	  	else{
			printf("\nHubo un error en la apertura del archivo\n");
			fclose(yyout2);
		}
			return tipo;
   
}

void yyerror(char *s) { 
    fprintf(stderr, "%s\n", s);}


int main () {
        yyin = fopen ("Codigo.txt", "r");
        yyout = fopen ("output2.csv","w+");
	yyout2 = fopen("tablaSimbolos.txt","w+");
	yyout3= fopen("tablaSimbolos.csv","w+");
 yyparse();
   return 0;
	fclose(yyin);
      	fclose(yyout);
	fclose(yyout2);
	fclose(yyout3);  
}
