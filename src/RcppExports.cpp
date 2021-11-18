// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// run_command
List run_command(DataFrame df, IntegerVector es, int tau, NumericVector thetas, Nullable<IntegerVector> libs, int k, std::string algorithm, int numReps, int p, int crossfold, bool full, bool shuffle, bool saveFinalPredictions, bool saveSMAPCoeffs, bool dt, bool allowMissing, int numThreads, int verbosity);
RcppExport SEXP _fastEDM_run_command(SEXP dfSEXP, SEXP esSEXP, SEXP tauSEXP, SEXP thetasSEXP, SEXP libsSEXP, SEXP kSEXP, SEXP algorithmSEXP, SEXP numRepsSEXP, SEXP pSEXP, SEXP crossfoldSEXP, SEXP fullSEXP, SEXP shuffleSEXP, SEXP saveFinalPredictionsSEXP, SEXP saveSMAPCoeffsSEXP, SEXP dtSEXP, SEXP allowMissingSEXP, SEXP numThreadsSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type es(esSEXP);
    Rcpp::traits::input_parameter< int >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< Nullable<IntegerVector> >::type libs(libsSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::string >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< int >::type numReps(numRepsSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type crossfold(crossfoldSEXP);
    Rcpp::traits::input_parameter< bool >::type full(fullSEXP);
    Rcpp::traits::input_parameter< bool >::type shuffle(shuffleSEXP);
    Rcpp::traits::input_parameter< bool >::type saveFinalPredictions(saveFinalPredictionsSEXP);
    Rcpp::traits::input_parameter< bool >::type saveSMAPCoeffs(saveSMAPCoeffsSEXP);
    Rcpp::traits::input_parameter< bool >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< bool >::type allowMissing(allowMissingSEXP);
    Rcpp::traits::input_parameter< int >::type numThreads(numThreadsSEXP);
    Rcpp::traits::input_parameter< int >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(run_command(df, es, tau, thetas, libs, k, algorithm, numReps, p, crossfold, full, shuffle, saveFinalPredictions, saveSMAPCoeffs, dt, allowMissing, numThreads, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// run_json_test
std::string run_json_test(std::string fnameIn);
RcppExport SEXP _fastEDM_run_json_test(SEXP fnameInSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fnameIn(fnameInSEXP);
    rcpp_result_gen = Rcpp::wrap(run_json_test(fnameIn));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastEDM_run_command", (DL_FUNC) &_fastEDM_run_command, 18},
    {"_fastEDM_run_json_test", (DL_FUNC) &_fastEDM_run_json_test, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastEDM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
