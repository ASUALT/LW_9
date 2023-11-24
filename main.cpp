#include <iostream>
#include "Polygon.h"
using namespace std;

int main() {

    Polygon poly(8,4);
    cout << "Area of circle = " << poly.calculateArea()<< endl;

    return 0;
}
