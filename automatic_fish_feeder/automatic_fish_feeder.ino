#include <Servo.h>
Servo myservo;
unsigned long previousMillis, currentMillis;
const unsigned long interval = 500;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  myservo.write(55);
  
}

void loop() {
  //set the time for fish feeding
  currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    myservo.write(0);
    delay(300);
    myservo.write(120);
    delay(300);
  }
}
