#include <iostream>

int main() {
  using namespace std;

  cout << "Please enter a Celsius value:";

  double Celsius;

  cin >> Celsius;

  cout << Celsius << " degrees Celsius is " << Celsius * 1.8 + 32 << " degrees Fahrenheit.\n";

  return 0;
}
