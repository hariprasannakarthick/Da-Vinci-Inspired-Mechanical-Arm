# Da Vinci–Inspired Mechanical Arm

## Overview

This project is a gear-driven mechanical arm inspired by Leonardo da Vinci’s engineering sketches. It demonstrates how rotational motion can be converted into controlled linear and angular movement using gears and linkages.

The system combines classical mechanical design with modern prototyping to create a functional robotic mechanism.

---

## Features

* Gear-driven motion system
* Linkage-based arm movement
* Smooth mechanical transmission
* Inspired by Renaissance engineering concepts
* Expandable for motorized or sensor-based control

---

## Mechanism Concept

The design follows a simple principle:

Input Rotation → Gear Train → Linkage System → Arm Movement

* Gears reduce speed and increase torque
* Linkages convert rotation into lifting motion
* Structure ensures stability and controlled movement

---

## Components Used

* Wooden / Acrylic structure
* Gear set (plastic / 3D printed)
* Metal shafts and joints
* Base platform

(Optional for automation)

* Arduino Nano
* Servo motors
* External power supply

---

## Working

The mechanism uses a gear train to transfer rotational motion to the arm joints.
As the primary gear rotates, connected linkages move the arm in a controlled lifting motion.

This mimics early mechanical automation concepts designed by Leonardo da Vinci.

---

## Applications

* Educational demonstration of mechanical systems
* Robotics prototyping
* Gear and linkage study
* Engineering design projects

---

## Future Improvements

* Add motorized control
* Integrate sensors for automation
* Improve precision using better materials
* Convert into programmable robotic arm

---
## Diagram

<img width="1536" height="1024" alt="image" src="https://github.com/user-attachments/assets/f7c5bc31-ad18-462b-9dc0-75185f2c3b66" />

---

## Code (Arduino Control)

This section demonstrates basic control of the mechanical arm using two servo motors:

* Base rotation
* Arm lifting mechanism

### Arduino Code

```cpp
#include <Servo.h>

Servo baseServo;
Servo armServo;

int basePin = 9;
int armPin = 10;

void setup() {
  baseServo.attach(basePin);
  armServo.attach(armPin);
}

void loop() {

  // Rotate base (left to right)
  for (int angle = 60; angle <= 120; angle++) {
    baseServo.write(angle);
    delay(20);
  }

  // Lift arm
  for (int angle = 60; angle <= 120; angle++) {
    armServo.write(angle);
    delay(20);
  }

  delay(1000);

  // Lower arm
  for (int angle = 120; angle >= 60; angle--) {
    armServo.write(angle);
    delay(20);
  }

  delay(1000);

  // Return base
  for (int angle = 120; angle >= 60; angle--) {
    baseServo.write(angle);
    delay(20);
  }

  delay(1000);
}

```

### Code Explanation

* `Servo.h` → controls servo motors
* `baseServo` → rotates base of arm
* `armServo` → controls lifting motion
* Angles (60–120) → define movement range
* Delay → smooth motion control

---

### Possible Enhancements

* Add potentiometer for manual control
* Add predefined motion sequences
* Integrate sensors (IR / Ultrasonic)
* Use PID control for precision

---

## Author

Hari Prasanna
B.Tech Robotics Engineering

---
