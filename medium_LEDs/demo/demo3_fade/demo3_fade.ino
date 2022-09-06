
const int pin15=15;
const int freq=5000;// pour les LEDs
const int canal=0;// 0 a 15 canaux sur lequel le signal est envoye
const int resol=8;// 8 bits ou 16 bits
const int dutyCycle=0;// en pourcentage, mais de 0 a 255

void setup() {
  // put your setup code here, to run once:

  ledcSetup(canal, freq, resol);

  ledcAttachPin(pin15, canal);
}

void loop() {
  //  Croissance de la tension
  for(int dutyCycle=0; dutyCycle<=255; dutyCycle++){
    // Changer la force du LED
    ledcWrite(canal, dutyCycle);
    // attendre 10 ms
    delay(10);
  }

  delay(1000);

  // Decroissance de la tension
  for(int dutyCycle=255; dutyCycle>=0; dutyCycle--){
    // Changer la force du LED
    ledcWrite(canal, dutyCycle);
    delay(10);
  }
  
  delay(1000);

}
