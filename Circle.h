#ifndef INC_9_LB_CIRCLE_H
#define INC_9_LB_CIRCLE_H
#include "Polygon.h"

class Circle
{
private:
    double radius;
public:
    Circle();
    Circle(double radius);
    double calculateArea();
    void getRadius();
    friend class Polygon;
};


#endif //INC_9_LB_CIRCLE_H
