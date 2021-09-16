/*
 Name:		Renaissance.ino
 Created:	1/19/2021 10:26:22 AM
 Author:	Henry Alain Sindani
*/

// On cr�e les variables:
long intervale = 1000;
unsigned long begins;
int led_blue = 2;
unsigned long reponse;
// On initialise le code:
void setup() {
	// Le moniteur s�rie:
	Serial.begin(9600);
	// la pin du led:
	pinMode(led_blue, OUTPUT);

}

// On cr�e la boucle:
void loop() {
	// On fait appel � la fonction millis():
	unsigned long actuel = millis();
	unsigned long begins = 0;
	reponse = actuel - begins;

	/* On pose la condition si actuel moins debut 
	   est sup�rieur ou �gale � interval */
	if (reponse >= intervale)
	{
		digitalWrite(led_blue, HIGH);
	}
	// si c'est pas le cas ,alors:
	else
	{
		digitalWrite(led_blue, LOW);
	}

}
