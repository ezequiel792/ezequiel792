#include <stdio.h>
#include <string.h>

int esPalindromo(char cadena[]){
int longitud = strlen(cadena);
int i;
for(i=0; i<longitud / 2; i++){
if(cadena[i] != cadena[longitud-i-1]){
return 0;
}
}
return 1;
}

int main(){

char cadena[30];

printf("Ingrese cadena de caracteres: ");
scanf("%s",&cadena);

if(esPalindromo(cadena)){
printf("Es Palindromo");
}

else{
printf("No es Palindromo");
}

return 0;

}





