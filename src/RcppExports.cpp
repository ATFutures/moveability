// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_get_sp_dists_par
Rcpp::NumericMatrix rcpp_get_sp_dists_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type);
RcppExport SEXP _moveability_rcpp_get_sp_dists_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists_par(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp_dists
Rcpp::NumericMatrix rcpp_get_sp_dists(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type);
RcppExport SEXP _moveability_rcpp_get_sp_dists(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sf_as_network
Rcpp::List rcpp_sf_as_network(const Rcpp::List& sf_lines, const Rcpp::DataFrame& pr);
RcppExport SEXP _moveability_rcpp_sf_as_network(SEXP sf_linesSEXP, SEXP prSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sf_lines(sf_linesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type pr(prSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sf_as_network(sf_lines, pr));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_points_index_par
Rcpp::IntegerVector rcpp_points_index_par(const Rcpp::DataFrame& xy, Rcpp::DataFrame& pts);
RcppExport SEXP _moveability_rcpp_points_index_par(SEXP xySEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type xy(xySEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_points_index_par(xy, pts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_points_index
Rcpp::IntegerVector rcpp_points_index(const Rcpp::DataFrame& xy, Rcpp::DataFrame& pts);
RcppExport SEXP _moveability_rcpp_points_index(SEXP xySEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type xy(xySEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_points_index(xy, pts));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_moveability_rcpp_get_sp_dists_par", (DL_FUNC) &_moveability_rcpp_get_sp_dists_par, 5},
    {"_moveability_rcpp_get_sp_dists", (DL_FUNC) &_moveability_rcpp_get_sp_dists, 5},
    {"_moveability_rcpp_sf_as_network", (DL_FUNC) &_moveability_rcpp_sf_as_network, 2},
    {"_moveability_rcpp_points_index_par", (DL_FUNC) &_moveability_rcpp_points_index_par, 2},
    {"_moveability_rcpp_points_index", (DL_FUNC) &_moveability_rcpp_points_index, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_moveability(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
