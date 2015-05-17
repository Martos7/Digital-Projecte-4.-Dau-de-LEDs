/**********************************************************************************
**                                                                               **
**                                Dau de LEDs                                    **
**                                                                               **
**                                                                               **
**                                                                               **
**********************************************************************************/




const int leds4 = 9;          
const int leds3 = 11;          
const int leds2 = 12;          
const int led1 = 13;           




void setup()
{
  pinMode(leds4, OUTPUT);     
  pinMode(leds3, OUTPUT);     
  pinMode(leds2, OUTPUT);     
  pinMode(led1, OUTPUT);      
  
  
}


void loop()
{
  digitalWrite(leds4, LOW);   // 1
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);  
  digitalWrite(led1, HIGH); 
  delay(2000);
  
  digitalWrite(led1, LOW);    //   2
  digitalWrite(leds2, HIGH); 
 digitalWrite(leds3, LOW);
digitalWrite(leds4, LOW); 
  
  delay(2000);
  
      //  3
      
  digitalWrite(led1, HIGH); 
  digitalWrite(leds2, LOW);
  digitalWrite(leds3, HIGH);  
  digitalWrite(leds4, LOW);
  
  delay(2000);
  
  digitalWrite(led1, LOW);    //   4
  digitalWrite(leds2, HIGH);
 digitalWrite(leds3, HIGH);
digitalWrite(leds4, LOW); 
  
  delay(2000);
  
  digitalWrite(led1, HIGH);   //   5  
   digitalWrite(leds2, HIGH);
 digitalWrite(leds3, HIGH);
digitalWrite(leds4, LOW); 
  
  delay(2000);
  
  digitalWrite(led1, LOW);    //  6
   digitalWrite(leds2, HIGH);
 digitalWrite(leds3, HIGH); 
  digitalWrite(leds4, HIGH);
    
  delay(2000);
  
 
}
