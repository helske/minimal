#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::plugins(cpp11)]]
// [[Rcpp::export]]
bool test(List x) {
  bool cbool = x["y"];
  Rcout<<cbool<<std::endl;
  return cbool;
}

/*** R
x <- list(y=FALSE)
test(x)
*/
