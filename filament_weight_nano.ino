#include "HX711.h"
#define DOUT 3
#define CLK 2

HX711 scale(DOUT, CLK);
int baud = 9600

void setup() {
  // put your setup code here, to run once:
  Serial.begin(baud);
  Serial.println(baud);
  delay(2000);
  long zero_factor = scale.read_average();
  Serial.print("Zero factor:");
  Serial.println(zero_factor);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    Serial.print(scale.get_units(), 3);
    Serial.print("measure:");
    Serial.print();
  }
}
