#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);

  servo1.write(130);
  servo2.write(130);
  servo3.write(130);
  servo4.write(130);
  servo5.write(130);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int angle = 0; angle <= 130; angle = angle + 30){
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    servo5.write(angle);
    delay(500);
  }

  for(int angle = 10; angle >= 0; angle = angle - 50){
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    servo5.write(angle);
    delay(200);
  }
}
