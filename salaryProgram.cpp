#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Input

  // initialize program state/inputs

  double currentSalary = 0.0;
  double raise = 0.0;
  double raiseRate = 0.0;
  double newSalary = 0.0;
  
  // Process

  // Prompt the user for their current salary
  cout << "Please enter your current salary: $";
  cin >> currentSalary;

  // Algorithm 

  // perform calculation to set the raise rate
  if(currentSalary >= 100000.00) {
    raiseRate = 0.15;
  } else if (currentSalary >= 50000.00 && currentSalary <= 99999.99) {
    raiseRate = 0.10;
  } else if(currentSalary >= 15000.00 && currentSalary <= 49999.99) {
    raiseRate = 0.07;
  } else if(currentSalary <= 14999.99) {
    raiseRate = 0.05;
  }

  // perform the calculation and final assignment to program state
  raise = currentSalary * raiseRate;
  newSalary = raise + currentSalary;
  
  // Output
  cout << "The raise has been calculated to: $" << setprecision(2) << fixed << raise << endl;
  cout << "The salary has been raised to: $" << setprecision(2) << fixed << newSalary << endl;
  
  system("pause")
  return 0
} //end of main
