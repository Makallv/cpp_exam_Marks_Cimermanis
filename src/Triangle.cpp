#include "../include/Triangle.h"
#include <map>
#include <string>

Triangle::Triangle(double x, double y, double z){
    if (z < 0 || y < 0 || x < 0) {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    } else {
        this->x = x;
        this->y = y;
        this->z = z;
    }
}

void Triangle::updateSize(double xx, double yy, double zz) {
    x += xx;
    y += yy;
    z += zz;
}

bool Triangle::isEquilateral() {
    return x == y && y == z && x == z;

}

bool Triangle::isIsosceles() {
    if (isEquilateral()){
        return false;
    } else {
        return x == z || x == y || y == z;
    }

}

double Triangle::getPerimeter() {
    return x + y + z;
}

std::map<std::string, double> Triangle::getEdgeNameAndLength() {
        std::map<std::string, double> namesAndLengths;
        namesAndLengths.insert(std::pair<std::string, double>("x: ", x));
        namesAndLengths.insert(std::pair<std::string, double>("y: ", y));
        namesAndLengths.insert(std::pair<std::string, double>("z: ", z));
    return namesAndLengths;

}

double Triangle::getLongestEdge() {
    double longestEdge;

    if (x > y && x > z){
        longestEdge = x;
    } else if (y > x && y > z){
        longestEdge = y;
    } else{
        longestEdge = z;
    }

    return longestEdge;
}

double Triangle::getX() {
    return x;
}

double Triangle::getY() {
    return y;
}

double Triangle::getZ() {
    return z;
}
