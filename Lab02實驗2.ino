const byte startPin = 11;
const byte endPin = 2;
void setup() 
{
  
for (byte i = startPin; i>= endPin; i--) 
{
  pinMode(i, OUTPUT);
}

}

void loop()
{
byte i;
byte lightPin = startPin;
for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,LOW);
}
  delay(400);
  for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,HIGH);
}
  delay(400);
for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,LOW);
}
  delay(400);
  for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,HIGH);
}
  delay(400);


for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,HIGH);
}
for (i=startPin; i>= endPin; i--) 
{
   if(i!=6 && i!=7)
   {digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    delay(200);
   }
}

  for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,LOW);
}
  delay(400);
  for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,HIGH);
}
  delay(400);
  for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,LOW);
}
  delay(400);
    for (i=startPin; i >= endPin; i--) 
{
  digitalWrite(i,HIGH);
}
  delay(400);
  for (i=endPin; i<= startPin; i++) 
{
   if(i!=6 && i!=7)
   {digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    delay(200);
   }
}
}


