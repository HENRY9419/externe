/************************************/
/* Ecrit par : Henry Alain Sindani */
/* Le 19 janvier 2021 � 10 h 52' */
/***********************************/

/* Ce script effectue l' allumage et l'extinction
   d'une LED sans utiliser la fonction delay() .*/

// D�clarations des variables:
long interval = 1000;
unsigned long debut;
int led1 = 2;

// La fonction setup():
 void setup() {

	// On initialise:
	Serial.begin(9600); // Le moniteur s�rie avec la vitesse de 9600 bauds.
	pinMode(led1, OUTPUT); // la broche 2 ,en sp�cifiant que c'est en sortie.

}

// La fonction loop() :
void loop() {
	// on fait appel � la fonction millis():
	unsigned long actuel = millis();
	debut = 0;
	/* On pose la condition si; actuel - debut est �gal ou est
	   sup�rieur � interval,on affecte la valeur d'actuel � debut.
	*/
	if (actuel - debut >= interval)
	{
		debut = actuel;
		digitalWrite(led1, HIGH);
	}
	// Si c'est pas le cas: la LED reste eteinte.
	else
	{
		digitalWrite(led1, LOW);
	}
}
