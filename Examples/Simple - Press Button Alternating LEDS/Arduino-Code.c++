int Button_Value = 0;
int Count = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Button_Value = digitalRead(2);
  if (Button_Value == HIGH) {
    if (Count == 0) {
      digitalWrite(3, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      Count = 1;
    } else {
      digitalWrite(4, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      Count = 0;
    }
  }
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}