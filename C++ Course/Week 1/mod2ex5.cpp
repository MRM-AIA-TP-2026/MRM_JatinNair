#include <iostream>
using namespace std;

int main() {
  
  string num1;
  string num2;
  cout << "Type the first whole number and then press Enter or Return: ";
  cin >> num1;
  cout << "Type the second whole number and then press Enter or Return: ";
  cin >>num2;
  
  //fix the code below this line
  int intNum1 = stoi(num1);
  int intNum2 = stoi(num2);
  int sum= intNum1+intNum2;
  cout << ( num1 + " + " + num2 + " = " + to_string(sum));

  //fix the code above this line
  
  return 0;
  
}
