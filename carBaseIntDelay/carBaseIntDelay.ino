
//Pinos de acionamento do motor esquerdo
const int m1a = 8;
const int m1b = 7;

//Pinos de acionamento do motor direito
const int m2a = 5;
const int m2b = 4;

void setup() {
  pinMode (m1a, OUTPUT);
  pinMode (m1b, OUTPUT);
  pinMode (m2a, OUTPUT);
  pinMode (m2b, OUTPUT);

  parar();
  delay(2000);

  //Chama a função que tem o percurso salvo
  percurso();
 
}

void loop() {
  
}

void percurso(){
  //Codifique aqui o seu percurso

}

void paraFrente(int miliSegundos) {
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);

  delay(miliSegundos);
  parar();
}

void paraTras(int miliSegundos) {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, HIGH);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, HIGH);
  
  delay(miliSegundos);
  parar();
}

void paraEsquerda(int miliSegundos) {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
  
  delay(miliSegundos);
  parar();
}

void paraDireita(int miliSegundos) {
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
  
  delay(miliSegundos);
  parar();
}

void parar() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}
