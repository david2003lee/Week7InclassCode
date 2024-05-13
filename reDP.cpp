//
// Created by MacbookPro on 5/12/24.
//

#include "reDP.h"
#include <cmath>

reDP::reDP() : _x(0.0), _y(0.0), _z(0.0) {}

reDP::reDP(double x, double y, double z) : _x(x), _y(y), _z(z) {}

double reDP::GetX() const {
    return _x;
}

double reDP::GetY() const {
    return _y;
}

double reDP::GetZ() const {
    return _z;
}

void reDP::SetX(double x) {
    _x = x;
}

void reDP::SetY(double y) {
    _y = y;
}

void reDP::SetZ(double z) {
    _z = z;
}

std::string reDP::ToString() const {
    return "(" + std::to_string(_x) + ", " + std::to_string(_y) + ", " + std::to_string(_z) + ")";
}