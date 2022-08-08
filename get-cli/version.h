#pragma once
#include "getcli_pch.h"


namespace getcli
{


class version
{
private:
    static const char info_header =
R"(
#-------------------------------------------------------------#
|                                                             |
|                                                             |
|                                                             |
#-------------------------------------------------------------#
)";
public:
    version(/* args */);
    virtual ~version();
};


version::version(/* args */)
{
}
version::~version()
{
}


} // namespace getcli
