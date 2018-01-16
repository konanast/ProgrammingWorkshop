
const int ledPin1 =  1;
const int ledPin2 =  2;
const int ledPin3 =  3;
const int ledPin4 =  4;
const int ledPin5 =  5;
const int ledPin6 =  6;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {
    digitalWrite(ledPin1, HIGH);
        delay(1000);
    digitalWrite(ledPin1, LOW);
        delay(1000);
    digitalWrite(ledPin2, HIGH);
        delay(2000);
    digitalWrite(ledPin2, LOW);
        delay(8000);
    digitalWrite(ledPin3, HIGH);
        delay(900);
    digitalWrite(ledPin3, LOW);
        delay(3000);
    digitalWrite(ledPin4, HIGH);
        delay(500);
    digitalWrite(ledPin4, LOW);
        delay(500);
    digitalWrite(ledPin5, HIGH);
        delay(50
);
    digitalWrite(ledPin5, LOW);
        delay(200);
    digitalWrite(ledPin6, HIGH);
        delay(2000);
    digitalWrite(ledPin6, LOW);
        delay(1000);
}
