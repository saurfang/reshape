// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// melt_dataframe
List melt_dataframe(const DataFrame& data, const IntegerVector& id_ind, const IntegerVector& measure_ind, String variable_name, String value_name);
RcppExport SEXP reshape2_melt_dataframe(SEXP dataSEXP, SEXP id_indSEXP, SEXP measure_indSEXP, SEXP variable_nameSEXP, SEXP value_nameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP );
        Rcpp::traits::input_parameter< const IntegerVector& >::type id_ind(id_indSEXP );
        Rcpp::traits::input_parameter< const IntegerVector& >::type measure_ind(measure_indSEXP );
        Rcpp::traits::input_parameter< String >::type variable_name(variable_nameSEXP );
        Rcpp::traits::input_parameter< String >::type value_name(value_nameSEXP );
        List __result = melt_dataframe(data, id_ind, measure_ind, variable_name, value_name);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
