//The Trick Switch

const int buttonPin = 2;
const int ledPin = 12;

int buttonStatus = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonStatus = digitalRead(buttonPin);
  if (buttonStatus == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
