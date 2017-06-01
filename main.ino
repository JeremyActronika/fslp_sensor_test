#include <Arduino.h>
#include "fslp.hpp"

void setup()
{
    /// Init serial and send version number
    Serial.begin(115200);
    Serial.print(F("VERSION : "));
    Serial.println(F(VERSION));
}

void loop()
{
  int pressure, position;

  pressure = fslpGetPressure();

  if (pressure == 0)
  {
    // There is no detectable pressure, so measuring
    // the position does not make sense.
    position = 0;
  }
  else
  {
    position = fslpGetPosition();  // Raw reading, from 0 to 1023.
  }

  char report[80];
  sprintf(report, "pressure: %5d   position: %5d\n\r",
    pressure, position);
  Serial.print(report);

  delay(100);
}
