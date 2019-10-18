#include "string_grammar.hpp"

namespace x3 = boost::spirit::x3;

using x3::lit;
using x3::char_;
using x3::no_skip;

struct append
{
    template <typename Context>
    void operator() (Context const& ctx) const
    {
        _val(ctx) += _attr(ctx);
    }
};

static auto str_def = lit('"') > no_skip[*(~char_('"'))[append()]] > lit('"');

BOOST_SPIRIT_DEFINE(str);
