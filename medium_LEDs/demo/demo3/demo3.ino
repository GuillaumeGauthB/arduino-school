
const int pin15=15;
const int freq=5000;// pour les LEDs
const int canal=0;// 0 a 15 canaux sur lequel le signal est envoye
const int resol=8;// 8 bits ou 16 bits
const int dutyCycle=100;// en pourcentage, mais de 0 a 255

void setup() {
  // put your setup code here, to run once:

  ledcSetup(canal, freq, resol);   // config. generateur
    // f(x) veut dire LED Control Setup

  ledcAttachPin(pin15, canal);    // on l'attache a la pin15
}

void loop() {
  // put your main code here, to run repeatedly:
  ledcWrite(canal, dutyCycle);

}
