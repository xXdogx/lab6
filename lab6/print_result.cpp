#include <cmath>
#include <iomanip>
#include "print_result.h"
#include "square_root.h"

void print_result_row(std::ostream& out, double x, double absError, unsigned numberMax)
{
  out << std::setw(5) << x << " | ";
  out << std::setw(10) << std::setprecision(5) << square_root(x, absError, numberMax) << " | ";
  out << std::setw(10) << std::setprecision(5) << std::sqrt(1 + x);
}

void print_result(std::ostream& out, double left, double right, double step, double absError, unsigned numberMax)
{
  if (left > right)
  {
    throw std::logic_error("incorrect limits!");
  }

  for (double x = left; x + step < right; x = x + step)
  {
    try
    {
      print_result_row(out << '\n', x, absError, numberMax);
    }
    catch (const std::exception& e)
    {
      out << e.what() << '\n';
    }
  }

  try
  {
    print_result_row(out << "\n", right, absError, numberMax);
  }
  catch (const std::exception& e)
  {
    out << e.what() << '\n';
  }
}