const int m1a = 7;
const int m1b = 6;
const int m2a = 4;
const int m2b = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode (m1a, OUTPUT);
  pinMode (m1b, OUTPUT);
  pinMode (m2a, OUTPUT);
  pinMode (m2b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void paraFrente() {
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
}

void paraTras() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, HIGH);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, HIGH);
}

void paraEsquerda() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
}

void paraDireita() {
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}

void parar() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}
