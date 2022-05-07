#pragma once
#include <algorithm>

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

    template <typename _FwdIt, typename _Ty>
    inline bool binary_search(_FwdIt first, _FwdIt last, const _Ty& value)
    {
        first = std::lower_bound(first, last, value);

        if (first == last)
            return false;

        return !(value < *first);
    }
} //namespace EH8T