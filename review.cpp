
const int EnablePin = 3;
const int In1 = 4;
const int In2 = 5;
void setup()
{
  Serial.begin(9600);
  pinMode(EnablePin, OUTPUT);
  pinMode(In1, INPUT);
  pinMode(In2, INPUT);
}
void loop()
{
  int pwm = Serial.read(); 
  int value = map(pwm, 0, 255, 0, 100);
  analogWrite(EnablePin,value);
  Serial.print(pwm);

}