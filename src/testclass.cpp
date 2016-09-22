#include "testclass.h"

testclass::testclass(const List& x) :
  y_vec(as<arma::vec>(x["y_vec"])), y_cube(as<arma::cube>(x["y_array"])) {
}