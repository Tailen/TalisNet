#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "matrix.h"

matrix_t new_matrix(int rows, int cols, bool random) {
    int i;
    matrix_t m;

    m.cols = cols;
    m.rows = rows;
    m.values = calloc(rows, sizeof(float *));
    for (i = 0; i < rows; ++i) {
        m.values[i] = calloc(cols, sizeof(float));
    }

    return m;
}

matrix_t matmul(matrix_t m1, matrix_t m2) {
    int i, j;
    matrix_t result = new_matrix(m1.rows, m2.cols, false);

    for (i = 0; i < m1.rows; ++i) {
        for (j = 0; j < m1.cols; ++j) {
            
        }
    }

    return result;
}

matrix_t matadd(matrix_t m1, matrix_t m2) {
    int i, j;
    matrix_t result = new_matrix(m1.rows, m1.cols, false);

    for (i = 0; i < m1.rows; ++i) {
        for (j = 0; j < m1.cols; ++j) {
            result.values[i][j] = m1.values[i][j] + m2.values[i][j];
        }
    }

    return result;
}

void free_matrix(matrix_t m) {
    int i;

    for (i = 0; i < m.rows; ++i) {
        free(m.values[i]);
    }
    free(m.values);
}
