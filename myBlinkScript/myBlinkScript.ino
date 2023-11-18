double pinNum = LED_BUILTIN;
double timeToDelay = 1000; // in milliseconds

void setup() {
  pinMode(pinNum, OUTPUT);
}

void loop() {
  double sizeOfVariation = 1000;
  double randomVariationInTime = random(-1 * sizeOfVariation, sizeOfVariation + 1);
  digitalWrite(pinNum, HIGH); // sets the digital pin 13 on
  delay(timeToDelay + randomVariationInTime); // waits for a second
  digitalWrite(pinNum, LOW);  // sets the digital pin 13 off
  delay(timeToDelay + randomVariationInTime); // waits for a second
}
