#include "../include/Triangle.h"
#include "gtest/gtest.h"
#include <algorithm>



class TriangleTest : public ::testing::Test{
protected:
    void SetUp() override {
        // Initialize triangles
        this->triangle0 = Triangle (2.3, 4.5, 7);
        this->triangle1 = Triangle (2.5, 4, 2.5);
        this->triangle2 = Triangle (4, 4, 4);
        this->triangle3 = Triangle (2, -3, 4);
        this->tri_vector.push_back(triangle0);
        this->tri_vector.push_back(triangle1);
        this->tri_vector.push_back(triangle2);
        this->tri_vector.push_back(triangle3);
    }

    Triangle triangle0;
    Triangle triangle1;
    Triangle triangle2;
    Triangle triangle3;
    std::vector<Triangle> tri_vector;
};

TEST_F(TriangleTest, TriangleGetTests){
    //unit tests for getPerimeter and getLongestEdge functions

    std::vector<double> expected_edge = {7, 4, 4, 0};
    std::vector<double> expected_perimeter = {13.8, 9, 12, 0};

    for (int i = 0; i < tri_vector.size(); i++) {
        std::cout << "Checking that Triangle" << i
        << " longest edge is " << expected_edge[i]
        << " and perimeter is " << expected_perimeter[i] << std::endl;
        EXPECT_EQ(tri_vector[i].getLongestEdge(), expected_edge[i]);
        EXPECT_EQ(tri_vector[i].getPerimeter(), expected_perimeter[i]);
    }
}

TEST_F(TriangleTest, getNameAndLengthsTests){
    // unit tests for function getNamesAndLengths

    std::vector<double> expected_x = {2.3, 2.5, 4, 0};
    std::vector<double> expected_y = {4.5, 4, 4, 0};
    std::vector<double> expected_z = {7, 2.5, 4, 0};

    for (int i = 0; i < tri_vector.size(); i++) {
        std::cout << "Checking Triangle" << i << " x is "
        << expected_x[i] << ", y is "
        << expected_y[i] << ", z is "
        << expected_z[i] << std::endl;
        EXPECT_EQ(tri_vector[i].getX(), expected_x[i]);
        EXPECT_EQ(tri_vector[i].getY(), expected_y[i]);
        EXPECT_EQ(tri_vector[i].getZ(), expected_z[i]);
    }

}

TEST_F(TriangleTest, isTriangleTests){
    // unit tests for isEquilateral and isIsosceles
    EXPECT_TRUE(triangle2.isEquilateral());
    EXPECT_TRUE(triangle1.isIsosceles());
    EXPECT_FALSE(triangle0.isIsosceles());
    EXPECT_FALSE(triangle0.isEquilateral());
    EXPECT_FALSE(triangle1.isEquilateral());
    EXPECT_FALSE(triangle2.isIsosceles());
}

TEST_F(TriangleTest, updSizeTests){
    // unit tests for updateSize function
    triangle0.updateSize(4.7, 2.1, 0);
    triangle2.updateSize(2.4, 3, 2.5);
    triangle1.updateSize(2.5, 2, 2.4);
    triangle3.updateSize(2.3, 4, 4.1);
    EXPECT_EQ(triangle0.getX(), 7);
    EXPECT_EQ(triangle2.getX(), 6.4);
    EXPECT_FALSE(triangle2.isEquilateral());
    EXPECT_FALSE(triangle1.isIsosceles());
    EXPECT_TRUE(triangle0.isIsosceles());
    EXPECT_EQ(triangle3.getY(), 4);
}