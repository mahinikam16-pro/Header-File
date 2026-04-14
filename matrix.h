#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int data[3][3];
} Matrix3x3;

#define ADD_MATRIX(A, B, R)               \
    for (int i = 0; i < 3; i++)           \
        for (int j = 0; j < 3; j++)       \
            R.data[i][j] = A.data[i][j] + B.data[i][j]

#define SUB_MATRIX(A, B, R)               \
    for (int i = 0; i < 3; i++)           \
        for (int j = 0; j < 3; j++)       \
            R.data[i][j] = A.data[i][j] - B.data[i][j]

#define MUL_MATRIX(A, B, R)                       \
    for (int i = 0; i < 3; i++) {                 \
        for (int j = 0; j < 3; j++) {             \
            R.data[i][j] = 0;                     \
            for (int k = 0; k < 3; k++)           \
                R.data[i][j] += A.data[i][k] * B.data[k][j]; \
        }                                          \
    }

#define DETERMINANT_MATRIX(A, DET)                        \
    DET = A.data[0][0]*(A.data[1][1]*A.data[2][2]-A.data[1][2]*A.data[2][1]) \
        - A.data[0][1]*(A.data[1][0]*A.data[2][2]-A.data[1][2]*A.data[2][0]) \
        + A.data[0][2]*(A.data[1][0]*A.data[2][1]-A.data[1][1]*A.data[2][0]);

void printMatrix(Matrix3x3 M);

#endif
