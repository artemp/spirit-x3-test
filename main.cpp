#include <iostream>
#include "grammar_config.hpp"
#include "kv_grammar.hpp"

int main(int argc, char** argv)
{
    std::cerr << "spirit-x3 test" << std::endl;

    if (argc != 2)
    {
        std::cerr << "Usage:" << argv[0] << " <key:value>" << std::endl;
        return 1;
    }
    std::string input{argv[1]};
    std::pair<std::string, int> output;
    std::cerr << "about to parse:" << input << " .." << std::endl;
    namespace x3 = boost::spirit::x3;
    auto const& grammar = kv;
    if (!x3::phrase_parse(input.cbegin(), input.cend(), grammar, space_type(), output))
    {
        std::cerr << "fail to parse" << std::endl;
    }
    else
    {
        std::cerr << "PARSED:" << output.first  << ":" << output.second << std::endl;
    }
    return 0;
}
