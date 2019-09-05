
int PIR_output=5; 
int led=13; 

void setup() {
pinMode(PIR_output, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(digitalRead(PIR_output) == HIGH) 
  {
   digitalWrite(led, HIGH);
   Serial.println("motion detected");
  }
  else{
   digitalWrite(led, LOW); 
   Serial.println("scanning");
   }
}
