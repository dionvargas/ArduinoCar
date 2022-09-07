
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
 
  // Finaliza o processo
  parar();
}

void loop() {
  
}

void percurso(){
  //Codifique aqui o seu percurso

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
