//David Lee
#include <iostream>
#include "reDP.h"
#include <cmath>
using namespace std;

double Distance(const reDP& p1, const reDP& p2) {
    double total = 0.0;
    total += (p1.GetX() - p2.GetX()) * (p1.GetX() - p2.GetX());
    total += (p1.GetY() - p2.GetY()) * (p1.GetY() - p2.GetY());
    total += (p1.GetZ() - p2.GetZ()) * (p1.GetZ() - p2.GetZ());
    return sqrt(total);
}

int main() {
    reDP p1(1, 2, 3);
    reDP p2(4, 5, 6);
    reDP p3;
    p3.SetX(7);
    p3.SetY(8);
    p3.SetZ(9);

    std::cout << "Coordinates of p3: " << p3.ToString() << std::endl;

    // Test Getters
    std::cout << "X coordinate: " << p3.GetX() << std::endl;
    std::cout << "Y coordinate: " << p3.GetY() << std::endl;
    std::cout << "Z coordinate: " << p3.GetZ() << std::endl;

    // Distance function
    std::cout << "Distance between p1 and p2: " << Distance(p1, p2) << std::endl;
    return 0;
}