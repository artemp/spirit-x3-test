#pragma once

#include <boost/spirit/home/x3.hpp>
#include <string>

namespace x3 = boost::spirit::x3;
using space_type = x3::standard::space_type;
//using iterator_type = char const*;
using iterator_type = std::string::const_iterator;
using context_type = x3::phrase_parse_context<space_type>::type;
