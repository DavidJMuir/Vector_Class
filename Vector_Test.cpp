#include "Cartesian_Vector_2D.hh"
#include "Cartesian_Vector_3D.hh"

Vector_2D Vector_2D::operator + (const Vector_2D& Parameter){
  Vector_2D Resultant;
  Resultant.x = x + Parameter.x;
  Resultant.y = y + Parameter.y;
  return Resultant;
}
Vector_2D Vector_2D::operator - (const Vector_2D& Parameter){
  Vector_2D Resultant;
  Resultant.x = x - Parameter.x;
  Resultant.y = y - Parameter.y;
  return Resultant;
} 

Vector_3D Vector_3D::operator + (const Vector_3D& Parameter){
  Vector_3D Resultant;
  Resultant.x = x + Parameter.x;
  Resultant.y = y + Parameter.y;
  Resultant.z = z + Parameter.z;
  return Resultant;
}

Vector_3D Vector_3D::operator - (const Vector_3D& Parameter){
  Vector_3D Resultant;
  Resultant.x = x - Parameter.x;
  Resultant.y = y - Parameter.y;
  Resultant.z = z - Parameter.z;
  return Resultant;
}

double Vector_2D::Scalar_Product(const Vector_2D& Parameter) {
    Vector_2D Multiplied_Components;
    double Result;
    Multiplied_Components.x = x*Parameter.x;
    Multiplied_Components.y = y*Parameter.y;
    Result = Multiplied_Components.x + Multiplied_Components.y;
    return Result;
  }

double Vector_3D::Scalar_Product(const Vector_3D& Parameter) {
    Vector_3D Multiplied_Components;
    double Result;
    Multiplied_Components.x = x*Parameter.x;
    Multiplied_Components.y = y*Parameter.y;
    Multiplied_Components.z = z*Parameter.z;
    Result = Multiplied_Components.x + Multiplied_Components.y + Multiplied_Components.z;
    return Result;
  }

Vector_3D Vector_3D::Cross_Product(const Vector_3D& Parameter) {
    Vector_3D Resultant;
    Resultant.x = y*Parameter.z - z*Parameter.y;
    Resultant.y = z*Parameter.x - x*Parameter.z;
    Resultant.z = x*Parameter.y - y*Parameter.x;
    return Resultant;
  }


int main ()
{
  int x = 0, y = 0;
  Vector_2D A (3, 1);
  Vector_2D B (4, 2);
  Vector_3D C (1, 4, 5);
  Vector_3D D (2, -6, 7);
  Vector_2D Resultant_Vector;
  Vector_3D Resultant_Vector_3D;
  Vector_2D Input_Vector;

  Resultant_Vector = A + B;
  Resultant_Vector_3D = C + D;
  cout << "The resultant vector of A + B is (" << Resultant_Vector.x << ", " << Resultant_Vector.y << ")" << endl;
  cout << "The resultant vector of C + D is (" << Resultant_Vector_3D.x << ", " << Resultant_Vector_3D.y << ", " << Resultant_Vector_3D.z << ")" << endl;

  Resultant_Vector = A - B;
  Resultant_Vector_3D = C - D;
  cout << "The resultant vector of A - B is (" << Resultant_Vector.x << ", " << Resultant_Vector.y << ")" << endl;
  cout << "The resultant vector of C - D is (" << Resultant_Vector_3D.x << ", " << Resultant_Vector_3D.y << ", " << Resultant_Vector_3D.z << ")" << endl;

  cout << "The scalar product of A and B is " << A.Scalar_Product(B) << endl;
  cout << "The scalar product of C and D is " << C.Scalar_Product(D) << endl;
  Resultant_Vector_3D = C.Cross_Product(D);
  cout << "The cross product of C and D is (" <<  Resultant_Vector_3D.x << ", " << Resultant_Vector_3D.y << ", " << Resultant_Vector_3D.z << ")" << endl;

  cout << "The magnitude of A is " << A.Magnitude() << endl;
  cout << "The magnitude of C is " << C.Magnitude() << endl;
  cout << "The magnitude of the cross product of C and D is " << Resultant_Vector_3D.Magnitude() << endl;

  cout << "Input a 2D vector." << endl;
  cout << "Input the x component of the vector: ";
  cin >> x;
  cout << "Input the y component of the vector: ";
  cin >> y;
  Input_Vector.x = x;
  Input_Vector.y = y;
  cout << "The magnitude of the input vector is " << Input_Vector.Magnitude() << endl;
  return 0;
}
