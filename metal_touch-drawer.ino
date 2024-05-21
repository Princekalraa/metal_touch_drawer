const int touchSensorPin = 2;
const int lockPin = 13;

void setup() {
  pinMode(touchSensorPin, INPUT_PULLUP);
  pinMode(lockPin, OUTPUT);
}

void loop() {
  if (digitalRead(touchSensorPin) == LOW) {
    digitalWrite(lockPin, HIGH);
    delay(1000);
    digitalWrite(lockPin, LOW);
  }
}
