//
// Created by MacbookPro on 5/12/24.
//

#ifndef REVISEGETDISTANCE_REDP_H
#define REVISEGETDISTANCE_REDP_H
#include <string>

class reDP {
public:
    reDP();
    reDP(double x, double y, double z);

    // Getter
    double GetX() const;
    double GetY() const;
    double GetZ() const;

    // Setter
    void SetX(double x);
    void SetY(double y);
    void SetZ(double z);

    std::string ToString() const;

private:
    double _x;
    double _y;
    double _z;
};
#endif //REVISEGETDISTANCE_REDP_H
