
void setup() {
Serial.begin(9600); // setup serial

}

void loop() {

int value;
value = analogRead(A0);


 if(value <= 20)
  {
    Serial.println("leise");

  }
  else if( (value > 20) && ( value <= 45) )
  {
    Serial.println("mittel-laut");
  }
  else if(value > 45)
  {
    Serial.println("laut");
  }
delay(50);
}