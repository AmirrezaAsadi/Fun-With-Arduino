
const int SW_pin = 7;
const int X_pin = 0;
const int Y_pin = 1;
const int Led_One = 9;
const int Led_Two = 10;
void setup() {
  
  pinMode(SW_pin, INPUT);
  pinMode(Led_One, OUTPUT);
  pinMode(Led_Two, OUTPUT);
  digitalWrite(SW_pin, HIGH);
   Serial.begin(9600);
   Serial.print("Retro Game:  ");

}

void loop() {
  //digitalWrite (Led_One, HIGH); //for test
  //digitalWrite (Led_Two, HIGH); //for test
  Serial.print(" Click ");
  Serial.println(digitalRead(SW_pin));
  Serial.print(" **  ");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
    if (analogRead (X_pin) > 600){
    Serial.println("led is on");
    digitalWrite(Led_One, HIGH);
  }
  
  Serial.print(" **  ");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(Y_pin));
  
  if (analogRead (Y_pin) > 600){
    Serial.println("led is on");
    digitalWrite(Led_Two, HIGH);
  }

  Serial.print(" **  ");
  delay(100);

}
