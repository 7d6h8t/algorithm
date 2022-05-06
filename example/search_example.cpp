#include <iostream>
#include <EH8T/algorithm.hpp>
#include <vector>

int main()
{
    std::vector<int32_t> haystack{ 1, 3, 4, 5, 9 };
    std::vector<int32_t> needles{ 1, 2, 3 };

    for (auto needle : needles)
    {
        std::cout << "Searching for " << needle << '\n';
        if (EH8T::linear_search(haystack, needle))
            std::cout << "Found " << needle << '\n';
        else
            std::cout << "no dice!\n";
    }
}
