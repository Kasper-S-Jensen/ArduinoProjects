#include <Arduino.h>


int LEDone = 9;
int LEDtwo = 10;
int LEDthree = 11;
int LEDfour = 12;
int delay_ = 1200;

void countZero(int delay_)
  {
    digitalWrite(LEDone,LOW);
    digitalWrite(LEDtwo,LOW);
    digitalWrite(LEDthree,LOW);
    digitalWrite(LEDfour,LOW);
    delay(delay_);
  }

  void countOne(int delay_)
  {
    digitalWrite(LEDone,HIGH);
    digitalWrite(LEDtwo,LOW);
    digitalWrite(LEDthree,LOW);
    digitalWrite(LEDfour,LOW);
    delay(delay_);
  }

 void countTwo(int delay_)
  {
    digitalWrite(LEDone,LOW);
    digitalWrite(LEDtwo,HIGH);
    digitalWrite(LEDthree,LOW);
    digitalWrite(LEDfour,LOW);
    delay(delay_);
  }

   void countThree(int delay_)
  {
    digitalWrite(LEDone,HIGH);
    digitalWrite(LEDtwo,HIGH);
    digitalWrite(LEDthree,LOW);
    digitalWrite(LEDfour,LOW);
    delay(delay_);
  }

   void countFour(int delay_)
  {
    digitalWrite(LEDone,LOW);
    digitalWrite(LEDtwo,LOW);
    digitalWrite(LEDthree,HIGH);
    digitalWrite(LEDfour,LOW);
    delay(delay_);
  }

   void countFive(int delay_)
  {
    digitalWrite(LEDone,HIGH);
    digitalWrite(LEDtwo,LOW);
    digitalWrite(LEDthree,HIGH);
    digitalWrite(LEDfour,LOW);
    delay(delay_);
  }


   void countSix(int delay_)
  {
    digitalWrite(LEDone,LOW);
    digitalWrite(LEDtwo,HIGH);
    digitalWrite(LEDthree,HIGH);
    digitalWrite(LEDfour,LOW);
    delay(delay_);
  }

   void countSeven(int delay_)
  {
    digitalWrite(LEDone,HIGH);
    digitalWrite(LEDtwo,HIGH);
    digitalWrite(LEDthree,HIGH);
    digitalWrite(LEDfour,LOW);
    delay(delay_);
  }

   void countEight(int delay_)
  {
    digitalWrite(LEDone,LOW);
    digitalWrite(LEDtwo,LOW);
    digitalWrite(LEDthree,LOW);
    digitalWrite(LEDfour,HIGH);
    delay(delay_);
  }

   void countNine(int delay_)
  {
    digitalWrite(LEDone,HIGH);
    digitalWrite(LEDtwo,LOW);
    digitalWrite(LEDthree,LOW);
    digitalWrite(LEDfour,HIGH);
    delay(delay_);
  }

   void countTen(int delay_)
  {
    digitalWrite(LEDone,LOW);
    digitalWrite(LEDtwo,HIGH);
    digitalWrite(LEDthree,LOW);
    digitalWrite(LEDfour,HIGH);
    delay(delay_);
  }

   void countEleven(int delay_)
  {
    digitalWrite(LEDone,HIGH);
    digitalWrite(LEDtwo,HIGH);
    digitalWrite(LEDthree,LOW);
    digitalWrite(LEDfour,HIGH);
    delay(delay_);
  }

   void countTwelve(int delay_)
  {
    digitalWrite(LEDone,LOW);
    digitalWrite(LEDtwo,LOW);
    digitalWrite(LEDthree,HIGH);
    digitalWrite(LEDfour,HIGH);
    delay(delay_);
  }

   void countThirteen(int delay_)
  {
    digitalWrite(LEDone,HIGH);
    digitalWrite(LEDtwo,LOW);
    digitalWrite(LEDthree,HIGH);
    digitalWrite(LEDfour,HIGH);
    delay(delay_);
  }

   void countFourteen(int delay_)
  {
    digitalWrite(LEDone,LOW);
    digitalWrite(LEDtwo,HIGH);
    digitalWrite(LEDthree,HIGH);
    digitalWrite(LEDfour,HIGH);
    delay(delay_);
  }

   void countFifteen(int delay_)
  {
    digitalWrite(LEDone,HIGH);
    digitalWrite(LEDtwo,HIGH);
    digitalWrite(LEDthree,HIGH);
    digitalWrite(LEDfour,HIGH);
    delay(delay_);
  }



 float volt;
void setup() {
  // put your setup code here, to run once:
 pinMode(LEDone, OUTPUT);
  pinMode(LEDtwo, OUTPUT);
  pinMode(LEDthree, OUTPUT);
  pinMode(LEDfour, OUTPUT);
  pinMode(A3,INPUT);
  Serial.begin(9600);

}

 


void loop() {
  // put your main code here, to run repeatedly:
  volt = (5./1023.)* analogRead(A3);
  Serial.println(volt);
  countZero(delay_);
  countOne(delay_);

  
  countTwo(delay_);
  
 
  countThree(delay_);
  countFour(delay_);
  countFive(delay_);
  countSix(delay_);
  countSeven(delay_);
  countEight(delay_);
  countNine(delay_);
  countTen(delay_);
  countEleven(delay_);
  countTwelve(delay_);
  countThirteen(delay_);
  countFourteen(delay_);
  countFifteen(delay_);
  
  
}


