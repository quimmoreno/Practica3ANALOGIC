const int PITU = 3;      // PIN 3
const int entrada = A0;  // ENTRADA A0
int POT;                 // VALOR POTENCIOMETRE
int T= 5000;             //TEMPS D'ESPERA

void setup()

  {
    
  pinMode(PITU, OUTPUT);   // PIN 3 SORTIDA ALTAVEU
  
   }



void loop()
{
  POT = analogRead(entrada);   // LECTURA POTENCIOMETRE 
  tone(PITU, 1000, POT);    // FUNCIO PER FER SONAR EL ALTAVEU
  delay(POT + T);  // TEMPS D'ESPERA
}


//QUIM MORENO
