#include "point.h"
#include "fraction.h"

Point::Point(Fraction x, Fraction y){

        x_value = x;
        y_value = y;

}

Point::~Point(void) {
}

Point Point::operator=(Point loc) {
        x_value = loc.x_value;
        y_value = loc.y_value;

        return loc;
}

Point Point::operator+(Point loc) {
        Fraction
                s,
                t;

        s = x_value + loc.x_value;
        t = y_value + loc.y_value;

        return Point(s,t);
}

Point Point::operator-(Point loc) {
        Fraction
                s,
                t;

        s = x_value - loc.x_value;
        t = y_value - loc.y_value;

        return Point(s,t);
}

Point Point::operator*(Fraction rhs) {
        Fraction
                s, t;

        s = x_value * rhs;
        t = y_value * rhs;

        return Point(s,t);
}

Fraction Point::operator*(Point loc) {
        Fraction
                t;

        t = (x_value * loc.y_value) - (y_value * loc.x_value);

        return t;
}

std::istream &operator>>(std::istream &is,Point &p) {
        Fraction
                x,y;
        char
                open,comma,close;

        is >> open >> x >> comma >> y >> close;

        p = Point(x,y);
        return is;
}

std::ostream &operator<<(std::ostream &os, Point &p) {

        os << "(" << p.x_value << " , " << p.y_value << ")";

        return os;
}
