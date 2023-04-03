#include <LEDCounter.h>

LEDCounter myled(2, 3, 4, 5);

void setup() 
{
  myled.begin();
  myled.upCount(); //keeps on counting from 0 - 15 in binary numbers
}

void loop()
{

}
