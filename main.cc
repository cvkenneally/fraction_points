#include <iostream>
#include "fraction.h"
#include "point.h"

using namespace std;

int main(){

        // Declare variables
        Point p1, p2, q1, q2;
        Point r, s, v, intr;
        Fraction d, t, u;

        // Gather points from the user      (Fraction, Fraction)
        cout << "Enter point p1: ";
        cin >> p1;
        cout << "Enter point p2: ";
        cin >> p2;
        cout << "Enter point q1: ";
        cin >> q1;
        cout << "Enter point q2: ";
        cin >> q2;

        // Calculate the distance from points
        r = p2 - p1;
        s = q2 - q1;
        v = q1 - p1;
        d = r * s;
        //intr = p1 + t*r = q1 + u*s;

        // Display whether the segments are collinear or parallel.
        if(d == 0) {
                if(v * s == 0) {
                        cout << "Segments are collinear." << endl;
                }
                else{
                        cout << "Segments are parallel." << endl;
                }
        }

        // Display where the segments intersect or tell the user they don't
        else{
                t = (v * s) / d;
                u = (v * r) / d;
                intr = p1 + (r * t);
                if (t >= 0 && t <= 1 && u >= 0 && u <= 1) {
                        cout << "Segments intersect at: " << intr << endl;
                        // cout << "r= " << r << " t= " << t << " p1= " << p1 << endl;
                }
                else{
                        cout << "Segments are not parallel but do not intersect." << endl;
                }
        }

}
