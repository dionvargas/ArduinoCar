//Pinos de acionamento do motor esquerdo
const int m1Enable = 9;
const int m1a = 8;
const int m1b = 7;

//Pinos de acionamento do motor direito
const int m2Enable = 3;
const int m2a = 5;
const int m2b = 4;

void setup() {
  pinMode(m1Enable, OUTPUT);
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
  pinMode(m2Enable, OUTPUT);

  parar();
  delay(2000);

  //Chama a função que tem o percurso salvo
  percurso();
}

void loop() {
}

void percurso() {
  //Codifique aqui o seu percurso
}

void m1ParaFrente() {
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
}

void m2ParaFrente() {
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
}

void m1ParaTras() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, HIGH);
}

void m2ParaTras() {
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, HIGH);
}

void parar() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
  analogWrite(m1Enable, 0);
  analogWrite(m2Enable, 0);
}

void acionaMotores(int m1, int m2, int miliSegundos) {
  if (m1 >= 0) {
    if (m1 > 100) m1 = 100;
    m1ParaFrente();
    analogWrite(m1Enable, map(m1, 0, 100, 0, 1023));
  } else {
    if (m1 < -100) m1 = -100;
    m1ParaTras();
    analogWrite(m1Enable, map(abs(m1), 0, 100, 0, 1023));
  }

  if (m2 >= 0) {
    if (m2 > 100) m2 = 100;
    m2ParaFrente();
    analogWrite(m2Enable, map(m2, 0, 100, 0, 1023));
  } else {
    if (m2 < -100) m2 = -100;
    m1ParaTras();
    analogWrite(m2Enable, map(abs(m2), 0, 100, 0, 1023));
  }

  delay(miliSegundos);
  parar();
}