#define LED 7

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
}

void loop() {
  digitalWrite(LED, 0);
  delay(1000);
  for (int i=0; i<5; i++) {
    digitalWrite(LED, 1);
    delay(100);
    digitalWrite(LED, 0);
    delay(100);
  }
  digitalWrite(LED, 1);
  while(1) {}
}
