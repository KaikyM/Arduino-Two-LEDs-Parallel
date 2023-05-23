// C++ code
int time;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  time = 500;
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, HIGH);
  delay(time); // Wait for 500 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, LOW);
  delay(time); // Wait for 500 millisecond(s)
}
