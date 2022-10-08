void setup() {
  Serial.begin(9600);
}

int lastValue = 0;

void loop() {
  int x = analogRead(0);
  
  if (x == lastValue) {
    Serial.println("------- same sound! -----------");
  } else {
    Serial.println("new sound!");
  }

  lastValue = x;
  delay(10);
}
