#include<LiquidCrystal.h>

LiquidCrystal lcd (13,12,11,10,9,8); //init pin number

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.clear();
  lcd.print("Loading..."); // starting text
}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.setCursor(0,1); // position of text

  delay(3000);

  lcd.print("MSD Lab - 2");
  
  delay(2000);
  lcd.clear();

  delay(2000);

  lcd.print("Cursor Blick");
  lcd.blink();

  delay(2000);
  lcd.clear();

  lcd.print("U_Cursor");
  lcd.blink();

  delay(2000);
  lcd.clear();

  lcd.print("No Cursor");
  lcd.blink();

  delay(2000);
  lcd.clear();

  lcd.print("Resume");
  lcd.display();

  delay(2000);
  lcd.clear();
  
}
