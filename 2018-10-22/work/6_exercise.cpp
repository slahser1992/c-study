#include <iostream>

using namespace std;

double lightyeartoAU(double lightyear);

int main() {
  
  cout << "Enter the number of light years: ";
  
  double lightyear;

  cin >> lightyear;

  double AU = lightyeartoAU(lightyear);

  cout << lightyear << " light years = " << AU << "astronomical units." << endl;

  return 0;
}

double lightyeartoAU(double lightyear) {
  return lightyear * 63240;
}
