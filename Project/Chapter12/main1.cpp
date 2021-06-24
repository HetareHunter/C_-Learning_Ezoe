#include "all.h"

int main()
{
    std::cout << "float: "s << std::numeric_limits<float>::digits10 << "\n"s;
    std::cout << "double: "s << std::numeric_limits<double>::digits10 << "\n"s;
    std::cout << "long double: "s << std::numeric_limits<long double>::digits10
              << "\n"s;

    // float f1 = {};
    // float f2 = {};
    // std::cin >> f1 >> f2;
    // std::cout << f1 + f2;
}