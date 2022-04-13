int trig = D1;
int echo = D0;

void setup(){
    Serial.begin(9600);
    pinMode(echo,INPUT);
    pinMode(trig,OUTPUT);
}

float readUltraSonic(){
    float return_time, howlong;

    // 초음파 센서는 초음파 발사 후 돌아오는 시간을 역산하여 거리 계산
    digitalWrite(trig,HIGH); // 초음파 발사
    delay(5);
    digitalWrite(trig,LOW); // 초음파 정시
    return_time = pulseIn(echo,HIGH); // 돌아오는 시간
    // 시간을 거리로 계산
    howlong = ((float)(340*return_time) / 10000)/2;
    return howlong;
}

void loop(){
    Serial.print("Check the value ! :");
    Serial.print(readUltraSonic());
    delay(1000);
}