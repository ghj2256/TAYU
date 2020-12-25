int Switch1 = 8; // switch를 9번 pin으로 설정
int Switch2 = 9; // switch를 9번 pin으로 설정
int Switch3 = 10; // switch를 9번 pin으로 설정

void setup()
{
  Serial.begin(9600);
  
  pinMode(Switch1,OUTPUT);     // 스위치를 입력으로 설정
  pinMode(Switch2,OUTPUT);     // 스위치를 입력으로 설정
  pinMode(Switch3,OUTPUT);     // 스위치를 입력으로 설정
}
 
void loop()
{
  int left = digitalRead(Switch1);
  int right = digitalRead(Switch3);

  Serial.print("right: ");
  Serial.print(right);
  delay(100);
  Serial.print("left: ");
  Serial.println(left);
  delay(100);
 
}
