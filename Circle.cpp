#include "Circle.h"
#include <cmath>
#include <iostream>

Circle::Circle()
{
    radius = 1 ;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::calculateArea()
{
    return M_PI*radius*radius;
}

void Circle::getRadius()
{
    std::cout << "Radius: " <<radius << std::endl;
}
