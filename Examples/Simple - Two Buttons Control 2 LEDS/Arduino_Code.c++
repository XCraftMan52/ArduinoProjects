int Button_Value_1 = 0;

int Button_Value_2 = 0;

void setup()
{
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Button_Value_1 = digitalRead(1);
  Button_Value_2 = digitalRead(2);
  if (Button_Value_1 == HIGH) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  if (Button_Value_2 == HIGH) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}