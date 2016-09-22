#include "testclass.h"

// [[Rcpp::export]]
double test2(const List& x) {
  testclass foo(x);
  foo.y_vec(0) = 200;
  foo.y_cube(0) = 200;
  return 0.0;
}