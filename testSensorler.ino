#include <DFRobot_SGP40.h>

#include "Wire.h"
#include "SHT31.h"

#define SHT31_ADDRESS 0x44

SHT31 sht;
DFRobot_SGP40 mySGP40;  //Declare SGP40.

void setup() {

  Serial.begin(115200);

  while (mySGP40.begin(/*duration = */ 10000) != true) {
    Serial.println("Failed to initialize SGP40, please check wiring and cable connections");  //You need to press the Gravity cable all the way in.
    delay(1000);
  }

  //Wire.begin();
  sht.begin();
  sht.read();
  mySGP40.setRhT(/*relativeHumidity = */ sht.getHumidity(), /*temperature = */ sht.getTemperature());
}

void loop() {
  sht.read();
  Serial.print(sht.getTemperature(), 1);
  Serial.print("\t");
  Serial.print(sht.getHumidity(), 1);
  Serial.print("\t");

  uint16_t index = mySGP40.getVoclndex();  //Declare variable that is to be used to store VOC index.
  Serial.print("vocIndex = ");
  Serial.println(index);

  delay(1000);
}
