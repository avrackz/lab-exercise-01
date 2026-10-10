/*************************************
 * Автор:   Лыско Александр          *
 * Задание: Линейные алгоритмы       *
 * Вариант: 5                        *
 ************************************/

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {

  const double pi = acos(-1.0);
  double side;
  double height;
  double thickness;
  double depth;
  double diameter;

  side = 3.52;
  height = 1.27;
  thickness = 150.0 / 1000.0;
  depth = 0.635;
  diameter = 36.0 / 1000.0;

  double time;
  double k;
  double m;
  double f;
  double g;
  double square_out, square_in;

  square_in = pow( (side - (2 * thickness)), 2 );
  square_out = side * side;
  g = 9.81;
  f = ( pi * (diameter * diameter) ) / 4;
  m = 0.82;
  k = ( sqrt(depth - thickness) ) - ( sqrt(height - thickness - (height - depth) * (square_out / square_in) ) );
  time = ( (2 * k) / (m * f * sqrt(2 * g) ) ) * ( (square_out * square_in) / (square_out - square_in) );
  cout << "t = " << fixed << setprecision(6) << time << endl;

}