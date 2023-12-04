#include "Archivo1.h"
#include <stdio.h>
#include <stdlib.h>

int sumarMatrices(int fila, int columna, int matriz1[fila][columna], int matriz2[fila][columna], int resultado[fila][columna]) {
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int llenarMatrizAleatoria(int fila, int columna, int matriz[fila][columna]) {
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            matriz[i][j] = rand() % 101; // Numeros aleatorios entre 0 y 100
        }
    }
}

int imprimirMatriz(int fila, int columna, int matriz[fila][columna]) {
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

