/*	Erster Prototyp vom Mikrokontroller 
*	Hiermit wurde ein ESP-32 gesteuert
*/ 
void setup() {
Serial.begin(9600); 		//Starten des Mikrokontrollers

}
/* Diese Methode wird durchgehend wiederholt */
void loop() {			
int value;
value = analogRead(A0);		//Hier wird analoge Input gelesen, also das Mikrofon
Serial.print(Value+" ")
 if(value <= 20)			//Hier wird der Wert verarbeitet
  {							//und es schreibt den jeweiligen Wert in den Outputstream zu Unity
	Serial.write(0);
    Serial.println("0");
  }
  else if( (value > 20) && ( value <= 45) )
  {
	Serial.write(1);
    Serial.println("1");
  } else if( (value > 45) )
  {
	Serial.write(2);
    Serial.println("2");
  }

delay(50);
}
