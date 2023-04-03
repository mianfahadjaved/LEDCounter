#include <LEDCounter.h>

LEDCounter::LEDCounter(int pin1, int pin2, int pin3, int pin4)
{
  _pin1 = pin1;
  _pin2 = pin2;
  _pin3 = pin3;
  _pin4 = pin4;
}

void LEDCounter::begin()
{
  pinMode(_pin1, OUTPUT);
  pinMode(_pin2, OUTPUT);
  pinMode(_pin3, OUTPUT);
  pinMode(_pin4, OUTPUT);
}

void LEDCounter::upCount()
{
  while (true)
  {
    for (int i = 0; i < 16; i++) 
  {
    digitalWrite(_pin1, bitRead(i, 0));
    digitalWrite(_pin2, bitRead(i, 1));
    digitalWrite(_pin3, bitRead(i, 2));
    digitalWrite(_pin4, bitRead(i, 3));
    delay(500);
  }
  
  }
}

void LEDCounter::downCount()
{
  while (true)
  {
    for (int i = 15; i >= 0; i--) 
  {
    digitalWrite(_pin1, bitRead(i, 0));
    digitalWrite(_pin2, bitRead(i, 1));
    digitalWrite(_pin3, bitRead(i, 2));
    digitalWrite(_pin4, bitRead(i, 3));
    delay(500);
  }
  
  }
}

void LEDCounter::shiftRight()
{
  while (1) 
  {
    for (int i = 0; i < 4; i++)
    {
      if (i==0)
      {
        digitalWrite(_pin1, HIGH);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin3, LOW);
        digitalWrite(_pin4, LOW);
      }
      if (i==1)
      {
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, HIGH);
        digitalWrite(_pin3, LOW);
        digitalWrite(_pin4, LOW);
      }
      if (i==2)
      {
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin3, HIGH);
        digitalWrite(_pin4, LOW);
      }
      if (i==3)
      {
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin3, LOW);
        digitalWrite(_pin4, HIGH);
      }
      delay(500);
    }
  }
}

void LEDCounter::shiftLeft()
{
  while (1) 
  {
    for (int i = 3; i >= 0; i--)
    {
      if (i==0)
      {
        digitalWrite(_pin1, HIGH);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin3, LOW);
        digitalWrite(_pin4, LOW);
      }
      if (i==1)
      {
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, HIGH);
        digitalWrite(_pin3, LOW);
        digitalWrite(_pin4, LOW);
      }
      if (i==2)
      {
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin3, HIGH);
        digitalWrite(_pin4, LOW);
      }
      if (i==3)
      {
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin3, LOW);
        digitalWrite(_pin4, HIGH);
      }
      delay(500);
    }
  }
}

void LEDCounter::generateRandNumber()
{
  int num = rand() % 16;
  digitalWrite(_pin1, bitRead(num, 0));
  digitalWrite(_pin2, bitRead(num, 1));
  digitalWrite(_pin3, bitRead(num, 2));
  digitalWrite(_pin4, bitRead(num, 3));
}

void LEDCounter::allOff()
{
  digitalWrite(_pin1, LOW);
  digitalWrite(_pin2, LOW);
  digitalWrite(_pin3, LOW);
  digitalWrite(_pin4, LOW);
}
