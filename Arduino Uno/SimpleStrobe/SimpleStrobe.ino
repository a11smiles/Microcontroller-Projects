int analogPin = 0;
int ledPin = 13;
int onTime = 1000;

int minDelay = 1;
int maxDelay = 1000;
int strobeDelay = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  strobeDelay = map(analogRead(analogPin), 0, 1023, minDelay, maxDelay);

  digitalWrite(ledPin, HIGH);
  delayMicroseconds(onTime);
  digitalWrite(ledPin, LOW);
  delay(strobeDelay);
}
