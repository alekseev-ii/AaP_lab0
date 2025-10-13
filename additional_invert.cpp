#include "additional_invert.h"

#include <cstddef>
#include <stdexcept>
#include "matrix_actions.h"

double determinant(double * matrix, const int& n) {
    if (n == 1) {
        return matrix[0];
    } else if (n == 2) {
        return matrix[0] * matrix[3] - matrix[1] * matrix[2];
    }
    double det = 0.0;
    for (size_t j = 0ull; j < n; ++j) {
        if (matrix[j]) {
            det += matrix[j] * math_addition(matrix, n, 0, j);
        }
    }
    return det;
}

double math_addition(double * matrix, const int& n, const int& i, const int& j) {
    const int k = (i + j) % 2 ? -1 : 1;
    return k * minor(matrix, n, i, j);
}

double minor(double* matrix, const int& n, const int& i, const int& j) {
    double temp_matrix[1000]{0.0};
    for (size_t r = 0ull; r < n - 1; ++r) {
        for (size_t c = 0ull; c < n - 1; ++c) {
            size_t rSource = r < i ? r : r + 1;
            size_t cSource = c < j ? c : c + 1;
            temp_matrix[r * (n - 1) + c] = matrix[rSource * n + cSource];
        }
    }
    return determinant(temp_matrix, n - 1);
}

void invert(double *matrix, const int& n) {
    double det = determinant(matrix, n);
    if (det == 0.0) {
        throw std::invalid_argument("the matrix determinant must be non-zero");
    }
    double imatrix[1000]{0.0};
    for (size_t i = 0ull; i < n; ++i) {
        for (size_t j = 0ull; j < n; ++j) {
            imatrix[i * n + j] = math_addition(matrix, n, i, j) / det;
        }
    }
    transpose(imatrix, n, n);
    for (size_t i = 0ull; i < n * n; ++i) {
        matrix[i] = imatrix[i];
    }
}