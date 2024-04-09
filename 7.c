#include <stdio.h>
#include <string.h>

int main(){
char oracion[100];
int i;
int opcion=0;


printf("-----Menu----- ");
printf("\n1.Mostrar la oracion toda en mayuscula");
printf("\n2.Mostrar la oracion todo en minusculas");
printf("\n3.Mostrar la oracion alternando una mayuscula y una minuscula");
printf("\n4.Mostrar la oracion comenzando todas las palabras con mayuscula");
printf("\nIngrese opcion: ");
scanf("%d",&opcion);

switch(opcion){

case 1: printf("Ingrese cadena: ");
fflush(stdin);
fgets(oracion, 100, stdin);

int longitud = strlen(oracion);

for(i=0;i<longitud;i++){
if(oracion[i] >='a' && oracion[i] <='z'){
oracion[i] = oracion[i] - 32;
}
}	
printf("%s",oracion);

break;



case 2: printf("Ingrese cadena: ");
fflush(stdin);
fgets(oracion, 100, stdin);


longitud = strlen(oracion);

for(i=0;i<longitud;i++){
if(oracion[i] >='A' && oracion[i] <='Z'){
oracion[i] = oracion[i] + 32;
}	
}	
printf("%s",oracion);

break;

case 3:printf("Ingrese cadena: ");
fflush(stdin);
fgets(oracion, 100, stdin);


longitud = strlen(oracion);

for(i=0;i<longitud;i++){
if(i%2==0){
if(oracion[i] >='a' && oracion[i] <='z'){
oracion[i] = oracion[i] - 32;
}	
}
}

printf("%s",oracion);

break;

case 4:printf("Ingrese cadena: ");
fflush(stdin);
fgets(oracion, 100, stdin);


longitud = strlen(oracion);

for(i=0; oracion[i] != '0';i++){
if((i==0 || oracion[i-1] == ' ') && oracion[i] >= 'a' && oracion[i] <='z'){
oracion[i] -=32;
}
}

printf("%s",oracion);

break;



}
}

