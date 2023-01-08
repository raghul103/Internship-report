#include "Arduino.h"

int pwm1, pwm1Read, pwm2Read, count1, count2, rise_time1, rise_time2, fall_time1, fall_time2, stamp1;

void ISR1()
{
  
  if (digitalRead(D1) == 1) 
  {  rise_time1 = micros();
    // count1 = 1;
  }

  if(digitalRead(D1) == 0)
  {
    fall_time1 = micros();
    //count2 = 1;
    pwm1 = fall_time1 - rise_time1;
    stamp1 = micros();

    if(pwm1 > 1000)
      pwm1Read = pwm1;
  
  }
  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(D1, INPUT);
  attachInterrupt(digitalPinToInterrupt(D1), ISR1, CHANGE);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(pwm1Read);
}
