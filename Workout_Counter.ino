
int vib_pin=7;
int led_pin=13;
int counter = 0;

void setup() {
  pinMode(vib_pin,INPUT);
  pinMode(led_pin,OUTPUT);
  Serial.begin(9600);
}





void loop() {
  int vibrate=digitalRead(vib_pin);
  if(vibrate == HIGH)
  {
    counter = counter + 1;
    
    digitalWrite(led_pin,HIGH);
    delay(100);
    digitalWrite(led_pin,LOW);
    //delay(100);
    
    Serial.print("Counter =");
    Serial.println(counter);
   }
   else
   digitalWrite(led_pin,LOW);
}
