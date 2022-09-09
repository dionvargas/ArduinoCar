//Pinos de acionamento do motor esquerdo
const int mEsquerdoEnable = 3;
const int mEsquerdoA = 5;
const int mEsquerdoB = 4;

//Pinos de acionamento do motor direito
const int mDireitoEnable = 9;
const int mDireitoA = 8;
const int mDireitoB = 7;

void setup() {
  pinMode(mDireitoEnable, OUTPUT);
  pinMode(mDireitoA, OUTPUT);
  pinMode(mDireitoB, OUTPUT);
  pinMode(mEsquerdoA, OUTPUT);
  pinMode(mEsquerdoB, OUTPUT);
  pinMode(mEsquerdoEnable, OUTPUT);

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
  digitalWrite(mDireitoA, HIGH);
  digitalWrite(mDireitoB, LOW);
}

void mEsquerdoParaFrente() {
  digitalWrite(mEsquerdoA, HIGH);
  digitalWrite(mEsquerdoB, LOW);
}

void m1ParaTras() {
  digitalWrite(mDireitoA, LOW);
  digitalWrite(mDireitoB, HIGH);
}

void mEsquerdoParaTras() {
  digitalWrite(mEsquerdoA, LOW);
  digitalWrite(mEsquerdoB, HIGH);
}

void parar() {
  digitalWrite(mDireitoA, LOW);
  digitalWrite(mDireitoB, LOW);
  digitalWrite(mEsquerdoA, LOW);
  digitalWrite(mEsquerdoB, LOW);
  analogWrite(mDireitoEnable, 0);
  analogWrite(mEsquerdoEnable, 0);
}

void acionaMotores(int mEsquerdo, int mDireito, int miliSegundos) {
  if (mEsquerdo >= 0) {
    if (mEsquerdo > 100) mEsquerdo = 100;
    mEsquerdoParaFrente();
    analogWrite(mEsquerdoEnable, map(mEsquerdo, 0, 100, 0, 1023));
  } else {
    if (mEsquerdo < -100) mEsquerdo = -100;
    mEsquerdoParaTras();
    analogWrite(mEsquerdoEnable, map(abs(mEsquerdo), 0, 100, 0, 1023));
  }

  if (mDireito >= 0) {
    if (mDireito > 100) mDireito = 100;
    m1ParaFrente();
    analogWrite(mDireitoEnable, map(mDireito, 0, 100, 0, 1023));
  } else {
    if (mDireito < -100) mDireito = -100;
    m1ParaTras();
    analogWrite(mDireitoEnable, map(abs(mDireito), 0, 100, 0, 1023));
  }

  delay(miliSegundos);
  parar();
}