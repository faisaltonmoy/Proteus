int led = 13;
int pirPin = 2;
int pirSts = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(pirPin,INPUT);
pinMode(led,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
pirSts = digitalRead(pirPin);
if(pirSts == HIGH){
    digitalWrite(led, HIGH);
    Serial.println("Motion Detected");
    delay(1000);
  }else{
     digitalWrite(led,LOW);
     Serial.println("NO Motion Detected");
     delay(1000);
    }
}
