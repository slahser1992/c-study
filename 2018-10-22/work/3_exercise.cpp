#include <iostream>

using namespace std;

void func1();
void func2();

int main() {
  func1();
  func1();
  func2();
  func2();
}

void func1(){
  cout << "Three blind mice\n";
}

void func2(){
  cout << "See how they run\n";
}
