#include<Keypad.h>

const byte rows = 4;
const byte cols = 4;

char keys[rows][cols] = {
  
  {'7','8','9','A'},
  {'4','5','6','B'},
  {'1','2','3','C'},
  {'*','0','#','D'},
  
  };

  byte rowPin[rows] = {2,3,4,5}; // connection to arduino pins
  byte colPin[cols] = {6,7,8,9};

  Keypad keypad = Keypad (makeKeymap(keys),rowPin, colPin, rows, cols);

  void setup(){
    Serial.begin(9600);
  }

  void loop(){
   
    char key = keypad.getKey(); // get val from keypad

    if(key){
      Serial.println(key); // output in terminal
      }   
    }
