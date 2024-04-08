#include <stdio.h>
#include <string.h>

int main() {
    char cadenas[5][100];
    int longitud_mas_larga = 0;
    char cadena_mas_larga[100];
    int i;

    printf("Ingrese las cinco cadenas:\n");
    for (i = 0; i < 5; ++i) {
        printf("Cadena %d: ", i + 1);
        fgets(cadenas[i], 100, stdin);
        cadenas[i][strcspn(cadenas[i], "\n")] = '\0'; 
        int longitud_actual = strlen(cadenas[i]);
        if (longitud_actual > longitud_mas_larga) {
            longitud_mas_larga = longitud_actual;
            strcpy(cadena_mas_larga, cadenas[i]);
        }
    }

    printf("La cadena mas larga es: %s\n", cadena_mas_larga);

    return 0;
}

