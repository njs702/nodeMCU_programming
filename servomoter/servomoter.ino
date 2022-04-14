#include <Servo.h>
Servo servo; // Servo 클래스 객체 생성
int value = 0; // 각도 조절 변수

void setup(){
    servo.attach(D4); // D4핀이 pwm 조절 가능한 핀으로 보임
    servo.write(0);
    delay(2000);
}

void loop(){
    for(value=0;value<180;value++){
        servo.write(value);
        delay(20);
    }
    for(value=180;value>0;value--){
        servo.write(value);
        delay(20);
    }
}