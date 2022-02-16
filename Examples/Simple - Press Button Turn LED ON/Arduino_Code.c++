int Button_Value = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  Button_Value = digitalRead(2);
  if (Button_Value == HIGH) {
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(3, LOW);
  }
}