int analogPin = 0;  // analog input pin A0
int ledPin = 13;    // digital output pin 13 (light)
int onTime = 1000;  // default milliseconds light is on

int minDelay = 1;     // min delay time (range)
int maxDelay = 1000;  // max delay time (range)
int strobeDelay = 0;  // calculated actual delay (between min and max)

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  strobeDelay = map(analogRead(analogPin), 0, 1023, minDelay, maxDelay);  // get value of potentiometer and calculate delay

  digitalWrite(ledPin, HIGH);
  delayMicroseconds(onTime);
  digitalWrite(ledPin, LOW);
  delay(strobeDelay);
}
