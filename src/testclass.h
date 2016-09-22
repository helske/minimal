#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::plugins(cpp11)]]

using namespace Rcpp;

class testclass {

public:

  testclass(const List&);
  arma::vec y_vec;
  arma::cube y_cube;
};