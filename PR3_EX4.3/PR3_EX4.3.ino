const int PITU = 3;      // PIN 3
const int entrada = A0;  // ENTRADA A0 DURADA XIULET
const int entrada1 = A0;  // ENTRADA A1 DURADA TEMPS D'ESPERA
int POT;                 // VALOR POTENCIOMETRE
int F;                   //FREQUENCIA
int T= 5000;                   //TEMPS D'ESPERA


void setup()

  {
    
  pinMode(PITU, OUTPUT);   // PIN 3 SORTIDA ALTAVEU
  
   }



void loop()
{
  
   POT = analogRead(entrada);   // LECTURA POTENCIOMETRE 
   F = analogRead(entrada1);    // LECTURA POTENCIOMETRE 
  
   POT= map(POT,0,1023,0,1000);
   F = map(F,0,1023,20,10000);
    

  tone(PITU, F, POT);    // FUNCIO PER FER SONAR EL ALTAVEU
  delay(POT + T);  // TEMPS D'ESPERA
}


//QUIM MORENO
