/*
 Name:		Renaissance.ino
 Created:	1/19/2021 10:26:22 AM
 Author:	Henry Alain Sindani
*/
int led1 = 2;
int led3 = 5;

void setup(){
// On initialise le serial monitor
pinMode(led1,OUTPUT);
pinMode(led3,OUTPUT);
Serial.begin(9600);

}

// La fonction loop
void loop(){
digitalWrite(led1,HIGH);
Delay(2000);

}
