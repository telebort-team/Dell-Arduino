#include <Ultrasonic.h>
 
//(Trigger pin, Echo pin)
Ultrasonic ultrasonic(9, 10);
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  distance = ultrasonic.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);
}
