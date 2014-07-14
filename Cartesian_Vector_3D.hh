#ifndef CARTESIAN_VECTOR_3D_H
#define CARTESIAN_VECTOR_3D_H

#include <iostream>
#include <math.h>

/*******************************************************************************
                                Class: Vector_3D

This class allows the user to define and work with 3-dimensional vectors in Cartesian space. The class allows the user to:
1) add two 3D vectors together.
2) subtract one 3D vector from another 3D vector.
3) calculate the magnitude of a 3D vector. 
4) calculate the scalar/dot product of two 3D vectors.
5) calculate the vector/cross product of two 3D vectors.
*******************************************************************************/

class Vector_3D {
public:
  double x, y, z;

  Vector_3D() {};
  Vector_3D(double a, double b, double c) : x(a), y(b), z(c) {};

  // Function for adding two 3D vectors.
  Vector_3D operator + (const Vector_3D&);

  // Function for calculating the difference between two 3D vectors.
  Vector_3D operator - (const Vector_3D&);

  // Function for calculating the magnitude of a 3D vector.
  double Magnitude() {return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));}

  // Function for calculating the scalar/dot product of two 3D vectors.
  double Scalar_Product(const Vector_3D& Parameter);

  // Function for calculating the vector/cross product of two 3D vectors.
  Vector_3D Cross_Product(const Vector_3D& Parameter);
};

#endif
