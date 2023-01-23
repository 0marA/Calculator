String pressedValue = "", expression = "", number = "";
boolean lock = false, greeting = true;

void setup() {
  Serial.begin(9600);
  expression = "1+2";
}

void loop() {
  // put your main code here, to run repeatedly:
  calculate();


}

void calculate() {
  number = "";
  int arrayIndex = 0;
  double numbers[50];
  String operators[50];
  for (int i = 0; i < expression.length(); i++) {
    if (isDigit(expression[i])) {
      number += expression[i];
    } else {
      numbers[arrayIndex] = number.toInt();
      operators[arrayIndex] = expression[i];
      arrayIndex++;
      number = "";
    }
  }
  numbers[arrayIndex] = number.toInt();
  double  result = numbers[0];
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

  Serial.println(result);
}
