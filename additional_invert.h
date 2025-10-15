#ifndef ADDITIONAL_INVERT_H
#define ADDITIONAL_INVERT_H

#include <cstddef>

double determinant(double* matrix, const size_t& n);
double math_addition(double* matrix, const size_t& n, const size_t& i, const size_t& j);
double minor(double* matrix, const size_t& n, const size_t& i, const size_t& j);
void invert(double* matrix, const size_t& n);

#endif //ADDITIONAL_INVERT_H