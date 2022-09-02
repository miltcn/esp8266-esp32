const byte LED_VERMELHO = 5;
const byte LED_AMARELO = 4;
const byte LED_VERDE = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  digitalWrite(LED_VERMELHO, HIGH);
  delay(1000);
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  delay(1000);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  delay(1000);
  digitalWrite(LED_VERDE, LOW);  
}
