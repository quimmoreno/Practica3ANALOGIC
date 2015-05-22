const  int LED0 = 3 ;          // LED 0 PIN 5   
const  int LED1 = 5 ;          // LED 1 PIN 6 
const  int LED2 = 6 ;          // LED 2 PIN 7 

const  int ldr01 = A0;          // LDR1 
const  int ldr02 = A1;          // LDR2 
const  int ldr03 = A2;          // LDR3 

int LDR1 ;           // Variable potennciometre
   

int LDR2 ;           // Variable potennciometre
   

int LDR3 ;           // Variable potennciometre
 

void  setup ()
{
  pinMode (LED0, OUTPUT);      //  pin 3  sortida
  pinMode (LED1, OUTPUT);      //  pin 5  sortida
  pinMode (LED2, OUTPUT);      //  pin 6  sortida


}

void loop() 
{
  
    
  LDR1 = analogRead (ldr01);    // llegir valor del con potenciómetro
  LDR2 = analogRead (ldr02);    // llegir valor del con potenciómetro
  LDR3 = analogRead (ldr03);    // llegir valor del con potenciómetro
  
  
  //LDR 1
  
  LDR1= map(LDR1,200,800,0,255);
  analogWrite(LED0, LDR1);  //Sortida  Analogica
  
  
    //LDR 2
    
 
  LDR2= map(LDR2,200,800,0,255);
  analogWrite(LED1, LDR2);  //Sortida  Analogica
  
  
    //LDR 3
  
  
  LDR3= map(LDR3,200,800,0,255);
  analogWrite(LED2, LDR3);  //Sortida  Analogica
  
  
 } 
  
  
  
  // QUIM MORENO
