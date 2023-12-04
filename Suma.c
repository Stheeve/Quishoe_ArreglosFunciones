// main.c
#include <stdio.h>
#include <stdlib.h> // Para la funcion rand
#include "Archivo1.h"

int main() {
    int fila, columna;

    // Tamaño de las matrices
    printf("Ingrese el numero de filas: ");
    scanf("%d", &fila);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columna);

    // Declarar matrices
    int matriz1[fila][columna], matriz2[fila][columna], resultado[fila][columna];

    // Llenar matrices con numeros aleatorios
    llenarMatrizAleatoria(fila, columna, matriz1);
    llenarMatrizAleatoria(fila, columna, matriz2);

    // Llamar a la funcion de la libreria para sumar matrices
    sumarMatrices(fila, columna, matriz1, matriz2, resultado);

    // Mostrar las matrices y su suma
    printf("\nMatriz1:\n");
    imprimirMatriz(fila, columna, matriz1);

    printf("\nMatriz2:\n");
    imprimirMatriz(fila, columna, matriz2);

    printf("\nResultado de la suma:\n");
    imprimirMatriz(fila, columna, resultado);

    return 0;
}
