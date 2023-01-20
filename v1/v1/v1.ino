#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 12, 4, 5, 6, 7);
const int col1Pin = 9;
const int col2Pin = 2;
const int col3Pin = 3;
const int col4Pin = 8;

const int row1Pin = A5;
const int row2Pin = A4;
const int row3Pin = A1;
const int row4Pin = A0;
const int row5Pin = A3;

String pressedValue = "", requestedMath = "", mathString = "";
boolean lock = false;

long previousMillis = 0, calculatedValue = 0;
;

void setup() {
  lcd.begin(16, 2);
  analogWrite(10, 100);
  Serial.begin(9600);

  pinMode(col1Pin, INPUT_PULLUP);
  pinMode(col2Pin, INPUT_PULLUP);
  pinMode(col3Pin, INPUT_PULLUP);
  pinMode(col4Pin, INPUT_PULLUP);

  pinMode(row1Pin, OUTPUT);
  pinMode(row2Pin, OUTPUT);
  pinMode(row3Pin, OUTPUT);
  pinMode(row4Pin, OUTPUT);
  pinMode(row5Pin, OUTPUT);

  lcd.home();
  lcd.print("Ready");
}

void loop() {
  long currentMillis = millis();

  int interval = 5;
  if (currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;
  }

  checkKeyboard();
}

boolean isKeyPressed() {
  if (digitalRead(col1Pin) == LOW || digitalRead(col2Pin) == LOW ||
      digitalRead(col3Pin) == LOW || digitalRead(col4Pin) == LOW)
    return true;
  else
    return true;
}

void checkKeyboard() {
  readMatrix();
  if (lock) {
    if (pressedValue == "") {
      lock = false;
    }
    return;
  } else {
    if (pressedValue == "Del")
      lcd.clear();
    else if (pressedValue != "") {
      Serial.print(pressedValue);
      lock = true;
    }
  }
}

void readMatrix() {
  pressedValue = "";
  for (int i = 1; i < 6; i++) {
    if (i == 1) {
      digitalWrite(row1Pin, LOW);
    } else if (i == 2) {
      digitalWrite(row2Pin, LOW);
    } else if (i == 3) {
      digitalWrite(row3Pin, LOW);
    } else if (i == 4) {
      digitalWrite(row4Pin, LOW);
    } else if (i == 5) {
      digitalWrite(row5Pin, LOW);
    }

    if (i == 1) {
      if (digitalRead(col1Pin) == LOW)
        pressedValue = "-";
      else if (digitalRead(col2Pin) == LOW)
        pressedValue = "x";
      else if (digitalRead(col3Pin) == LOW)
        pressedValue = "/";
      else if (digitalRead(col4Pin) == LOW)
        pressedValue = "Del";

    } else if (i == 2) {
      if (digitalRead(col1Pin) == LOW)
        pressedValue = "+";
      else if (digitalRead(col2Pin) == LOW)
        pressedValue = "9";
      else if (digitalRead(col3Pin) == LOW)
        pressedValue = "8";
      else if (digitalRead(col4Pin) == LOW)
        pressedValue = "7";

    } else if (i == 3) {
      if (digitalRead(col2Pin) == LOW)
        pressedValue = "6";
      else if (digitalRead(col3Pin) == LOW)
        pressedValue = "5";
      else if (digitalRead(col4Pin) == LOW)
        pressedValue = "4";

    } else if (i == 4) {
      if (digitalRead(col1Pin) == LOW)
        pressedValue = "Enter";
      else if (digitalRead(col2Pin) == LOW)
        pressedValue = "3";
      else if (digitalRead(col3Pin) == LOW)
        pressedValue = "2";
      else if (digitalRead(col4Pin) == LOW)
        pressedValue = "1";
    } else if (i == 5) {
      if (digitalRead(col1Pin) == LOW)
        pressedValue = "Enter";
      else if (digitalRead(col2Pin) == LOW)
        pressedValue = ".";
      else if (digitalRead(col3Pin) == LOW || col4Pin == LOW)
        pressedValue = "0";
    }

    lcd.autoscroll();
    lcd.blink();

    digitalWrite(row1Pin, HIGH);
    digitalWrite(row2Pin, HIGH);
    digitalWrite(row3Pin, HIGH);
    digitalWrite(row4Pin, HIGH);
    digitalWrite(row5Pin, HIGH);
  }
}

// long calculate() {
//   for (int i = 0; i < mathString.length; i++) {
//     if (mathString[i] == '+') {
//       requestedMath = "+";
//       break;
//     } else if (mathString[i] == '-') {
//       requestedMath = "-";
//       break;
//     } else if (mathString[i] == 'x') {
//       requestedMath = "x";
//       break;
//     } else if (mathString[i] == '/') {
//       requestedMath = "/";
//       break;
//     }
//   }
// }
