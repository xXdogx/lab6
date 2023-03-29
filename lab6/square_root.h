#ifndef SQUARE_ROOT_H
#define SQUARE_ROOT_H

double square_root(double x, double absError, unsigned numberMax);

class member_of_row
{
public:
  explicit member_of_row(double x);
  double operator()();

private:
  double x;
  double powX;
  double next;
  double member;
  double sign;
  unsigned n;
  unsigned oddFactorial;
  unsigned evenFactorial;

};

#endif
