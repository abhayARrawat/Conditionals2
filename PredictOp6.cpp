#include <iostream>
using namespace std;
int main() {
  int number = -4;
  char result;
  result = number > 0 ? 'P' : 'N';
  cout << result << endl;
  return 0;
}
//ternary operator check the number is greater than zero or lesser than zero
//if it is greater it will print P
//if it is lesser it will print N
//output is :- N