const  int laserPin= 6; //PWM pins , it used with arduino Leonardo but you can use this code with other boards

void setup() {
  pinMode(laserPin,OUTPUT);

}

void loop() {
 digitalWrite(laserPin, HIGH);
 Serial.println("laser off");
 delay(1500);
 Serial.println("laser on");
 digitalWrite(laserPin, LOW);
 delay(1500);

}
// this is a useless code! I just share it for fun!
