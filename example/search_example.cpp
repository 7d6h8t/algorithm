#include <iostream>
#include <EH8T/algorithm.hpp>
#include <vector>

int main()
{
    std::vector<int32_t> v{ 1, 2, 3, 4 };
    int n1 = 3;
    int n2 = 5;

    auto result1 = EH8T::find(begin(v), end(v), n1);
    auto result2 = EH8T::find(begin(v), end(v), n2);

    (result1 != std::end(v))
        ? std::cout << "v contains " << n1 << '\n'
        : std::cout << "v does not contain " << n1 << '\n';

    (result2 != std::end(v))
        ? std::cout << "v contains " << n2 << '\n'
        : std::cout << "v does not contain " << n2 << '\n';

    std::vector<int32_t> haystack{ 1, 3, 4, 5, 9 };
    std::vector<int32_t> needles{ 1, 2, 3 };

    for (auto needle : needles)
    {
        std::cout << "Binary Searching for " << needle << '\n';
        if (EH8T::binary_search(haystack.begin(), haystack.end(), needle))
            std::cout << "Found " << needle << '\n';
        else
            std::cout << "no dice!\n";
    }
}
