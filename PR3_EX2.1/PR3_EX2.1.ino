const  int LED0 = 3 ;          // LED 0 PIN 5   
const  int ldr01 = A0;          // LDR1 
int LDR1 ;           // Variable potennciometre
   
   
void  setup ()
{
  
  pinMode (LED0, OUTPUT);      //  pin 3  sortida

}

void loop() 
{  
  
  LDR1 = analogRead (ldr01);    // llegir valor del con potenciómetro
  LDR1= map(LDR1,200,800,0,255);
  analogWrite(LED0, LDR1);  //Sortida  Analogica
  
 } 
  
  
  
  // QUIM MORENO
