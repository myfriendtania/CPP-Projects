#include <iostream>
using namespace std;

int main() {
  double factorial = 1;
  int i, n;

  cout << "Please Enter a Value Between 2 and 60 :";
  cin >> n;

  if(n >= 2 && n <= 60) 
  {
    for(i = 1; i <= n; i++) 
    {
      factorial *= i;
    }
    cout << "The Factorial for " << n << " is " << factorial; 
  }

  return 0;
}
