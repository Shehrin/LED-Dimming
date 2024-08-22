int pwm=11;

void setup() 
{
  pinMode(pwm,OUTPUT);

}

void loop() {
  for(int i=0; i<=255; i++)
  {
    analogWrite(pwm,i);
    delay(100);
  }
  for(int i=255; i>=0; i--)
  {
    analogWrite(pwm,i);
    delay(100);
  }
}
