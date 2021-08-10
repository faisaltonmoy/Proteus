int LmotorF = 7; // left motor
int LmotorR = 6;

int RmotorF = 9; // right motor`
int RmotorR = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LmotorF,OUTPUT); 
  pinMode(LmotorR,OUTPUT);
  
  pinMode(RmotorF,OUTPUT);
  pinMode(RmotorR,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //left forward
  digitalWrite(LmotorF, HIGH);
  digitalWrite(LmotorR, LOW);
  
  //right backward
  digitalWrite(RmotorR, HIGH);
  digitalWrite(RmotorF, LOW);
  delay(2000);

  //left backward
  digitalWrite(LmotorR, HIGH);
  digitalWrite(LmotorF, LOW);

  //right forward
  digitalWrite(RmotorF, HIGH);
  digitalWrite(RmotorR, LOW);
  delay(2000);

  //stop
  digitalWrite(LmotorR, LOW);
  digitalWrite(LmotorF, LOW);
  //stop
  digitalWrite(RmotorR, LOW);
  digitalWrite(RmotorF, LOW);
  delay(2000);
}
