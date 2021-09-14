int ir = 2;
int led = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(ir,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sts = digitalRead(ir);

if(sts == 1)
{
  digitalWrite(led,HIGH);  
}else{
  digitalWrite(led,LOW); 
  }
}
