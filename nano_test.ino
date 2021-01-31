// arduino nano ft232 
int ledPin = 11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // it may not work, because its a clone chip, you should set  baud
  Serial.println("Hello Computer");
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
