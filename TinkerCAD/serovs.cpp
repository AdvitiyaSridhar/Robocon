#include <Servo.h>
const int potPin = A0;
int pos = 0;
Servo s1;
Servo s2;
void setup() {
  s1.attach(3);
  s2.attach(6);
}
void loop(){
  int potValue = analogRead(potPin);
  int angle = map(potValue, 0, 1023, 0, 180);
  s1.write(angle);
  s2.write(180-angle);
}
