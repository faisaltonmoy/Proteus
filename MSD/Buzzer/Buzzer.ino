const int buzzer = 9; // init pin number

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzer,1000); // for different sound 
  delay(100);
  noTone(buzzer); // no sound
  delay(1000);
}
