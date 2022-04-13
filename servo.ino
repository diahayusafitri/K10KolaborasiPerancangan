#include<Servo.h> //library untuk micro servo
Servo servo;//penentuan variabel komponen micro servo

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //Menentukan baud serial komunikasi
servo.attach(6); //Penentuan pin 7 sebagai pin micro servo
servo.write(0); //Penentuan kondisi awal servo pada kondisi 0
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  servo.write(80);
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  servo.write(0);
  delay(1000);                       // wait for a secondservo.write(80)
}
