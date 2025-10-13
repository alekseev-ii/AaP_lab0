#include <iostream>
#include "matrixio.h"
#include "matrix_actions.h"
#include "additional_invert.h"


int main () {
    int rows = 0;
    int cols = 0;
    std::cin >> rows >> cols;
    if (std::cin.fail()) {
        return 1;
    }
    double matrix[1000]{0.0};
    try {
        matrixin(matrix, rows, cols);
    } catch (const std::invalid_argument& e) {
        std::cout << e.what();
        return 1;
    }

    matrixout(matrix, rows, cols);

    // transpose(matrix, rows, cols);
    // int t = rows; rows = cols; cols = t;
    // oddEvenRows(matrix, rows, cols);
     invert(matrix, rows);

    matrixout(matrix, rows, cols);
}
