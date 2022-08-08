#pragma once
#include "getcli_pch.h"


#define ARGS_ERROR_STR "args error, use `help` to get usage"


void ExeCommand(std::vector<std::string> &parameters)
{
    for (auto param : parameters)
    {
        if (getcli::is_debug)
        {
            std::cout << param << "\n";
        }
    }
}
