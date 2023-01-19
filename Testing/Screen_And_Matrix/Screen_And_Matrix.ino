#include <LiquidCrystal.h>
//#include <Keyboard.h>

LiquidCrystal lcd(11, 12, 4, 5, 6, 7);
const int col1Pin = 1;
const int col2Pin = 2;
const int col3Pin = 3;
const int col4Pin = 4;

const int row1Pin = 5;
const int row2Pin = 6;
const int row3Pin = 7;
const int row4Pin = 8;


int col1Val = 0;
int col2Val = 0;
int col3Val = 0;
int col4Val = 0;

void setup() {
  //Keyboard.begin();
  lcd.begin(16, 2);
  analogWrite(10, 100);

  pinMode(col1Pin, OUTPUT);
  pinMode(col2Pin, OUTPUT);
  pinMode(col3Pin, OUTPUT);
  pinMode(col4Pin, OUTPUT);

  pinMode(row1Pin, INPUT);
  pinMode(row2Pin, INPUT);
  pinMode(row3Pin, INPUT);
  pinMode(row4Pin, INPUT);

}

void loop() {
  //Keyboard.write('a');
  //delay(2000);
  //      for (int i = 1; i < 4; i++) {
  //        String colPin = "col";
  //        colPin += i + "Pin";
  //        digitalWrite(colPin.toInt(), HIGH);
  //        delay(5);
  //        digitalWrite(colPin.toInt(), LOW);
  //      }
  //
  //      for (int i = 1; i < 4; i++) {
  //        String rowPin = "row";
  //        rowPin += i + "Pin";
  //        if (digitalRead(rowPin.toInt() == HIGH)) {
  //          lcd.print("Detected " + rowPin);
  //        }
  //    }

}
