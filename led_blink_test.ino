
int led = 13;
//변수 선언. 가독성 유지보수 면에서 다루기 편리함.

void setup() {
  pinMode(led, OUTPUT);
}
//초기 및 기본 설정 상태. 


void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

// 무한 반복하는 곳. 13이 들어있는 led라는 변수를 가져와 그것을 끄기/켜기를 반복.
// 전원이 공급되지 않지 않는 한 계속 동작. 500은 0.5초, 1초는 1000으로 나타냄. 
