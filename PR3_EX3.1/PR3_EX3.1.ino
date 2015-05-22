const  int LED0 = 5 ;          // LED 0 PIN 5   
const  int LED1 = 6 ;          // LED 1 PIN 6 
const  int LED2 = 7 ;          // LED 2 PIN 7 
const  int LED3 = 8 ;          // LED 3 PIN 8 
const  int LED4 = 9 ;          // LED 4 PIN 9
const  int LED5 = 10 ;         // LED 5 PIN 10    
const  int LED6 = 11 ;         // LED 6 PIN 11 
const  int LED7 = 12 ;         // LED 7 PIN 12 
const  int pot0 = A0;          // LED 8 PIN 13 

int POT = 20 ;           // Variable potennciometre
int entrada;     


void  setup ()
{
  pinMode (LED0, OUTPUT);      //  pin 5  sortida
  pinMode (LED1, OUTPUT);      //  pin 6  sortida
  pinMode (LED2, OUTPUT);      //  pin 7  sortida
  pinMode (LED3, OUTPUT);      //  pin 8  sortida
  pinMode (LED4, OUTPUT);      //  pin 9  sortida
  pinMode (LED5, OUTPUT);      //  pin 10 sortida
  pinMode (LED6, OUTPUT);      //  pin 11 sortida
  pinMode (LED7, OUTPUT);      //  pin 12 sortida

}

void loop() 
{
  
  entrada = analogRead (pot0);    // llegir valor del con potenciómetro
  POT = entrada;      // actualitzar velocitat amb el valor del con potenciómetro
  POT= map(POT,0,1023,0,3000);
  
  
  digitalWrite(LED0, HIGH);  //Sortida  digital ON
  digitalWrite(LED1, LOW);  //Sortida  digital OFF
  digitalWrite(LED2, HIGH);  //Sortida  digital ON
  digitalWrite(LED3, LOW);  //Sortida  digital OFF
  digitalWrite(LED4, HIGH);  //Sortida  digital ON
  digitalWrite(LED5, LOW); //Sortida  digital OFF
  digitalWrite(LED6, HIGH); //Sortida  digital ON
  digitalWrite(LED7, LOW); //Sortida  digital OFF
  
delay(POT); // Temps (ms)
  
  digitalWrite(LED0, LOW);  //Sortida  digital OFF
  digitalWrite(LED1, HIGH);  //Sortida  digital ON
  digitalWrite(LED2, LOW);  //Sortida  digital OFF
  digitalWrite(LED3, HIGH);  //Sortida  digital ON
  digitalWrite(LED4, LOW);  //Sortida  digital OFF
  digitalWrite(LED5, HIGH); //Sortida  digital ON
  digitalWrite(LED6, LOW); //Sortida  digital OFF
  digitalWrite(LED7, HIGH); //Sortida  digital ON
  
delay(POT);  // Temps (ms)
}

//QUIM MORENO
