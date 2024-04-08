#include <stdio.h>
#include <string.h>

int main(){

char cadena[30];
int cont= 0, i;

printf("Ingrese cadena de caracteres: ");
scanf("%s",&cadena);

int longitud=strlen(cadena);

for(i = 0; i < longitud; i++){
char c=cadena[i];

if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
cont ++;
}
}

printf("La cadena (%s) tiene %d vocales", cadena, cont);

}
