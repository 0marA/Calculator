// Include the string library
#include <iostream>
#include <string>

using namespace std;
string pressedValue = "", expression = "1+4/2", number = "";
bool lock = false, greeting = true;
int arrayIndex = 0;
double numbers[50];
string operators[50];

int main() {
  for (int i = 0; i < expression.length(); i++) {
    if (isdigit(expression[i])) {
      number += expression[i];
    } else {
      numbers[arrayIndex] = stoi(number);
      operators[arrayIndex] = expression[i];
      arrayIndex++;
      number = "";
    }
  }
  numbers[arrayIndex] = stoi(number);
  double result = numbers[0];
  for (int i = 0; i < arrayIndex; i++) {
    if (operators[i] == "+") {
      result += numbers[i + 1];
    } else if (operators[i] == "-") {
      result -= numbers[i + 1];
    } else if (operators[i] == "x") {
      result *= numbers[i + 1];
    } else if (operators[i] == "/") {
      result /= numbers[i + 1];
    }
  }
  cout << result << endl;
  return -1;
}
