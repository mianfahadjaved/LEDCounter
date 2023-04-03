#include <Arduino.h>

class LEDCounter
{
  public:
    LEDCounter(int pin1, int pin2, int pin3, int pin4);
    void begin();
    void upCount();
    void downCount();
    void shiftRight();
    void shiftLeft();
    void generateRandNumber();
    void allOff();
    
  private:
    int _pin1;
    int _pin2;
    int _pin3;
    int _pin4;
    int count;
};
