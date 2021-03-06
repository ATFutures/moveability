#' moveability.
#'
#' Moveability statistics for any specified city.
#'
#' @name moveability
#' @docType package
#' @importFrom Rcpp evalCpp
#' @importFrom RcppParallel RcppParallelLibs
#' @useDynLib moveability, .registration = TRUE
NULL

#' Pipe operator
#'
#' @name %>%
#' @rdname pipe
#' @keywords internal
#' @export
#' @importFrom magrittr %>%
#' @usage lhs \%>\% rhs
NULL

#' castlemaine
#'
#' 'Silicate' ('SC') format street network data for Castlemaine, Australia.
#'
#' @name castlemaine
#' @docType data
#' @keywords datasets
#' @format List of `data.frame` objects representing different components of the
#' street network
NULL

#' castlemaine_green
#'
#' Polygons of all green spaces in Castlemaine, Australia
#'
#' @name castlemaine_green
#' @docType data
#' @keywords datasets
#' @format \pkg{sf}-format `data.frame` of green space polygons
NULL

#' castlemaine_attr
#'
#' Centres of activity attraction in Castlemaing, Australia.
#'
#' @name castlemaine_attr
#' @docType data
#' @keywords datasets
#' @format A `data.frame` of point locations of activity attractors
NULL

