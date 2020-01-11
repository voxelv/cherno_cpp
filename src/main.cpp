#include <iostream>

int multiply(int a, int b)
{
    return(a * b);
}

void multiply_and_log(int a, int b)
{
    int result = multiply(a, b);
    std::cout << result << std::endl;
}

int main()
{
    multiply_and_log(3, 2);
    multiply_and_log(8, 5);
    multiply_and_log(90, 45);

    std::cin.get();
}
