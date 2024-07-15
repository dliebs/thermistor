//
// Analog Thermistor v1.0.1
// 2023.12.13
//

/*----------  Libraries  ----------*/

#include <thermistor.h>

/*----------  User Variables  ----------*/

int ThermistorPin = 17;
float R1 = 10000;

/*----------  Program Variables  ----------*/

/*----------  Main Functions  ----------*/

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Temperature: ");
  Serial.print(thermistorTempF(ThermistorPin, R1));
  Serial.print(" F; ");
  Serial.print(thermistorTempC(ThermistorPin, R1));
  Serial.println(" C");

  delay(1000);
}
