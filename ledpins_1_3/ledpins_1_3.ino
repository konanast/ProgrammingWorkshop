//LED Example



const int ledPin1 =  1;
const int ledPin2 =  2;
const int ledPin3 =  3;


void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
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
}
