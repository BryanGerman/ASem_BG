%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
char* buscarTipo(char *);
char* buscarPrueba(char *);
int buscar(char *);
extern char* yytext;
extern FILE* yyin;
extern FILE* yyout;
extern char* yycopy;
extern int contador;
char *palabra,*palabra2;
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
%token ASIGNACION
%token <flotante>Lit_float
%token <entero>ENTERO
%token <enteroNeg>ENTERO_NEG
%token Lit_bool
%token Lit_char
%token Lit_String
%token <tipo>TipoDato
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
int enteroNeg;
float flotante;
}

%start prog
%%

prog: 
		prog asignacionglobal
		|prog funcion 
		|
		;

asignacionglobal:
		TipoDato ASIGNACION Identificador {
							palabra = $3;
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s AsignacionGlobal,",$3,$1);} 
							}
		;
funcion:
		TipoDato Identificador ASIGNACION stackAsig AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE	{
							palabra = $2;
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion,",$2,$1);} 
							}
		|TipoDato Identificador ASIGNACION AGRPAR_AB  AGRPAR_CE AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE {
							palabra = $2;
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion,",$2,$1);} 
							}

		|TipoDato Identificador ASIGNACION AGRPAR_AB  AGRPAR_CE AGRLLAV_AB RETURN Identificador AGRLLAV_CE
{
							palabra = $2;
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion,",$2,$1);} 
							}

		|TipoDato tamaVector Identificador AGRPAR_AB  AGRPAR_CE AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE {
							palabra = $3;
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion[],",$3,$1);} 
							}
		|TipoDato tamaVector Identificador stackAsig AGRLLAV_AB bloqueComandosFunciones RETURN Identificador AGRLLAV_CE {
							palabra = $3;
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion[],",$3,$1);} 
							} 
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
stackAsig: 	
		AGRPAR_AB stackAsig AGRPAR_CE
		|lista
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
		|Identificador OpControl Identificador     { 	palabra = $1;
								palabra = $3;
								buscar(palabra2);
								buscar(palabra);
								}
 
		|Identificador OpControl valorNumerico  { 
								palabra = $1;
								buscar(palabra);}
		|Identificador OpControl valorCaracter { 
								palabra = $1;
								buscar(palabra);}
		|Identificador OpControl OperacionArit { 
								palabra = $1;
								buscar(palabra);}
		|AGRPAR_AB stackOpLogControl AGRPAR_CE OpLogControl stackOpLogControl
		|Identificador OpControl Identificador OpLogControl stackOpLogControl  {
											palabra = $1;
											palabra = $3;
											buscar(palabra);
											buscar(palabra2);}
		|Identificador OpControl valorNumerico OpLogControl stackOpLogControl {
											palabra = $1;
											buscar(palabra);}
		|Identificador OpControl valorCaracter OpLogControl stackOpLogControl {
											palabra = $1;
											buscar(palabra);}
		|Identificador OpControl OperacionArit OpLogControl stackOpLogControl { 
											palabra = $1;
											buscar(palabra);}
		|AGRPAR_AB stackOpLogControl AGRPAR_CE bloqueComandosWhile
		|Identificador OpControl Identificador bloqueComandosWhile 	 {
											palabra = $1;
											palabra = $3;
											buscar(palabra);
											buscar(palabra2);}
		|Identificador OpControl valorNumerico bloqueComandosWhile { 
										palabra = $1;
										buscar(palabra);}
		|Identificador OpControl valorCaracter bloqueComandosWhile {
										palabra = $1;
										buscar(palabra);}
		|Identificador OpControl OperacionArit bloqueComandosWhile { 
										palabra = $1;
										buscar(palabra);}
		|AGRPAR_AB stackOpLogControl AGRPAR_CE OpLogControl stackOpLogControl bloqueComandosWhile
		|Identificador OpControl Identificador OpLogControl stackOpLogControl bloqueComandosWhile  { 
														palabra = $1;
														palabra = $3;
														buscar(palabra);
														buscar(palabra2);}
		|Identificador OpControl valorNumerico OpLogControl stackOpLogControl bloqueComandosWhile { 
														palabra = $1;
														buscar(palabra);}
		|Identificador OpControl valorCaracter OpLogControl stackOpLogControl bloqueComandosWhile { 
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
		Identificador IGUAL stackOp	{ 
							palabra = $1;
							buscar(palabra);}	
		| Identificador IGUAL valorNumerico	{ 
							palabra = $1;
							buscar(palabra);}
		| Identificador IGUAL valorCaracter     { 
							palabra = $1;
							buscar(palabra);}	
		| Identificador IGUAL Identificador   	{ 
								palabra = $1;
								palabra2 = $3;
								buscar(palabra);
								buscar(palabra2);}
		| Identificador AGRCOR_AB ENTERO AGRCOR_CE IGUAL valorNumerico  {
											palabra = $1;
											buscar(palabra);}
		| Identificador AGRCOR_AB ENTERO AGRCOR_CE IGUAL valorCaracter { 
											palabra = $1;
											buscar(palabra);}
		| Identificador AGRCOR_AB ENTERO AGRCOR_CE IGUAL Identificador AGRCOR_AB ENTERO AGRCOR_CE { 
											palabra = $1;
											buscar(palabra);}
		;
asignacionLocal:
		TipoDato ASIGNACION Identificador PUNTOCOM  {
							palabra = $3;
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s AsignacionLocal,",$3,$1);} 
							}
		;

stackOp: 	
		AGRPAR_AB stackOp AGRPAR_CE
		|OperacionArit
		|OperacionLog
		;

OperacionArit:
		Identificador OP valorNumerico 	{
							palabra = $1;
							if(buscarPrueba(palabra)==NULL)
								{fprintf(stderr,"variable %s no declaradaaaaaaaaaaaa",palabra);} 
				else {fprintf(stderr,"\n\nEncontre la variable %s y es de tipo %s \n\n",palabra,buscarPrueba(palabra));}
								}
	
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
int buscar(char *palabra)
{

 	 int  encontrado = 0;
    	 char cadena[300], nombre[50];
    	 char *a,*buscar;
	 int chek = -1;
	 if (yyout != NULL)
    	{ 
		buscar = palabra;
            	rewind(yyout);
 	      	encontrado = 0;
 		while (!feof(yyout))
		{
        		contador++;
        		fgets(cadena,256,yyout);
                	a = strtok(cadena,",");
			
                	while (a != NULL)
                	{
				if (!strcmp(buscar, a))
				{
					encontrado++;
					if (encontrado == 1)
					{
					chek = 0;
					 return chek;
					break;
					}
				}
				a = strtok (NULL, " ");
			}
		}   
            	if (encontrado <= 0){
			return chek;
				}
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(yyout);
	}
   
}
char* buscarPrueba(char *palabra)
{

 	 int  encontrado = 0;
    	 char cadena[300],cadena2[300];
    	 char *buscar,*nombre[50],*nombre2[3][50],*tipo=NULL;
	 int chek = -1,i=0,j=0,k,a=0,b=0,c=0;
	 if (yyout != NULL)
    	{ 
		buscar = palabra;
            	rewind(yyout);
 	      	encontrado = 0;
 		while (feof(yyout)==0)
		{
        		fgets(cadena,256,yyout);
			char *token = strtok(cadena,",");
			while (token)
                	{
				nombre[i] = token;
				token = strtok (NULL, ",");
				i++;
			}
			
			a=0;
			while(a<=3)
			{
				j=0;
				fprintf(stderr,"\nANTESnombre2: %s %d %d",nombre[a],a,j);
				char *token2 = strtok(nombre[a]," ");
				while (token2)
                		{
					
					nombre2[a][j] = token2;
					fprintf(stderr,"\nDESPUESnombre2: %s a= %d j= %d\n",nombre2[a][j],a,j);
					if (strcmp(buscar, nombre2[a][j])==0)
					{
						fprintf(stderr,"\nOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO %d \n",a);
						b =a;
						c = j+1;
						tipo ="Encontrada";


					}
					token2 = strtok (NULL, " ");
					
					fprintf(stderr,"\n------------------\n");
					fprintf(stderr,"\nlllllllllllllllllllllllllllllllllllllllllll %d  %d\n",b,c);
					tipo = nombre[b][1];
					j++;
				
				}
				a++;
			}
		
						
			
		}   
            	
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(yyout);
	}
	return tipo;
   
}
char* buscarTipo(char *palabra)
{

 	char s[256];
strcpy(s, "arreglo,int,VariableLocal");
char* token = strtok(s, ",");
char *arreglo[3];
int i=0,j;
while (token) {
   
	arreglo[i] = token;
	printf("arreglo: %s\n", arreglo[i]);
	token = strtok(NULL, ",");
	i++;
}
for(j=0;j<3;j++)
{
fprintf(stderr,"EL: %s\n",arreglo[j]);
}
return NULL;
   
}


void yyerror(char *s) { 
    fprintf(stderr, "%s\n", s);}


int main () {
        yyin = fopen ("Codigo.txt", "r");
        yyout = fopen ("output2.csv","w+");
 yyparse();
	       
	fclose(yyin);
      	fclose(yyout);
}
