#include "archivo.h"
#include <stdio.h>

int crearMatrices(int numMatrices, int filas, int columnas, int matrices[numMatrices][filas][columnas]) {
    for (int k = 0; k < numMatrices - 1; ++k) {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                matrices[k][i][j] = 0;
            }
        }
    }

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrices[numMatrices - 1][i][j] = 1;
        }
    }
}

int imprimirMatrices(int numMatrices, int filas, int columnas, int matrices[numMatrices][filas][columnas]) {
    for (int k = 0; k < numMatrices; ++k) {
        printf("\nMatriz %d:\n", k + 1);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                printf("%d ", matrices[k][i][j]);
            }
            printf("\n");
        }
    }
}





