// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_make_compact_graph
Rcpp::List rcpp_make_compact_graph(Rcpp::DataFrame graph, bool quiet);
RcppExport SEXP _dodgr_rcpp_make_compact_graph(SEXP graphSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_make_compact_graph(graph, quiet));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_insert_vertices
Rcpp::List rcpp_insert_vertices(Rcpp::DataFrame fullgraph, Rcpp::DataFrame compactgraph, std::vector <int> pts_to_insert);
RcppExport SEXP _dodgr_rcpp_insert_vertices(SEXP fullgraphSEXP, SEXP compactgraphSEXP, SEXP pts_to_insertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type fullgraph(fullgraphSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type compactgraph(compactgraphSEXP);
    Rcpp::traits::input_parameter< std::vector <int> >::type pts_to_insert(pts_to_insertSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_insert_vertices(fullgraph, compactgraph, pts_to_insert));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_lines_as_network
Rcpp::List rcpp_lines_as_network(const Rcpp::List& sf_lines, Rcpp::DataFrame pr);
RcppExport SEXP _dodgr_rcpp_lines_as_network(SEXP sf_linesSEXP, SEXP prSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sf_lines(sf_linesSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type pr(prSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_lines_as_network(sf_lines, pr));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_points_index
Rcpp::NumericVector rcpp_points_index(const Rcpp::DataFrame& xy, Rcpp::DataFrame& pts);
RcppExport SEXP _dodgr_rcpp_points_index(SEXP xySEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type xy(xySEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_points_index(xy, pts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp
Rcpp::NumericMatrix rcpp_get_sp(Rcpp::DataFrame graph, Rcpp::DataFrame vert_map_in, std::vector <int> fromi, std::vector <int> toi, std::string heap_type);
RcppExport SEXP _dodgr_rcpp_get_sp(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< std::vector <int> >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< std::vector <int> >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< std::string >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
