// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_centrality
Rcpp::NumericVector rcpp_centrality(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, const std::string& heap_type, bool edges);
RcppExport SEXP _dodgr_rcpp_centrality(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP heap_typeSEXP, SEXP edgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type edges(edgesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_centrality(graph, vert_map_in, heap_type, edges));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_centrality_vertex
void rcpp_centrality_vertex(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, const std::string& heap_type, const std::string dirtxt);
RcppExport SEXP _dodgr_rcpp_centrality_vertex(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP heap_typeSEXP, SEXP dirtxtSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    Rcpp::traits::input_parameter< const std::string >::type dirtxt(dirtxtSEXP);
    rcpp_centrality_vertex(graph, vert_map_in, heap_type, dirtxt);
    return R_NilValue;
END_RCPP
}
// rcpp_centrality_edge
void rcpp_centrality_edge(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, const std::string& heap_type, const std::string dirtxt);
RcppExport SEXP _dodgr_rcpp_centrality_edge(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP heap_typeSEXP, SEXP dirtxtSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    Rcpp::traits::input_parameter< const std::string >::type dirtxt(dirtxtSEXP);
    rcpp_centrality_edge(graph, vert_map_in, heap_type, dirtxt);
    return R_NilValue;
END_RCPP
}
// rcpp_aggregate_to_sf
Rcpp::List rcpp_aggregate_to_sf(const Rcpp::DataFrame& graph_full, const Rcpp::DataFrame& graph_contr, const Rcpp::DataFrame& edge_map);
RcppExport SEXP _dodgr_rcpp_aggregate_to_sf(SEXP graph_fullSEXP, SEXP graph_contrSEXP, SEXP edge_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph_full(graph_fullSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph_contr(graph_contrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type edge_map(edge_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_aggregate_to_sf(graph_full, graph_contr, edge_map));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_aggregate_files
Rcpp::NumericVector rcpp_aggregate_files(const Rcpp::CharacterVector file_names, const int len);
RcppExport SEXP _dodgr_rcpp_aggregate_files(SEXP file_namesSEXP, SEXP lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector >::type file_names(file_namesSEXP);
    Rcpp::traits::input_parameter< const int >::type len(lenSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_aggregate_files(file_names, len));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_flows_aggregate_par
void rcpp_flows_aggregate_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi_in, Rcpp::NumericMatrix flows, const double tol, const std::string dirtxt, const std::string heap_type);
RcppExport SEXP _dodgr_rcpp_flows_aggregate_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toi_inSEXP, SEXP flowsSEXP, SEXP tolSEXP, SEXP dirtxtSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi_in(toi_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type flows(flowsSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const std::string >::type dirtxt(dirtxtSEXP);
    Rcpp::traits::input_parameter< const std::string >::type heap_type(heap_typeSEXP);
    rcpp_flows_aggregate_par(graph, vert_map_in, fromi, toi_in, flows, tol, dirtxt, heap_type);
    return R_NilValue;
END_RCPP
}
// rcpp_flows_disperse_par
void rcpp_flows_disperse_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::NumericVector k, Rcpp::NumericVector flows, const double& tol, const std::string& dirtxt, std::string heap_type);
RcppExport SEXP _dodgr_rcpp_flows_disperse_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP kSEXP, SEXP flowsSEXP, SEXP tolSEXP, SEXP dirtxtSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type flows(flowsSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type dirtxt(dirtxtSEXP);
    Rcpp::traits::input_parameter< std::string >::type heap_type(heap_typeSEXP);
    rcpp_flows_disperse_par(graph, vert_map_in, fromi, k, flows, tol, dirtxt, heap_type);
    return R_NilValue;
END_RCPP
}
// rcpp_fundamental_cycles
Rcpp::List rcpp_fundamental_cycles(Rcpp::DataFrame graph, Rcpp::DataFrame verts);
RcppExport SEXP _dodgr_rcpp_fundamental_cycles(SEXP graphSEXP, SEXP vertsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type verts(vertsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_fundamental_cycles(graph, verts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_contract_graph
Rcpp::List rcpp_contract_graph(const Rcpp::DataFrame& graph, Rcpp::Nullable <Rcpp::StringVector>& vertlist_in);
RcppExport SEXP _dodgr_rcpp_contract_graph(SEXP graphSEXP, SEXP vertlist_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable <Rcpp::StringVector>& >::type vertlist_in(vertlist_inSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_contract_graph(graph, vertlist_in));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_merge_cols
Rcpp::NumericVector rcpp_merge_cols(Rcpp::DataFrame graph);
RcppExport SEXP _dodgr_rcpp_merge_cols(SEXP graphSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_merge_cols(graph));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_graph
Rcpp::StringVector rcpp_sample_graph(Rcpp::DataFrame graph, unsigned int nverts_to_sample);
RcppExport SEXP _dodgr_rcpp_sample_graph(SEXP graphSEXP, SEXP nverts_to_sampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nverts_to_sample(nverts_to_sampleSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_graph(graph, nverts_to_sample));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_component_vector
Rcpp::List rcpp_get_component_vector(const Rcpp::DataFrame& graph);
RcppExport SEXP _dodgr_rcpp_get_component_vector(SEXP graphSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph(graphSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_component_vector(graph));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp_dists_par
Rcpp::NumericMatrix rcpp_get_sp_dists_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi_in, const std::string& heap_type, const bool is_spatial);
RcppExport SEXP _dodgr_rcpp_get_sp_dists_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toi_inSEXP, SEXP heap_typeSEXP, SEXP is_spatialSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi_in(toi_inSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    Rcpp::traits::input_parameter< const bool >::type is_spatial(is_spatialSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists_par(graph, vert_map_in, fromi, toi_in, heap_type, is_spatial));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_iso
Rcpp::NumericMatrix rcpp_get_iso(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::NumericVector dlim, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_iso(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP dlimSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dlim(dlimSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_iso(graph, vert_map_in, fromi, dlim, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp_dists
Rcpp::NumericMatrix rcpp_get_sp_dists(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi_in, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_sp_dists(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toi_inSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi_in(toi_inSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists(graph, vert_map_in, fromi, toi_in, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_paths
Rcpp::List rcpp_get_paths(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi_in, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_paths(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toi_inSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi_in(toi_inSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_paths(graph, vert_map_in, fromi, toi_in, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_gen_hash
Rcpp::CharacterVector rcpp_gen_hash(const int n, const size_t hash_len);
RcppExport SEXP _dodgr_rcpp_gen_hash(SEXP nSEXP, SEXP hash_lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const size_t >::type hash_len(hash_lenSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_gen_hash(n, hash_len));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sf_as_network
Rcpp::List rcpp_sf_as_network(const Rcpp::List& sf_lines, const Rcpp::DataFrame& pr);
RcppExport SEXP _dodgr_rcpp_sf_as_network(SEXP sf_linesSEXP, SEXP prSEXP) {
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
RcppExport SEXP _dodgr_rcpp_points_index_par(SEXP xySEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type xy(xySEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_points_index_par(xy, pts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_route_times
Rcpp::List rcpp_route_times(const Rcpp::DataFrame graph, bool left_side, int turn_penalty);
RcppExport SEXP _dodgr_rcpp_route_times(SEXP graphSEXP, SEXP left_sideSEXP, SEXP turn_penaltySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< bool >::type left_side(left_sideSEXP);
    Rcpp::traits::input_parameter< int >::type turn_penalty(turn_penaltySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_route_times(graph, left_side, turn_penalty));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dodgr_rcpp_centrality", (DL_FUNC) &_dodgr_rcpp_centrality, 4},
    {"_dodgr_rcpp_centrality_vertex", (DL_FUNC) &_dodgr_rcpp_centrality_vertex, 4},
    {"_dodgr_rcpp_centrality_edge", (DL_FUNC) &_dodgr_rcpp_centrality_edge, 4},
    {"_dodgr_rcpp_aggregate_to_sf", (DL_FUNC) &_dodgr_rcpp_aggregate_to_sf, 3},
    {"_dodgr_rcpp_aggregate_files", (DL_FUNC) &_dodgr_rcpp_aggregate_files, 2},
    {"_dodgr_rcpp_flows_aggregate_par", (DL_FUNC) &_dodgr_rcpp_flows_aggregate_par, 8},
    {"_dodgr_rcpp_flows_disperse_par", (DL_FUNC) &_dodgr_rcpp_flows_disperse_par, 8},
    {"_dodgr_rcpp_fundamental_cycles", (DL_FUNC) &_dodgr_rcpp_fundamental_cycles, 2},
    {"_dodgr_rcpp_contract_graph", (DL_FUNC) &_dodgr_rcpp_contract_graph, 2},
    {"_dodgr_rcpp_merge_cols", (DL_FUNC) &_dodgr_rcpp_merge_cols, 1},
    {"_dodgr_rcpp_sample_graph", (DL_FUNC) &_dodgr_rcpp_sample_graph, 2},
    {"_dodgr_rcpp_get_component_vector", (DL_FUNC) &_dodgr_rcpp_get_component_vector, 1},
    {"_dodgr_rcpp_get_sp_dists_par", (DL_FUNC) &_dodgr_rcpp_get_sp_dists_par, 6},
    {"_dodgr_rcpp_get_iso", (DL_FUNC) &_dodgr_rcpp_get_iso, 5},
    {"_dodgr_rcpp_get_sp_dists", (DL_FUNC) &_dodgr_rcpp_get_sp_dists, 5},
    {"_dodgr_rcpp_get_paths", (DL_FUNC) &_dodgr_rcpp_get_paths, 5},
    {"_dodgr_rcpp_gen_hash", (DL_FUNC) &_dodgr_rcpp_gen_hash, 2},
    {"_dodgr_rcpp_sf_as_network", (DL_FUNC) &_dodgr_rcpp_sf_as_network, 2},
    {"_dodgr_rcpp_points_index_par", (DL_FUNC) &_dodgr_rcpp_points_index_par, 2},
    {"_dodgr_rcpp_route_times", (DL_FUNC) &_dodgr_rcpp_route_times, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_dodgr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
