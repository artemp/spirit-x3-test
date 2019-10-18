#include "kv_grammar.hpp"
#include "string_grammar.hpp"
#include <boost/fusion/include/std_pair.hpp>

namespace x3 = boost::spirit::x3;

// import grammar
namespace {
string_grammar_type const& str_ = str;
}

struct  assign_key
{
    template <typename Context>
    void operator() (Context const& ctx) const
    {
        std::get<0>(_val(ctx)) = _attr(ctx);
    }
};

struct  assign_string
{
    template <typename Context>
    void operator() (Context const& ctx) const
    {
        if (_attr(ctx) == "well-known-value")
            std::get<1>(_val(ctx)) = 123456789;
        else
            std::get<1>(_val(ctx)) = 0;
    }
};

static auto kv_def = str[assign_key()] >> ":" >> str[assign_string()];

BOOST_SPIRIT_DEFINE(kv);
