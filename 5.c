#include <stdio.h>
#include <string.h>

// Función para ordenar una cadena alfabéticamente
void ordenarCadena(char cadena[]) {
    int longitud = strlen(cadena);
    char temp;
    int i, j;
    // Método de ordenación de burbuja
    for (i = 0; i < longitud - 1; i++) {
        for ( j = 0; j < longitud - i - 1; j++) {
            if (cadena[j] > cadena[j + 1]) {
                // Intercambiar caracteres
                temp = cadena[j];
                cadena[j] = cadena[j + 1];
                cadena[j + 1] = temp;
            }
        }
    }
}

// Función para verificar si dos cadenas son anagramas entre sí
int sonAnagramas(char cadena1[], char cadena2[]) {
    // Si las longitudes son diferentes, no pueden ser anagramas
    if (strlen(cadena1) != strlen(cadena2))
        return 0;

    // Ordenar ambas cadenas
    ordenarCadena(cadena1);
    ordenarCadena(cadena2);

    // Comparar si las cadenas ordenadas son iguales
    if (strcmp(cadena1, cadena2) == 0)
        return 1; // Son anagramas
    else
        return 0; // No son anagramas
}

int main() {
    char cadena1[100], cadena2[100];

    // Solicitar al usuario que ingrese las dos cadenas
    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1);
    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);

    // Verificar si las cadenas son anagramas
    if (sonAnagramas(cadena1, cadena2))
        printf("Las cadenas \"%s\" y \"%s\" son anagramas.\n", cadena1, cadena2);
    else
        printf("Las cadenas \"%s\" y \"%s\" no son anagramas.\n", cadena1, cadena2);

    return 0;
}

