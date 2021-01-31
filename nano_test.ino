int ledPin = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin,255);
  delay(500);
  Serial.print("get test");
  analogWrite(ledPin,LOW);
  delay(500);
  
  
  

}
