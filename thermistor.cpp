//
// Analog Thermistor v1.0.1
// 2023.12.13
//

#include "thermistor.h"

float thermistorTempC(int ThermistorPin, float R1) {
  float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
  float logR2 = log(R1 * (1023.0 / (float)analogRead(ThermistorPin) - 1.0));
  float Tk = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  return Tk - 273.15;
}

float thermistorTempF(int ThermistorPin, float R1) {
  return (thermistorTempC(ThermistorPin, R1) * 9.0)/ 5.0 + 32.0;
}
