#define PIN_LED 13
unsigned int count;
bool toggle;  // int 대신 bool 사용

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World!");
  count = 0;
  toggle = false;  // 초기값 설정
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);  // 상태 반전
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

bool toggle_state(bool toggle) {
  return !toggle;  // bool 값 반전
}
