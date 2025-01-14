#include <iostream>

int Multiply(int a, int b)
{
    return a * b;
}

void MultiplyAndLog(int a, int b)
{
    int result = Multiply(a, b);
    std::cout << result << std::endl;
}

int main()
{
    MultiplyAndLog(9,18);
    MultiplyAndLog(8,54);
    MultiplyAndLog(8,84);
    // int result = Multiply(4, 5);
    // std::cout << result << std::endl;

    // int result1 = Multiply(5, 5);
    // std::cout << result1 << std::endl;

    // int result2 = Multiply(9, 5);
    // std::cout << result2 << std::endl;
    std::cin.get();
}
