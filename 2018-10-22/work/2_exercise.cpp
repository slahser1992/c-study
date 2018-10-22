#include <iostream>

int longtoyd(int length);

int main(){
  using namespace std;

  int length;

  cout << "Input long please.\n";

  cin >> length;

  int yd = longtoyd(length);
  
  cout << "the yd is " << yd << "\n";

  return 0;
}

int longtoyd(int length) {
  return 220 * length;
}
