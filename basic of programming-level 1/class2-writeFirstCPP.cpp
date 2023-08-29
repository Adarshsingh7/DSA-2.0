#include <iostream>
using namespace std;

int main() {
  cout << "hello world" << endl;
  // integer
  int num1 = 1;
  cout << "integer" << endl;
  cout << num1 << endl;
  cout << "size: " << sizeof(num1) << endl << endl;

  // long
  long num2 = 2;
  cout << "long" << endl;
  cout << num2 << endl;
  cout << "size: " << sizeof(num2) << endl << endl;

  // char
  // char character = 126;
  char character = "a";
  cout << "character" << endl;
  cout << character << endl;
  cout << "size: " << sizeof(character) << endl << endl;

  // float
  float fl = 10;
  cout << "float" << endl;
  cout << fl << endl;
  cout << "size: " << sizeof(fl) << endl << endl;

  // operators
  cout << endl << "operators" << endl;
  int a = 5;
  int b = 10;
  // assignment
  cout << a + b << endl;
  cout << a - b << endl;
  cout << a * b << endl;
  cout << 1.0 * a / b << endl;
  cout << a % b << endl;

  // relational operator
  cout << endl << (a < b) << endl;
  cout << (a > b) << endl;
  // cout << (a > b) << endl;

  // logical operator
  int car = 19;
  int age = 2;
  cout << endl;
  // if (car > 1 || age >= 18)
  if (car > 1 && age >= 18)
    cout << "you can have licence";

  //  DATA INPUT
  int marks;
  cout << "enter the marks here: ";
  cin >> marks;
  cout << "the marks are " << marks;
  cout << sizeof(6.6);
}
