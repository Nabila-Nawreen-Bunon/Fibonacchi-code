// C++ code

void setup()
{
 Serial.begin(9600);

  }

void loop()
{
  int n=10;
  int first=0,second=1,next;
  Serial.print(first);
  Serial.print(",");
  Serial.print(second);
  Serial.print(",");
  int i=2;
  while(i<n){
    next=first+second;
    Serial.print(next);
    Serial.print(",");
    first=second;
    second=next;
    i++;
  }

  delay(1000);
}