void setup() { }

void loop() { 
  analogWrite(11, 64); //anglogWrite는 0V~5V사이의 모든 밝기 조절 가능. 11은 LED의 긴 부분이 꽂여있는 핀 번호이고, 64는 LED의 밝기 정도 (Digital에서 ~표시 되어있는 애들)
  delay(500); // 시간 간격을 주는 애. 1000은 1초, 500은 0.5초를 뜻함.
  analogWrite(11, 0);
  delay(500);
  //digitalWrite //digitalWrite는 모든 핀을 사용 가능(Digital핀의 0~13 전부, 단 켜짐(on=High=5V)/꺼짐(off=Low=0V)의 두 가지 형태만 표현)
}
