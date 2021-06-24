#include "all.h"

int main()
{
    std::vector<int> v = {3, 8, 2, 5, 6, 9, 4, 1, 7};
    std::size_t size = v.size();

    for (std::size_t head = 0; head != size; ++head)
    {
        // printfデバッグ
        // std::cout << "debug: head = "s << head << ", v = { "s;
        // for (std::size_t i = 0; i != v.size(); i++)
        // {
        //     std::cout << v.at(i) << " "s;
        // }
        // std::cout << "}\n"s;
        // printfデバッグ
        auto min = head;
        for (std::size_t index = head + 1; index != size; ++index)
        {
            // printfデバッグ
            std::cout << v.at(index) << ", "s;
            // printfデバッグ
            if (v.at(index) < v.at(min))
            {
                min = index;
            }
        }
        // printfデバッグ
        std::cout << "}\n"s;
        // printfデバッグ

        // std::cout << v.at(min) << " "s;
        auto tmp = v.at(head);
        v.at(head) = v.at(min);
        v.at(min) = v.at(head);
    }
    // std::cout << "\n"s;

    for (std::size_t index = 0; index != size; index++)
    {
        std::cout << v.at(index) << " "s;
    }
}