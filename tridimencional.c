#include <stdio.h>
#include "archivo.h"


int main() {
    int numMatrices, filas, columnas;

    printf("Ingrese el número de matrices: ");
    scanf("%d", &numMatrices);

    printf("Ingrese el tamaño en filas: ");
    scanf("%d", &filas);

    printf("Ingrese el tamaño en columnas: ");
    scanf("%d", &columnas);

    int matrices[numMatrices][filas][columnas];

    crearMatrices(numMatrices, filas, columnas, matrices);

    imprimirMatrices(numMatrices, filas, columnas, matrices);

    return 0;
}

