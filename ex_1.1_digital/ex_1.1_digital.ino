int ledPin= 12; 
int ledPin2= 11; 
int ledPin3= 10;
int ledPin4= 9;
int ledPin5= 8;
int ledPin6= 7;
int ledPin7= 6;
int ledPin8= 5; 


void setup()
{
  pinMode(ledPin , OUTPUT ); 
  pinMode(ledPin2 , OUTPUT ); 
  pinMode(ledPin3 , OUTPUT ); 
  pinMode(ledPin4 , OUTPUT ); 
  pinMode(ledPin5 , OUTPUT ); 
  pinMode(ledPin6 , OUTPUT ); 
  pinMode(ledPin7 , OUTPUT ); 
  pinMode(ledPin8 , OUTPUT ); 
  
  
  
  // put your setup code here, to run once:

}

void loop()
{
  digitalWrite(ledPin , HIGH );
  delay(1000); 
   digitalWrite(ledPin2 , LOW );
  delay(1000);
   digitalWrite(ledPin3 , HIGH );
  delay(1000);
   digitalWrite(ledPin4 , LOW );
  delay(1000);
   digitalWrite(ledPin5 , HIGH );
  delay(1000);
   digitalWrite(ledPin6 , LOW );
  delay(1000);
   digitalWrite(ledPin7 , HIGH );
  delay(1000);
   digitalWrite(ledPin8 , LOW );
  delay(1000);
  
  
  
  // put your main code here, to run repeatedly:

}
