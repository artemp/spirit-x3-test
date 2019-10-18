#include "grammar_config.hpp"
#include "string_grammar_def.hpp"
#include <boost/spirit/home/x3.hpp>

BOOST_SPIRIT_INSTANTIATE(string_grammar_type, iterator_type, context_type);
