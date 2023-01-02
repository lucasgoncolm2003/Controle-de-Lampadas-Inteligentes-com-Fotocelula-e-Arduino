int lamp = 3; // Envio de Sinal para Circuito de Potência
int ldr = A0; // Sinal Analógico de Fotorresistor LDR
int valorldr = 0; // Valor Inicial da Leitura Analógica de LDR
void setup() {
  pinMode(lamp, OUTPUT); // Declara Saída para Circuito de Potência
  pinMode (ldr, INPUT); // Declara Entrada para Sinal Analógico do Fotorresistor
  Serial.begin(9600); // Declara Velocidade de Comunicação Serial
}
void loop() {
  valorldr = analogRead(ldr); // Leitura Analógica no Fotorresistor LDR
  Serial.println(valorldr); // Print de Valores Analógicos em Serial
  if((valorldr) < 920){
    digitalWrite(lamp, HIGH); // Aciona Circuito de Potência
  }  
  else{ 
    digitalWrite(lamp, LOW); // Desliga Circuito de Potência
  }  
}