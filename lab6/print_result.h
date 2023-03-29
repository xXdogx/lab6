#ifndef PRINT_RESULT_H
#define PRINT_RESULT_H
#include <ostream>

void print_result(std::ostream& out, double left, double right, double step, double absError, unsigned numberMax);
#endif