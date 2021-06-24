#include "all.h"

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};

    auto i = std::begin(v);

    int x = *i;
    std::cout << x << "\n"s;
    *i = 0;
    std::cout << *i << "\n"s;
    ++i;
    std::cout << *i << "\n"s;
    ++i;
    std::cout << *i << "\n"s;
}