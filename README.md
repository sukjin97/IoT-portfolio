IoT Portfolio(스마트팜 및 아두이노 프로젝트)

이 저장소는 제가 사물인터넷 공부를 하며 했던 프로젝트들(아두이노, ESP32, 라즈베리파이, 클라우드)의 코드들과 매일 공부하며 알게 된 내용들을 저장해 둔 곳 포트폴리오 입니다.

실습 첫째날(2025년 10월 14일)-Analog와 Digital의 차이점 분석 및 analogwrite와 digitalWrite, delay함수의 사용 용도 분석

1) analogWrite는 analogWrite(pin번호, 밝기)로 꽂은 핀 번호의 LED의 밝기를 0V~5V, IDE 프로그래밍 상에서는 숫자로 표현하면 0에서 255사이의 밝기로 설정.
2) digitalWrite는 digitalWrite(pin번호, High(켜짐)/Low(꺼짐))으로 표현
    -High= 전류의 최댓값(5V)= 켜짐
    -Low는 전류의 최솟값(0V)= 꺼짐
   
3) delay는 함수간 간격을 표현하는 것
   delay(500) = 0.5초 간격, delay(1000)=1초 간격
   
   ex)void loop()
   {analogWrite(11,255);
      delay(1000);
      analogWrite(10,255);
      delay(1000)
   }
   ->11번 핀의 led를 최대 밝기로 빛나게 한뒤 1초 후 10번 핀의 led가 최대 밝기로 빛난 뒤 1초 후 다시 11번핀의 led가 최대 밝기로 빛나는 무한반복.
   ->여기서 loop는 무한 반복을 의미함
