#include "matrix_actions.h"

#include <stdexcept>


void transpose(double* matrix, const size_t& rows, const size_t& cols) {
    double tmatrix[1000]{0.0};
    for (size_t i = 0ull; i < rows; ++i) {
        for (size_t j = 0ull; j < cols; ++j) {
            tmatrix[j * rows + i] = matrix[i * cols + j];
        }
    }
    for (size_t i = 0ull; i < rows * cols; ++i) {
        matrix[i] = tmatrix[i];
    }
}

void oddEvenRows(double* matrix, const size_t& rows, const size_t& cols) {
    for (size_t j = 0ull; j < cols; ++j) {
        for (size_t i = 0ull; i < (rows - rows % 2); i += 2) {
            double t = matrix[i * cols + j];
            matrix[i * cols + j] = matrix[(i + 1) * cols + j];
            matrix[(i + 1) * cols + j] = t;
        }
    }
}
