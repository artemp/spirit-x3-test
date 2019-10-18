#pragma once

#include <boost/spirit/home/x3.hpp>


namespace x3 = boost::spirit::x3;
using string_grammar_type = x3::rule<class string_tag, std::string>;

string_grammar_type const str = "String";

BOOST_SPIRIT_DECLARE(string_grammar_type);
