#include <stdio.h>
#include "matrix.h"

int main() {
    int det;
    Matrix3x3 A, B, C;

    printf("Enter Matrix A:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A.data[i][j]);

    printf("Enter Matrix B:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &B.data[i][j]);

 
    MUL_MATRIX(A, B, C);
    printf("A * B =\n");
    printMatrix(C);


    ADD_MATRIX(A, B, C);
    printf("A + B =\n");
    printMatrix(C);


    SUB_MATRIX(A, B, C);
    printf("A - B =\n");
    printMatrix(C);


    DETERMINANT_MATRIX(A, det);
    printf("\nDeterminant of A = %d\n", det);


    DETERMINANT_MATRIX(B, det);
    printf("Determinant of B = %d\n", det);

    return 0;
}
