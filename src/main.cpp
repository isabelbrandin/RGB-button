#include <Arduino.h>

int counter = 0;

int greenled = 9;
int blueled = 8;
int redled = 10;
int buttonPin = 2;

// int ledState = LOW;
// int lastButtonState;
// int currentButtonState;


void setup() {
  Serial.begin(9600);
  // pinMode(led, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(redled, OUTPUT);

  // currentButtonState = digitalRead(buttonPin);
  // put your setup code here, to run once:
}

void loop() {
  // lastButtonState = currentButtonState;
  // currentButtonState = digitalRead(buttonPin);
  int buttonState;
  buttonState = digitalRead(buttonPin);

  // if (lastButtonState == HIGH && currentButtonState == LOW) {
  //   Serial.println("The button is pressed");

  //   ledState = !ledState;

  //   digitalWrite(led, ledState);
  // } 
  if (buttonState == HIGH) {
    // counter++;
    counter = counter + 1;
    // Serial.println("Push");
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
  // put your main code here, to run repeatedly:
}