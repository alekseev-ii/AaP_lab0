#include "matrixio.h"

#include <cstddef>
#include <iostream>


void matrixin(double * matrix, const int& rows, const int& cols) {
    for (size_t i = 0ull; i < rows; ++i) {
        for (size_t j = 0ull; j < cols; ++j) {
            std::cin >> matrix[i * cols + j];
        }
    }
    if (std::cin.fail()) {
        throw std::invalid_argument("Error reading input file");
    }
}

void matrixout(double * matrix, const  int& rows, const int& cols) {
    for (size_t i = 0ull; i < rows; ++i) {
        std::cout << matrix[i * cols];
        for (size_t j = 1ull; j < cols; ++j) {
            std::cout << " " << matrix[i * cols + j];
        }
        std::cout << "\n";
    }
}
