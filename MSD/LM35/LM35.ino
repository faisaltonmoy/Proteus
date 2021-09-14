int val = 0;
int lm35 = A3;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(lm35);
float mili = (val/1024.0)*5*1000;
float cel = mili/10;
float far = cel * (9 / 5) + 32;

Serial.print("Temp: ");
Serial.print(far);
Serial.print("*F");
Serial.println();
delay(1000);
}
