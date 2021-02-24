const int SOUND_PIN = A1;
const int LED_PIN = 13;
void setup() {
  pinMode(SOUND_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}
/* the loop function*/ 
void loop() {
  int value = analogRead(SOUND_PIN);
  Serial.println(value);
  if(value > 500){
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
  }else{
    digitalWrite(LED_PIN, LOW);
    delay(1000);
  }
}
