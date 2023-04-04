#pragma once

#include <string>

using namespace std;

const int INVALID_COORDINATE = -1;

//
//  stringToInteger
//
//  Purpose: To convert the specified string of digits to a
//           non-negative integer.
//  Parameter(s):
//    <1> str_in: The string to convert
//  Precondition(s): N/A
//  Returns: str_in, expressed as an integer.  If str_in is the
//           empty string or contains any non-digit characters,
//           INVALID_COORDINATE is returned.
//  Side Effect: N/A
//
int stringToInteger(const string &str_in);

//
//  placeStringToColumn
//
//  Purpose: To determine the column for a board place from the
//           specified place-string.  This depends on the first
//           character of the place-string.
//  Parameter(s):
//    <1> place_string_in: The place-string
//  Precondition(s): N/A
//  Returns: The column, expressed as an integer.  If
//           place_string does not contain a valid column,
//           INVALID_COORDINATE is returned.
//  Side Effect: N/A
//
int placeStringToColumn(const string &place_string_in);

//
//  placeStringToRow
//
//  Purpose: To determine the row for a board place from the
//           specified place-string.  This depends on the second
//           and following characters of the place-string.
//  Parameter(s):
//    <1> place_string_in: The place-string
//  Precondition(s): N/A
//  Returns: The row, expressed as an integer.  If place_string
//           does not contain a valid row, INVALID_COORDINATE is
//           returned.
//  Side Effect: N/A
//
int placeStringToRow(const string &place_string_in);

//
//  isPlaceStringWellFormed
//
//  Purpose: To determine if a place-string is well-formed.
//           This is equivilent to whether it contains both a
//           valid row and a valid column.
//  Parameter(s):
//    <1> place_string_in: The place-string
//  Precondition(s): N/A
//  Returns: Whether place_string is well-formed.
//  Side Effect: N/A
//
bool isPlaceStringWellFormed(const string &place_string_in);