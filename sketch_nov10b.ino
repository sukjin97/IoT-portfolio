int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;

int time = 200; 
//delay에 있는 숫자들을 하나하나 다 바꿀 필요없이 delay를 하나의 변수 time으로 변수를 선언한 뒤 변수 선언에서 변수값만 바꾸면 됨
void setup() {
  // put your setup code here, to run once:
  //pinMode(led1, OUTPUT);
  //pinMode(led2, OUTPUT);
  //pinMode(led3, OUTPUT);
  //pinMode(led4, OUTPUT);
  //pinMode(led5, OUTPUT);
  //근데 민약 빵판에 led가 100개라면 감당 불가!!
  
  for(int i=13; i>8; i--)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(led1, HIGH);
  //delay(500);
  //digitalWrite(led2, HIGH);
  //delay(500);
  //digitalWrite(led3, HIGH);
  //delay(500);
  //digitalWrite(led4, HIGH);
  //delay(500);
  //digitalWrite(led5, HIGH);
  //delay(500);
  //digitalWrite(led1,LOW);
  //delay(500);
  //digitalWrite(led2,LOW);
  //delay(500);
  //digitalWrite(led3,LOW);
  //delay(500);
  //digitalWrite(led4,LOW);
  //delay(500);
  //digitalWrite(led5,LOW);
  //delay(500);
  
  /*led 사이에 켜지는 간격을 1초에서 0.5초로 바꾸는 데 전부 수정해야해서 번거로움*/
  for(int i=13; i>8; i--)
  {
    digitalWrite(i, HIGH);
    delay(time);
  } //반복문 사용으로 코드가 길어지는 걸 방지
  /*digitalWrite(led1, HIGH);
  delay(time);
  digitalWrite(led2, HIGH);
  delay(time);
  digitalWrite(led3, HIGH);
  delay(time);
  digitalWrite(led4, HIGH);
  delay(time);
  digitalWrite(led5, HIGH);
  delay(time);*/

  for(int i=9; i<14; i++)
  {
    digitalWrite(i,LOW);
    delay(time);
  }//반복문 사용으로 코드가 길어지는 걸 방지
  /*digitalWrite(led1,LOW);
  delay(time);
  digitalWrite(led2,LOW);
  delay(time);
  digitalWrite(led3,LOW);
  delay(time);
  digitalWrite(led4,LOW);
  delay(time);
  digitalWrite(led5,LOW);
  delay(time);*/



}
