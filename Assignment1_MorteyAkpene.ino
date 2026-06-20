int ledPin = 13;
int startValue = 5;

void flashLED(int times){
  for(int i = 0; i < times; i++){
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}



void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while(count > 0){
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);

    delay(500);
    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");

}

void loop() {
  // put your main code here, to run repeatedly:

}
