
int buzzerPin = 8;
int button =2;

void setup() {
  
  pinMode(buzzerPin, OUTPUT);
  pinMode(button, INPUT_PULLUP);

}

void loop() {

 int ButtonPush = digitalRead(button);
 if (ButtonPush == LOW){
  tone(buzzerPin, 1000, 500);
 }
 else{
  noTone(8);
 }
}
