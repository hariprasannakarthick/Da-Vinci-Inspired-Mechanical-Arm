#include <Servo.h>

Servo baseServo;
Servo armServo;

int baseAngle = 90;
int armAngle = 90;

void setup() {
  baseServo.attach(9);
  armServo.attach(10);
}

void loop() {
  // Rotate base slowly
  for(baseAngle = 60; baseAngle <= 120; baseAngle++) {
    baseServo.write(baseAngle);
    delay(20);
  }

  // Lift arm
  for(armAngle = 60; armAngle <= 120; armAngle++) {
    armServo.write(armAngle);
    delay(20);
  }

  delay(1000);

  // Lower arm
  for(armAngle = 120; armAngle >= 60; armAngle--) {
    armServo.write(armAngle);
    delay(20);
  }

  delay(1000);
}