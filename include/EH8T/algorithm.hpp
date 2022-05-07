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

    template<typename _FwdIt, typename _Ty>
    inline _FwdIt lower_bound(_FwdIt first, _FwdIt last, const _Ty& value)
    {
        _FwdIt it;
        typename std::iterator_traits<_FwdIt>::difference_type count, step;
        count = std::distance(first, last);

        while (count > 0)
        {
            it = first;
            step = count >> 1; // == count * 1/2^1;
            std::advance(it, step);
            if (*it < value)
            {
                first = ++it;
                count -= step + 1;
            }
            else
                count = step;
        }
        return first;
    }

    template <typename _FwdIt, typename _Ty>
    inline bool binary_search(_FwdIt first, _FwdIt last, const _Ty& value)
    {
        first = EH8T::lower_bound(first, last, value);

        if (first == last)
            return false;

        return !(value < *first);
    }
} //namespace EH8T