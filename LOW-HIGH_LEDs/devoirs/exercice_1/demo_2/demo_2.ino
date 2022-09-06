const int pin15 = 15; // La pin 15
int niveauPin15; // Le niveau 1 ou 2

void setup() {
  // put your setup code here, to run once:
  pinMode(pin15, OUTPUT); // On set le mode du pin a OUTPUT
  Serial.begin(115200); // On set son bitrate a 115200, ce qui va nous permettre de bien lire l'information reçu

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin15, HIGH); // On allume le LED
  niveauPin15=digitalRead(pin15); // On donne son état à niveauPin15
  Serial.print("Niveau pin 15: "); 
  Serial.println(niveauPin15); // On imprime le "niveau" du Pin dans le "terminal"
  delay(1000); // On attend une seconde
  digitalWrite(pin15, LOW); // On éteint le LED
  niveauPin15=digitalRead(pin15); // On donne son état à niveauPin15
  Serial.print("Niveau pin 15: ");
  Serial.println(niveauPin15); // On imprime le "niveau" du Pin dans le "terminal"
  delay(1000); // On attend une seconde
  //On recommence le script

}
