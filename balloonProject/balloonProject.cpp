#include <iostream>
#include <math.h> // using math.h library to obtain access to pow function

using namespace std;

int main() {
  //Declare variables and constants
  double balloonRadius = 0;
  double balloonQuantity = 0; 

  const double PI = 3.1415;
  const double DIMENSION = 1.33333333333;


  double balloonVolume = 0;

  // Ask the user for input
  
  // What is the radius?
  cout << "Enter the radius of the balloon: ";
  cin >> balloonRadius;

  // What is the quantity?
  cout << "Enter the quantity of balloons: ";
  cin >> balloonQuantity;
  

  // Make the calculation
  balloonVolume = DIMENSION * PI * pow(balloonRadius, 3) * balloonQuantity;
  // Produce the output
  cout << "The total volume is: " << balloonVolume << endl;

  system("pause");
  return 0;
} //end of main
