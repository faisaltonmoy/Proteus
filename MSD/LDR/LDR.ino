int ldr=A4; // for analog Pin input
int val = 0; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT); // attach LED to pin 13
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(ldr);
  
  //Terminal output
  Serial.println("Intensity of the LDR is = ");
  Serial.println(val);

  //condition for LED on
  if(val<=200)
  {
    digitalWrite(13,HIGH);
  }else
  {
    digitalWrite(13,LOW);
  }
  delay(1000);
}
