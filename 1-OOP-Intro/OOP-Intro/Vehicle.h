#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <cstdint>

class Vehicle
{
private:
    std::uint32_t NumberOfSits{2};
    std::string Color{"None"};

public:
    // Default constructor
    Vehicle();

    // Explicit constructor
    Vehicle(uint32_t numberOfSits, std::string color);

    // Destructor
    ~Vehicle();

    // Copy constructor
    Vehicle(const Vehicle& otherVehicle);

    void SetNumberOfSits(std::uint32_t numberOfSits);
    std::uint32_t GetNumberOfSits() const;
    //TODO get and set for color
};

#endif // VEHICLE_H
