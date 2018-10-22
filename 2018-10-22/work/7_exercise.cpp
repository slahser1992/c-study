#include <iostream>

using namespace std;

int showTime(int hour, int minute);

int main() {

  cout << "Enter the number of hours: ";
  
  int hour;

  cin >> hour;

  cout << "Enter the number of minutes: ";

  int minute;

  cin >> minute;

  showTime(hour, minute);
}

int showTime(int hour, int minute) {

  cout << "Time: " <<  hour << ":" << minute << endl;

  return 0;
}
