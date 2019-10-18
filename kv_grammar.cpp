#include "grammar_config.hpp"
#include "kv_grammar_def.hpp"
#include "string_grammar.hpp"

BOOST_SPIRIT_INSTANTIATE(kv_grammar_type, iterator_type, context_type);
