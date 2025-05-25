#include "Vehicle.h"

Vehicle::Vehicle()
{
    std::cout<<"default constructor\n";
}

Vehicle::Vehicle(std::uint32_t numberOfSits, std::string color):
    NumberOfSits{numberOfSits}, Color{color}
{
    std::cout<<"explicit constructor\n";
}

// Copy constructor
Vehicle::Vehicle(const Vehicle& otherVehicle):
    NumberOfSits{otherVehicle.NumberOfSits}, Color{otherVehicle.Color}
{
    std::cout<<"Copy constructor\n";
}

Vehicle::~Vehicle()
{
    std::cout<<"destructor\n";
}

Vehicle& Vehicle::operator=(const Vehicle& otherVehicle)
{
    this->NumberOfSits = otherVehicle.GetNumberOfSits();
    this->Color = otherVehicle.Color;

    return *this;
}

void Vehicle::SetNumberOfSits(std::uint32_t numberOfSits)
{
    this->NumberOfSits = numberOfSits;
}

std::uint32_t Vehicle::GetNumberOfSits() const
{
    return this->NumberOfSits;
}
