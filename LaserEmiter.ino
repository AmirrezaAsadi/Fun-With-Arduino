const  int laserPin= 9; //PWM pins , it used with arduino Leonardo but you can use this code with other boards
const int active = 255;


void setup() {
  pinMode(laserPin,OUTPUT);

}

void loop() {
 digitalWrite(laserPin, active);
 Serial.println("laser off");
 delay(1500);
 Serial.println("laser on");
 digitalWrite(laserPin, 0);
 delay(1500);

}
// this is a useless code! I just share it for fun!
