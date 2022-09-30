//
// Created by yume on 28/09/22.
//

#include <malloc.h>
#include "sort.h"


void MatrixSort(int* matrix, int size_row, int size_col) {
    int* array = malloc(sizeof(int) * size_row * size_col);
    int index = 0;
    for (int i = 0; i < size_row; ++i) {
        for (int j = 0; j < size_col; ++j) {
            array[index++] = matrix[i*size_col + j];
        }
    }
    InsertionSort(array, size_row * size_col);
    index = 0;
    for (int i = 0; i < size_row; ++i) {
        for (int j = 0; j < size_col; ++j) {
            matrix[i*size_col + j] = array[index++];
        }
    }
}