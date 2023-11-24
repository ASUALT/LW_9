#include "Polygon.h"
#include "Circle.h"
#include <cmath>
#include <iostream>

Polygon::Polygon(int amountOfSide,int sideLenth)
{
    this->amountOfSide = amountOfSide;
    this->sideLenth = sideLenth;

}

double Polygon::calculateArea()
{
    double radius = sideLenth/(2*sin(M_PI/amountOfSide));
    Circle crcl(radius);
    //crcl.getRadius();
    return crcl.calculateArea();
}
