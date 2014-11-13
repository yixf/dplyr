// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dplyr.h"
#include <Rcpp.h>

using namespace Rcpp;

// loc
CharacterVector loc(RObject data);
RcppExport SEXP dplyr_loc(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RObject >::type data(dataSEXP );
        CharacterVector __result = loc(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// dfloc
CharacterVector dfloc(List df);
RcppExport SEXP dplyr_dfloc(SEXP dfSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type df(dfSEXP );
        CharacterVector __result = dfloc(df);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// plfloc
CharacterVector plfloc(Pairlist data);
RcppExport SEXP dplyr_plfloc(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Pairlist >::type data(dataSEXP );
        CharacterVector __result = plfloc(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// arrange_impl
List arrange_impl(DataFrame data, LazyDots dots);
RcppExport SEXP dplyr_arrange_impl(SEXP dataSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP );
        List __result = arrange_impl(data, dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// between
LogicalVector between(NumericVector x, double left, double right);
RcppExport SEXP dplyr_between(SEXP xSEXP, SEXP leftSEXP, SEXP rightSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type left(leftSEXP );
        Rcpp::traits::input_parameter< double >::type right(rightSEXP );
        LogicalVector __result = between(x, left, right);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rbind_all
List rbind_all(StrictListOf<DataFrame, NULL_or_Is<DataFrame> > dots);
RcppExport SEXP dplyr_rbind_all(SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< StrictListOf<DataFrame, NULL_or_Is<DataFrame> > >::type dots(dotsSEXP );
        List __result = rbind_all(dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rbind_list__impl
List rbind_list__impl(DotsOf<DataFrame> dots);
RcppExport SEXP dplyr_rbind_list__impl(SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DotsOf<DataFrame> >::type dots(dotsSEXP );
        List __result = rbind_list__impl(dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cbind_list__impl
List cbind_list__impl(DotsOf<DataFrame> dots);
RcppExport SEXP dplyr_cbind_list__impl(SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DotsOf<DataFrame> >::type dots(dotsSEXP );
        List __result = cbind_list__impl(dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cbind_all
List cbind_all(StrictListOf<DataFrame, NULL_or_Is<DataFrame> > dots);
RcppExport SEXP dplyr_cbind_all(SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< StrictListOf<DataFrame, NULL_or_Is<DataFrame> > >::type dots(dotsSEXP );
        List __result = cbind_all(dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// combine_all
SEXP combine_all(List data);
RcppExport SEXP dplyr_combine_all(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type data(dataSEXP );
        SEXP __result = combine_all(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// distinct_impl
SEXP distinct_impl(DataFrame df, CharacterVector vars);
RcppExport SEXP dplyr_distinct_impl(SEXP dfSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP );
        SEXP __result = distinct_impl(df, vars);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// semi_join_impl
DataFrame semi_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_semi_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP );
        DataFrame __result = semi_join_impl(x, y, by_x, by_y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// anti_join_impl
DataFrame anti_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_anti_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP );
        DataFrame __result = anti_join_impl(x, y, by_x, by_y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// inner_join_impl
DataFrame inner_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_inner_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP );
        DataFrame __result = inner_join_impl(x, y, by_x, by_y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// left_join_impl
DataFrame left_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_left_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP );
        DataFrame __result = left_join_impl(x, y, by_x, by_y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// right_join_impl
DataFrame right_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_right_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP );
        DataFrame __result = right_join_impl(x, y, by_x, by_y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// outer_join_impl
DataFrame outer_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_outer_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP );
        DataFrame __result = outer_join_impl(x, y, by_x, by_y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// shallow_copy
SEXP shallow_copy(const List& data);
RcppExport SEXP dplyr_shallow_copy(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List& >::type data(dataSEXP );
        SEXP __result = shallow_copy(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// compatible_data_frame
dplyr::BoolResult compatible_data_frame(DataFrame& x, DataFrame& y, bool ignore_col_order = true, bool convert = false);
RcppExport SEXP dplyr_compatible_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame& >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame& >::type y(ySEXP );
        Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP );
        Rcpp::traits::input_parameter< bool >::type convert(convertSEXP );
        dplyr::BoolResult __result = compatible_data_frame(x, y, ignore_col_order, convert);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// equal_data_frame
dplyr::BoolResult equal_data_frame(DataFrame x, DataFrame y, bool ignore_col_order = true, bool ignore_row_order = true, bool convert = false);
RcppExport SEXP dplyr_equal_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP ignore_row_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP );
        Rcpp::traits::input_parameter< bool >::type ignore_row_order(ignore_row_orderSEXP );
        Rcpp::traits::input_parameter< bool >::type convert(convertSEXP );
        dplyr::BoolResult __result = equal_data_frame(x, y, ignore_col_order, ignore_row_order, convert);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// all_equal_data_frame
dplyr::BoolResult all_equal_data_frame(List args, Environment env);
RcppExport SEXP dplyr_all_equal_data_frame(SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type args(argsSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        dplyr::BoolResult __result = all_equal_data_frame(args, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// union_data_frame
DataFrame union_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_union_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        DataFrame __result = union_data_frame(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// intersect_data_frame
DataFrame intersect_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_intersect_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        DataFrame __result = intersect_data_frame(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// setdiff_data_frame
DataFrame setdiff_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_setdiff_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        DataFrame __result = setdiff_data_frame(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// match_data_frame
IntegerVector match_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_match_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP );
        IntegerVector __result = match_data_frame(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// grouped_df_impl
DataFrame grouped_df_impl(DataFrame data, ListOf<Symbol> symbols, bool drop);
RcppExport SEXP dplyr_grouped_df_impl(SEXP dataSEXP, SEXP symbolsSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        Rcpp::traits::input_parameter< ListOf<Symbol> >::type symbols(symbolsSEXP );
        Rcpp::traits::input_parameter< bool >::type drop(dropSEXP );
        DataFrame __result = grouped_df_impl(data, symbols, drop);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// grouped_df_adj_impl
DataFrame grouped_df_adj_impl(DataFrame data, ListOf<Symbol> symbols, bool drop);
RcppExport SEXP dplyr_grouped_df_adj_impl(SEXP dataSEXP, SEXP symbolsSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        Rcpp::traits::input_parameter< ListOf<Symbol> >::type symbols(symbolsSEXP );
        Rcpp::traits::input_parameter< bool >::type drop(dropSEXP );
        DataFrame __result = grouped_df_adj_impl(data, symbols, drop);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// slice_impl
SEXP slice_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_slice_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP );
        SEXP __result = slice_impl(df, dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// mutate_impl
SEXP mutate_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_mutate_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP );
        SEXP __result = mutate_impl(df, dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// order_impl
IntegerVector order_impl(List args, Environment env);
RcppExport SEXP dplyr_order_impl(SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type args(argsSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        IntegerVector __result = order_impl(args, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sort_impl
DataFrame sort_impl(DataFrame data);
RcppExport SEXP dplyr_sort_impl(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        DataFrame __result = sort_impl(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// group_size_grouped_cpp
IntegerVector group_size_grouped_cpp(GroupedDataFrame gdf);
RcppExport SEXP dplyr_group_size_grouped_cpp(SEXP gdfSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP );
        IntegerVector __result = group_size_grouped_cpp(gdf);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// n_distinct
SEXP n_distinct(SEXP x);
RcppExport SEXP dplyr_n_distinct(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        SEXP __result = n_distinct(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// as_regular_df
DataFrame as_regular_df(DataFrame df);
RcppExport SEXP dplyr_as_regular_df(SEXP dfSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        DataFrame __result = as_regular_df(df);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ungroup_grouped_df
DataFrame ungroup_grouped_df(DataFrame df);
RcppExport SEXP dplyr_ungroup_grouped_df(SEXP dfSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        DataFrame __result = ungroup_grouped_df(df);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tbl_df_impl
DataFrame tbl_df_impl(DataFrame df);
RcppExport SEXP dplyr_tbl_df_impl(SEXP dfSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        DataFrame __result = tbl_df_impl(df);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// split_indices
std::vector<std::vector<int> > split_indices(IntegerVector group, int groups);
RcppExport SEXP dplyr_split_indices(SEXP groupSEXP, SEXP groupsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type group(groupSEXP );
        Rcpp::traits::input_parameter< int >::type groups(groupsSEXP );
        std::vector<std::vector<int> > __result = split_indices(group, groups);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// filter_impl
SEXP filter_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_filter_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP );
        SEXP __result = filter_impl(df, dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// grouped_indices_grouped_df_impl
IntegerVector grouped_indices_grouped_df_impl(GroupedDataFrame gdf);
RcppExport SEXP dplyr_grouped_indices_grouped_df_impl(SEXP gdfSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP );
        IntegerVector __result = grouped_indices_grouped_df_impl(gdf);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// grouped_indices_impl
IntegerVector grouped_indices_impl(DataFrame data, ListOf<Symbol> symbols);
RcppExport SEXP dplyr_grouped_indices_impl(SEXP dataSEXP, SEXP symbolsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        Rcpp::traits::input_parameter< ListOf<Symbol> >::type symbols(symbolsSEXP );
        IntegerVector __result = grouped_indices_impl(data, symbols);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// select_impl
DataFrame select_impl(DataFrame df, CharacterVector vars);
RcppExport SEXP dplyr_select_impl(SEXP dfSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP );
        DataFrame __result = select_impl(df, vars);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// strings_addresses
CharacterVector strings_addresses(CharacterVector s);
RcppExport SEXP dplyr_strings_addresses(SEXP sSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type s(sSEXP );
        CharacterVector __result = strings_addresses(s);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// summarise_impl
SEXP summarise_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_summarise_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP );
        Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP );
        SEXP __result = summarise_impl(df, dots);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// test_comparisons
LogicalVector test_comparisons();
RcppExport SEXP dplyr_test_comparisons() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        LogicalVector __result = test_comparisons();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cumall
LogicalVector cumall(LogicalVector x);
RcppExport SEXP dplyr_cumall(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP );
        LogicalVector __result = cumall(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cumany
LogicalVector cumany(LogicalVector x);
RcppExport SEXP dplyr_cumany(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP );
        LogicalVector __result = cumany(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cummean
NumericVector cummean(NumericVector x);
RcppExport SEXP dplyr_cummean(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        NumericVector __result = cummean(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
