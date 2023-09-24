int ledPin = 7;
int period = 1000000; // period 100 to 10000 (unit: us) 1000000마이크로초 = 1초 (주기)
int duty = 50; // duty 0 to 100 (unit: %) duty cycle: HIGH 신호가 차지하는 비율

void set_period(int new_period) { // 주기함수
  period = new_period;
}

void set_duty(int new_duty) { // 듀티 사이클 함수
  duty = new_duty;
}

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int on = period * duty / 100; // 주기*듀티 사이클 나누기 100 = 켜져있는 시간
  int off = period - on; // 주기 - 켜져있는 시간 = 꺼져있는 시간
  
  for (int bright = 0; bright <= 255; bright++) { // 최소밝기-> 최대밝기
    digitalWrite(ledPin, HIGH);
    delayMicroseconds(on);
    digitalWrite(ledPin, LOW);
    delayMicroseconds(off);
  }

  for (int bright = 255; bright >= 0; bright--) { // 최대밝기-> 최소밝기
    digitalWrite(ledPin, HIGH);
    delayMicroseconds(on);
    digitalWrite(ledPin, LOW);
    delayMicroseconds(off);
  }
}
