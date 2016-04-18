int ledPin= 12; 
int ledPin2= 11; // definim i nombrem els pins  
int ledPin3= 10;
int ledPin4= 9;
int ledPin5= 8;
int ledPin6= 7;
int ledPin7= 6;
int ledPin8= 5; 

void setup()
{
  pinMode(ledPin , OUTPUT );  //li diem que son sortides 
  pinMode(ledPin2 , OUTPUT ); 
  pinMode(ledPin3 , OUTPUT ); 
  pinMode(ledPin4 , OUTPUT ); 
  pinMode(ledPin5 , OUTPUT ); 
  pinMode(ledPin6 , OUTPUT ); 
  pinMode(ledPin7 , OUTPUT ); 
  pinMode(ledPin8 , OUTPUT ); 
}

void loop()
{
 
   digitalWrite(ledPin , HIGH );
   digitalWrite(ledPin2 , HIGH );
   digitalWrite(ledPin3 , HIGH );  //fem intermitent amb els leds 
   digitalWrite(ledPin4 , HIGH );
   digitalWrite(ledPin5 , HIGH );
   digitalWrite(ledPin6 , HIGH );
   digitalWrite(ledPin7 , HIGH );
   digitalWrite(ledPin8 , HIGH );
  delay(1000);
  
   digitalWrite(ledPin , LOW );
   digitalWrite(ledPin2 , LOW );
   digitalWrite(ledPin3 , LOW );
   digitalWrite(ledPin4 , LOW );
   digitalWrite(ledPin5 , LOW );
   digitalWrite(ledPin6 , LOW );
   digitalWrite(ledPin7 , LOW );
   digitalWrite(ledPin8 , LOW );
  delay(1000);
}
