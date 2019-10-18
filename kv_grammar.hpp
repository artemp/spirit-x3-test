#pragma once

#include <string>
#include <boost/spirit/home/x3.hpp>


namespace x3 = boost::spirit::x3;
using kv_grammar_type = x3::rule<class kv_tag, std::pair<std::string, int>>;

kv_grammar_type const kv = "Key/Value";

BOOST_SPIRIT_DECLARE(kv_grammar_type);
