#include <iostream>

#include "Vehicle.h"


void foo(Vehicle &v)
{
    //std::cout << v << "\n";
}

void foo(Vehicle &&v)
{
    //std::cout << v << "\n";
}

int main()
{
    Vehicle moto{2, "green"};

    foo({4, "black"});

    std::cout<<"End\n";
    return 0;
}
