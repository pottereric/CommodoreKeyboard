/* @file HelloKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates the simplest use of the matrix Keypad library.
|| #
*/
#include <Keypad.h>

//const byte ROWS = 8;
//const byte COLS = 8; 
//char keys[ROWS][COLS] = {
//  {'2','4','6','8','0','-','A','B'},
//  {'q','e','t','u','o','@','C','D'},
//  {'z','z','z','z','z','z','z','z'},
//  {'z','z','z','z','z','z','z','z'},
//  {'z','z','z','z','z','z','z','z'},
//  {'z','z','z','z','z','z','z','z'},
//  {'G','w','r','y','i','p','*','H'},
//  {'1','3','5','7','9','+','E','F'}
//};
//byte rowPins[ROWS] = {4,5,6,7,8,9,10,11}; 
//byte colPins[COLS] = {19,18,17,16,15,14,13,12}; 

const byte ROWS = 6;
const byte COLS = 8; 
char keys[ROWS][COLS] = {
  {'2','4','6','8','0','-','A','B'}, // A and C seem shorted
  {'1','3','5','7','9','+','C','D'},
  {'q','e','t','u','o','@','E','F'},
  {'G','w','r','y','i','p','*','H'},
  {'I','s','f','h','k',':','=','J'},
  {'K','a','d','g','j','l',';','M'}//,
  //{'N','z','c','b','m','.','O','P'},
  //{'Q','R','x','v','n',',','/','S'}
};
byte rowPins[ROWS] = {4,11,5,10,6,9};//,7,8}; 
byte colPins[COLS] = {19,18,17,16,15,14,13,12}; 

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(115200);
  Serial.println("setup");
  
  
}
  
void loop(){
  char key = keypad.getKey();
  
  if (key){
    Serial.println(key);
    //if(key == 
  }
}
