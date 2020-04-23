#include <iostream>
#include "math.h"

int main()
{
    Math math;
    int a = 12;
    int b = 2;
    int result = math.Plus(a, b);
    std::cout << a << " + " << b << " = " << result << std::endl;
    return 0;
}
