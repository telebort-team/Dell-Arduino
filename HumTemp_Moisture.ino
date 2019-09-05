
#include "DHT.h"

int moisPin = A0;

#define DHTPIN 2    
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT22 test!");
  dht.begin();
}


void loop() {
  delay(2000);
  
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
    }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C ");


  int moisValue = analogRead(moisPin);
  Serial.print("Analog Value : ");
  Serial.println(moisValue);

  int moisPer = map(moisValue, 0, 1023, 0, 100);
  Serial.print("Soil Drynes:");
  Serial.print(moisPer);
  Serial.println("%");
  Serial.println(" ");
  

}
