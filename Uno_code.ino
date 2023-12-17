int IR1 = 2; 
int IR2 = 3;  
int LDR1= 12;  
int led1 = 6; 
int led2 = 7; 
int led3 = 8; 
int led4 = 9; 
int val1; 
int val2; 
int val3;  
 void setup() 
{ 
Serial.begin(9600);
pinMode(IR1,INPUT); 
pinMode(IR2,INPUT); 
pinMode(led1,OUTPUT); 
pinMode(led2,OUTPUT); 
pinMode(led3,OUTPUT); 
pinMode(LDR1,INPUT);  
pinMode(led4,OUTPUT); 
 
}  
void loop() 
{ 
  val1 = digitalRead(IR1); 
  val2 = digitalRead(IR2);  
  val3 = digitalRead(LDR1);  
 if(val3 == 1) 
{ 
  if(val1==0) 
  {   
  digitalWrite(6,HIGH);   
  digitalWrite(7,HIGH);  
  } 
  if(val1==1) 
  {   
  digitalWrite(6,LOW);   
  digitalWrite(7,LOW);  
  }
   if(val2==0)
  { 
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  } 
  if(val2==1)
  { 
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  }
}
else
{
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
}
}

