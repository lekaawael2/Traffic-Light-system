// C++ code
//
int ON = 1000;
int OFF = 1000;
void setup()
{
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  digitalWrite(6,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
  
  digitalWrite(6,1);
  delay(ON);
  digitalWrite(9,1);
  delay(ON);
  digitalWrite(9,0);
  delay(OFF);
  digitalWrite(9,1);
  delay(ON);
  digitalWrite(9,0);
  delay(OFF);
  digitalWrite(9,1);
  delay(ON);
  digitalWrite(6,0);digitalWrite(9,0);
  digitalWrite(11,1);
  delay(ON);
  digitalWrite(11,0);
  delay(OFF);
  
  
  
   
  
  
  
  
 
}