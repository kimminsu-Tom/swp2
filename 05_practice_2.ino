unsigned int PIN_LED = 7; // LED가 연결된 핀 번호

void setup() {
  pinMode(PIN_LED, OUTPUT); // LED 핀을 출력으로 설정
  Serial.begin(115200);
}

void loop() {
  while (1) {
    digitalWrite(PIN_LED, LOW); // LED를 켬 (0: HIGH, 1: LOW)
    delay(1000); // 1초 동안 대기

    for (int i = 0; i < 5; i++) {
      digitalWrite(PIN_LED, HIGH); // LED를 끔 (1: LOW, 0: HIGH)
      delay(100); // 0.1초
      digitalWrite(PIN_LED, LOW); // LED를 켬 (0: HIGH, 1: LOW)
      delay(100); // 0.1초
    }

    digitalWrite(PIN_LED, HIGH); // LED를 끔 (1: LOW, 0: HIGH)
    delay(1000); // 1초 동안 대기
  }
}
