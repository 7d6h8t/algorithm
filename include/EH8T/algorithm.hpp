#pragma once
#include <vector>

namespace EH8T
{
    template <typename _InIt, typename _Ty>
    inline _InIt find(_InIt first, const _InIt last, const _Ty& value)
    {
        for (; first != last; ++first)
        {
            if (*first == value)
                return first;
        }
        return last;
    }

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

    template <typename _Ty>
    bool binary_search(const std::vector<_Ty>& data, const _Ty& value)
    {
        size_t lower = 0;
        size_t upper = data.size() - 1;

        while (lower <= upper)
        {
            size_t middle = (lower + upper) / 2;

            if (data[middle] == value)
                return true;
            else if (data[middle] < value)
                lower = middle + 1;
            else
                upper = middle - 1;
        }
        return false;
    }
} //namespace EH8T