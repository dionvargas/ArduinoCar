//Pinos de acionamento do motor Direito
const int m1a = 8;
const int m1b = 7;

//Pinos de acionamento do motor Esquerdo
const int m2a = 5;
const int m2b = 4;

//Valor incial vinda da serial
char serialMsg = 'S';

void setup() {
  Serial.begin(9600);

  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);

  parar();
}

void loop() {
  serialMsg = Serial.read();
  switch (serialMsg) {
    case 'F':
      paraFrente();
      break;
    case 'B':
      paraTras();
      break;
    case 'L':
      paraEsquerda();
      break;
    case 'R':
      paraDireita();
      break;
    case 'S':
      parar();
      break;
  }
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

void paraDireita() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
}

void paraEsquerda() {
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