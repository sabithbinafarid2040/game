// Motor-1
const int m1u = 2;
const int m1l = 4;
// Motor-2
const int m2u = 6;
const int m2l = 8;
// Enable PINs
const int en1 = 10;
const int en2 = 12;

void setup() {
  pinMode(m1u, OUTPUT);
  pinMode(m1l, OUTPUT);
  pinMode(m2u, OUTPUT);
  pinMode(m2l, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
}

void forward() {
  digitalWrite(en1, HIGH); digitalWrite(en2, HIGH);
  digitalWrite(m1u, HIGH); digitalWrite(m1l, LOW);
  digitalWrite(m2u, HIGH); digitalWrite(m2l, LOW);
}

void backward() {
  digitalWrite(en1, HIGH); digitalWrite(en2, HIGH);
  digitalWrite(m1u, LOW); digitalWrite(m1l, HIGH);
  digitalWrite(m2u, LOW); digitalWrite(m2l, HIGH);
}

void left() {
  digitalWrite(en1, HIGH); digitalWrite(en2, HIGH);
  digitalWrite(m1u, HIGH); digitalWrite(m1l, LOW);
  digitalWrite(m2u, LOW); digitalWrite(m2l, LOW);
}

void right() {
  digitalWrite(en1, HIGH); digitalWrite(en2, HIGH);
  digitalWrite(m1u, LOW); digitalWrite(m1l, LOW);
  digitalWrite(m2u, HIGH); digitalWrite(m2l, LOW);
}

void stopMotors() {
  digitalWrite(en1, LOW); digitalWrite(en2, LOW);
  digitalWrite(m1u, LOW); digitalWrite(m1l, LOW);
  digitalWrite(m2u, LOW); digitalWrite(m2l, LOW);
}

//
// loop() is to show the car moving in a pre-defined path practically
// modify this function for your expected path or movement 
//
void loop() {
  forward();
  delay(1000);
  stopMotors();
  delay(1000);

  left();
  delay(400);
  stopMotors();
  delay(1000);

  forward();
  delay(1000);
  stopMotors();
  delay(1000);

  left();
  delay(400);
  stopMotors();
  delay(1000);

  forward();
  delay(1000);
  stopMotors();
  delay(1000);

  left();
  delay(400);
  stopMotors();
  delay(1000);

  forward();
  delay(1000);
  stopMotors();
  delay(1000);
}
