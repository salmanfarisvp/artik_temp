#include "DHT.h"
 
#define DHTPIN 2 // data pin
#define DHTTYPE DHT11
 
DHT dht(DHTPIN, DHTTYPE);
 
void setup() {
   Serial.begin(9600);
   dht.begin();
}
 
void loop() {
   delay(60000); // 1 min
   float f = dht.readTemperature(true);
   if (isnan(f)) {
     Serial.println("200"); // error
     return;
   }
   Serial.println(f);
}
