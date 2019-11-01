#ifndef _POINT_H
#define _POINT_H

#include <iostream>
#include "fraction.h"

class Point {
private:
Fraction x_value, y_value;

public:
Point(Fraction x=0, Fraction y=1);
~Point(void);

Point operator=(Point loc);
Point operator+(Point loc);
Point operator-(Point loc);
Point operator*(Fraction rhs);
Fraction operator*(Point loc);

friend std::istream &operator>>(std::istream &, Point &);
friend std::ostream &operator<<(std::ostream &, Point &);

};

#endif
