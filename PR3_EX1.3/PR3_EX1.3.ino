const  int LED1 = 3 ;           
const  int LED2 = 5 ;           
const  int LED3 = 6 ;           
const  int LED4 = 9 ;           
const  int LED5 = 10 ;           
const  int LED6 = 11 ;  

int T = 1000; //Temps mS
int V = 85; //VALOR LED


void setup() 
   {                
  pinMode(3, OUTPUT);  //Terminal 5   sortida 
  pinMode(5, OUTPUT);  //Terminal 6   sortida 
  pinMode(6, OUTPUT);  //Terminal 7   sortida 
  pinMode(9, OUTPUT);  //Terminal 9   sortida 
  pinMode(10, OUTPUT); //Terminal 10  sortida 
  pinMode(11, OUTPUT); //Terminal 11  sortida
  
   }

void loop() 
  {
    
  analogWrite(LED1, 0);  //LED APAGAT
  analogWrite(LED2, 0);  //LED APAGAT
  analogWrite(LED3, 0);  //LED APAGAT
  analogWrite(LED4, 0);  //LED APAGAT
  analogWrite(LED5, 0);  //LED APAGAT
  analogWrite(LED6, 0);  //LED APAGAT
  
  delay( T);  // Temps
    
    
  analogWrite(LED1, 0 * V);  //LED ENCES
  analogWrite(LED2, 0 * V);  //LED ENCES
  analogWrite(LED3, 1 * V);  //LED ENCES
  analogWrite(LED4, 1 * V);  //LED ENCES
  analogWrite(LED5, 0 * V);  //LED ENCES
  analogWrite(LED6, 0 * V);  //LED ENCES
 
  delay( T);  // Temps 
  
  
  analogWrite(LED1, 0 * V);  //LED ENCES
  analogWrite(LED2, 1 * V);  //LED ENCES
  analogWrite(LED3, 2 * V);  //LED ENCES
  analogWrite(LED4, 2 * V);  //LED ENCES
  analogWrite(LED5, 1 * V);  //LED ENCES
  analogWrite(LED6, 0 * V);  //LED ENCES
 
  delay( T);  // Temps 
  
  analogWrite(LED1, 1 * V);  //LED ENCES
  analogWrite(LED2, 2 * V);  //LED ENCES
  analogWrite(LED3, 3 * V);  //LED ENCES
  analogWrite(LED4, 3 * V);  //LED ENCES
  analogWrite(LED5, 2 * V);  //LED ENCES
  analogWrite(LED6, 1 * V);  //LED ENCES
 
  delay( T);  // Temps
 
  analogWrite(LED1, 2 * V);  //LED ENCES
  analogWrite(LED2, 3 * V);  //LED ENCES
  analogWrite(LED3, 3 * V);  //LED ENCES
  analogWrite(LED4, 3 * V);  //LED ENCES
  analogWrite(LED5, 3 * V);  //LED ENCES
  analogWrite(LED6, 2 * V);  //LED ENCES 
  
  
  delay( T);  // Temps
 
  analogWrite(LED1, 3 * V);  //LED ENCES
  analogWrite(LED2, 3 * V);  //LED ENCES
  analogWrite(LED3, 3 * V);  //LED ENCES
  analogWrite(LED4, 3 * V);  //LED ENCES
  analogWrite(LED5, 3 * V);  //LED ENCES
  analogWrite(LED6, 3 * V);  //LED ENCES 
  
  delay( T);  // Temps
 
 }
 
 
  //QUIM MORENO
