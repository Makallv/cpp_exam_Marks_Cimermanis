#include <iostream>
#include "include/Triangle.h"



int main() {
    Triangle triangle {3,4,3};
    std::cout << "The perimeter of this triangle is: " << triangle.getPerimeter() << std::endl;
    triangle.getEdgeNameAndLength() ;
    triangle.updateSize(2.5, 3.4, 2.5);
    triangle.getEdgeNameAndLength();
    std::cout << triangle.isIsosceles() << " " << triangle.isEquilateral() << std::endl;
    std::cout << triangle.getLongestEdge() << std::endl;
    return 0;
}
