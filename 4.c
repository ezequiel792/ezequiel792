
#include <stdio.h>
#include <string.h>

void reemplazar(char cadena[],char cBuscado, char nCaracter){
int i;
int longitud=strlen(cadena);

for(i=0; i<longitud; i++){
if(cadena[i] == cBuscado){
cadena[i] = nCaracter;
}
}

}

int main(){
char cadena[100];
char cBuscado;
char nCaracter;

printf("Ingrese una cadena de caracteres : ");
scanf("%s",&cadena);

fflush(stdin);

printf("\nIngresa el caracter que deseas reemplazar: ");
scanf("%c",&cBuscado);

fflush(stdin);

printf("\nIngresa el caracter nuevo ");
scanf("%c",&nCaracter);
	
reemplazar(cadena,cBuscado,nCaracter);

printf("\nLa cadena modifica es %s",cadena);
	
}


