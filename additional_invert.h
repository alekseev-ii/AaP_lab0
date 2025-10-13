#ifndef ADDITIONAL_INVERT_H
#define ADDITIONAL_INVERT_H

double determinant(double* matrix, const int& n);
double math_addition(double* matrix, const int& n, const int& i, const int& j);
double minor(double* matrix, const int& n, const int& i, const int& j);
void invert(double* matrix, const int& n);

#endif //ADDITIONAL_INVERT_H