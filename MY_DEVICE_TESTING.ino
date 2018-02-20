#include <LiquidCrystal.h>
/*  LCD PINS 1 */
LiquidCrystal lcd(7,6,5,4,3,2); 
/*  SENSOR INPUT/OUTPUT LINE 2  */
#define sensor_
#define sensor_1    A0
#define sensor_2    A1
#define sensor_3    A2
#define sensor_4     A3
#define sensor_5  A4
#define sensor_6 A5
#define sensor_7  A8
#define sensor_8  A9
#define sensor_9 A10
#define sensor_10 A11
#define sensor_11 A12
#define sensor_12  A13
/*KEYPAD LINE  3    */ 
void setup() 
{
lcd.begin(16,4);
Serial.begin(9600);
Serial.println("YOUR SYSTEM US STARTED !");
for(int a=1;a<=12;a++)
{
  pinMode(sensor_+a,INPUT);
}
}
void loop() 
{
  Serial.println();
  lcd.clear()
 lcd.setCursor(0,1);
 lcd.print("LCD IS STARTED !"); 
 delay(200);
  Serial.print(":");
  Serial.print(digitalRead(sensor_1));
  Serial.print(":");
  Serial.print(digitalRead(sensor_2));
   Serial.print(":");
  Serial.print(digitalRead(sensor_3));
  Serial.print(":");
  Serial.print(digitalRead(sensor_4));
   Serial.print(":");
  Serial.print(digitalRead(sensor_5));
   Serial.print(":");
  Serial.print(digitalRead(sensor_6));
   Serial.print(":");
  Serial.print(digitalRead(sensor_7));
   Serial.print(":");
  Serial.print(digitalRead(sensor_8));
   Serial.print(":");
  Serial.print(digitalRead(sensor_9));
   Serial.print(":");
  Serial.print(digitalRead(sensor_10));
   Serial.print(":");
  Serial.print(digitalRead(sensor_11));
  Serial.print(":");
  Serial.print(digitalRead(sensor_12));
 
}
