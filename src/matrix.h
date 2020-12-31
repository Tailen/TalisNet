#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <stdbool.h>

typedef struct {
    float **values;
    int rows, cols;
} matrix_t;

matrix_t new_matrix(int rows, int cols, bool random);
matrix_t matmul(matrix_t m1, matrix_t m2);
matrix_t matadd(matrix_t m1, matrix_t m2);

void free_matrix(matrix_t m);

#endif /* __MATRIX_H__ */
