#include <iostream>

#include "Vehicle.h"


void foo(const Vehicle &v)
{
    //v.SetNumberOfSits(20);
    std::cout<<v.GetNumberOfSits()<<"\n";
}

int main()
{
    Vehicle moto{2, "black"};

    foo(moto);

    moto.SetNumberOfSits(4);

    std::cout << moto.GetNumberOfSits() << "\n";

    std::cout<<"End\n";
    return 0;
}
