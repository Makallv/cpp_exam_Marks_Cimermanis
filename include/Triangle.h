#include <string>
#include <map>

class Triangle
{
   double x,y,z;


public:
    Triangle(double x = 0, double y = 0, double z = 0);

    double getLongestEdge();

    void updateSize(double xx, double yy, double zz);

    double getPerimeter();

    std::map<std::string, double> getEdgeNameAndLength();

    bool isIsosceles();

    bool isEquilateral();

    double getX();

    double getY();

    double getZ();
};