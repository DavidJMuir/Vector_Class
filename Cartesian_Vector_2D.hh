#ifndef CARTESIAN_VECTOR_2D_H
#define CARTESIAN_VECTOR_2D_H 

#include <iostream>
#include <math.h>

using namespace std;

/*******************************************************************************
                                Class: Vector_2D

This class allows the user to define and work with 2-dimensional vectors in Cartesian space. The class allows the user to:
1) add two 2D vectors together.
2) subtract a 2D vector from another 2D vector.
3) calculate the magnituse of a 2D vector.
4) calculate the scalar/dot product of two 2D vectors.
*******************************************************************************/

class Vector_2D {
public:
  double x, y;

  Vector_2D() {};
  Vector_2D(double a, double b) : x(a), y(b) {};

  // Function which adds two 2D vectors.
  Vector_2D operator + (const Vector_2D&);

  // Function which takes the difference between two 2D vectors.
  Vector_2D operator - (const Vector_2D&);

  // Function which calculates the magnitude of a 2D vector.
  double Magnitude() {return sqrt(pow(x, 2) + pow(y, 2));}

  // Function which calculates the scalar/dot product of two 2D vectors.
  double Scalar_Product(const Vector_2D& Parameter);

};
#endif
