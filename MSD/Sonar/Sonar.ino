const int trigPin = 9;
const int echoPin = 10;

long duration;
int dis;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(trigPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delay(2);
digitalWrite(trigPin, HIGH);
delay(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

dis = duration*0.034/2;

Serial.print("DIstance: ");
Serial.println(dis);

}
