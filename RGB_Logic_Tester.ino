//RGB Logic Probe
//Darren Green
//Sept 19 2021

/*
Based off of A Logic Tester (with an RGB LED) from Make: Basic Arduino Projects book

Subbed in a seperate Red and Green LED for the RGB but the code should be the same.
 */

 
int redLED = 10;
int grnLED = 11;
int probeIN = 8;
int probeStatus = 0;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(grnLED, OUTPUT);
  pinMode(probeIN, INPUT);
  digitalWrite(redLED, HIGH);
  digitalWrite(grnLED, HIGH);

}

void loop() {
  probeStatus = digitalRead(probeIN);

  if (probeStatus == HIGH){
    digitalWrite(redLED, HIGH);
    digitalWrite(grnLED, LOW);
  }
  else {
    digitalWrite(redLED, LOW);
    digitalWrite(grnLED, HIGH);
  }
}


