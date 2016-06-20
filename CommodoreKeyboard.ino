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

const byte ROWS = 2;
const byte COLS = 6; 
char keys[ROWS][COLS] = {
  {'2','4','6','8','0','-'},
  {'1','3','5','7','9','+'}
};
byte rowPins[ROWS] = {4,11}; 
byte colPins[COLS] = {19,18,17,16,15,14}; 

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
