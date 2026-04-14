#include <stdio.h>
#include "matrix.h"

void printMatrix(Matrix3x3 M) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", M.data[i][j]);
        printf("\n");
    }
}
