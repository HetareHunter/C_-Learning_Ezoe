#include "all.h"

int main()
{
    std::cout << sizeof(char) << "\n"s;
    std::cout << sizeof(short) << "\n"s;
    std::cout << sizeof(int) << "\n"s;
    std::cout << sizeof(long) << "\n"s;
    std::cout << sizeof(long long) << "\n"s;

    std::cout << std::numeric_limits<int>::min() << "\n"s;
    std::cout << std::numeric_limits<int>::max() << "\n"s;

    std::cout << std::numeric_limits<unsigned int>::min() << "\n"s;
    std::cout << std::numeric_limits<unsigned int>::max() << "\n"s;

    std::cout << std::numeric_limits<long long>::min() << "\n"s;
    std::cout << std::numeric_limits<long long>::max() << "\n"s;
    // int x {};
    // std::cout << sizeof(x);
}