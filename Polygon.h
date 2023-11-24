#ifndef INC_9_LB_POLYGON_H
#define INC_9_LB_POLYGON_H
#include "Circle.h"

class Polygon
{
private:
    int amountOfSide;
    int sideLenth;
public:
    Polygon(int amountOfSide,int sideLenth);
    double calculateArea();
};


#endif //INC_9_LB_POLYGON_H
