#include <Servo.h>

#define BUTTON 3
#define SERVO 9
#define MAX_RAD 170

int pos = 0;

Servo myservo ;

void setup() {
pinMode(BUTTON,INPUT_PULLUP);
myservo.attach(SERVO);
for(pos=0; pos<=90; pos++){
  myservo.write(pos);
  delay(10);
}
for(pos=90; pos>0; pos--){
  myservo.write(pos);
  delay(10);
}
}

void loop(){
 if(digitalRead(BUTTON))
 myservo.write(MAX_RAD);
 else
 myservo.write(0);
 delay(15);
}

