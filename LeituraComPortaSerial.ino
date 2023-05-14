int pushButton = 7; // o pino 7 tem um botao ligado nele.
int ledPin = 13; // entrada do LED no pino 13.
void setup() {
Serial.begin(9600); // Inicia a comunicacao serial a 9600 bits por segundo
pinMode(pushButton, INPUT); // define o botao como uma entrada.
pinMode(ledPin, OUTPUT); //define o LED como uma saída.
}
void loop() {
// faz a leitura do pino de entrada:
int buttonState = digitalRead(pushButton);
if (buttonState == 1) {
 digitalWrite(ledPin, HIGH);
} else {
 digitalWrite(ledPin, LOW);
}
// imprime o estado do botao:
Serial.println(buttonState);
delay(1); // delay entre leituras (em milissegundos)
}
