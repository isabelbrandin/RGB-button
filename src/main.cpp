#include <Arduino.h>

int counter = 0;

int greenled = 9;
int blueled = 8;
int redled = 10;
int buttonPin = 2;



void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(redled, OUTPUT);

  
}

void loop() {
 
  int buttonState;
  buttonState = digitalRead(buttonPin);

 
  if (buttonState == HIGH) {
    counter = counter + 1;
    Serial.println(counter);
    delay(150);
  }
  
  else if (counter == 0) {
    digitalWrite(redled, LOW);
    digitalWrite(greenled, LOW);
    digitalWrite(blueled, LOW);
  }

  else if (counter == 1) {
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
    digitalWrite(blueled, LOW);
  }

  else if (counter == 2) {
    digitalWrite(redled, LOW);
    digitalWrite(greenled, HIGH);
    digitalWrite(blueled, LOW);
  }
  
  else if (counter == 3) {
    digitalWrite(redled, LOW);
    digitalWrite(greenled, LOW);
    digitalWrite(blueled, HIGH);
  }

  else {
    counter = 0;
  }
}