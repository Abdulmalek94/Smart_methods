#include <Servo.h> 
Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;
const int potentio = A0;
int angle = 0;
void setup()
{
  servo_1.attach(3);
  servo_2.attach(5); 
  servo_3.attach(6); 
  servo_4.attach(10); 
  servo_5.attach(11); 
  pinMode(potentio,INPUT);
  Serial.begin(9600);
}

void loop()
{
  angle = analogRead(potentio);
  angle = map(angle, 0, 1023, 0, 90);
  servo_1.write(angle);
  servo_2.write(angle);
  servo_3.write(angle);
  servo_4.write(angle);
  servo_5.write(angle);
  delay(5);                       
  
}