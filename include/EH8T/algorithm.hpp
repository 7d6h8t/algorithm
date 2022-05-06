#pragma once
#include <vector>

namespace EH8T
{
    template <typename _Ty>
    bool linear_search(const std::vector<_Ty>& data, const _Ty& value)
    {
        for (const _Ty& elem : data)
        {
            if (elem == value)
                return true;
        }
        return false;
    }
} //namespace EH8T