void setup() {
  // Projeto de semáforo realizado, incialmetne com apenas com duas vias, imaginando-se uma via de mão e a outra de contramão, em referênci

  //atribuição de saída ou entrada a cada porta utilizada
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // instanciamento dos pinos
  int Verde1 = 12;
  int Verde2 = 5;
  int Vermelho1 = 9;
  int Vermelho2 = 7;
  int Amarelo1 = 11;
  int Amarelo2 = 6;
  int A = 0;
  
  
  digitalWrite(Verde1, HIGH); digitalWrite(Vermelho2, HIGH);   // Liga o verde de um lado e o vermelho do outro
  delay(4000);
  digitalWrite(Verde1, LOW); digitalWrite(Amarelo1, HIGH); // Liga o verde de um e o amarelo do outro
  delay(2000);
  digitalWrite(Amarelo1, LOW); digitalWrite(Vermelho2, LOW); // apaga o amarelo e o vermelho
  digitalWrite(Vermelho1, HIGH); digitalWrite(Verde2, HIGH); // acende o vermelho e o verde
  delay(4000);
  digitalWrite(Verde2, LOW); digitalWrite(Amarelo2, HIGH); //  apaga o verde e acendo o amarelo
  delay(2000);
  digitalWrite(Amarelo2, LOW); digitalWrite(Vermelho1, LOW); // apaga o amarelo e o vermelho

  // ... inicia todo o processo ... //
 

}
