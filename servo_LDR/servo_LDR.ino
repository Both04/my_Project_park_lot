#include <Servo.h>
#include <Wire.h>
#include <LCD.h> 
#include <LiquidCrystal_I2C.h>
Servo myservo;
int y=0; 
#define I2C_ADDR 0x27
#define light_PIN 3

LiquidCrystal_I2C lcd(I2C_ADDR,2,1,0,4,5,6,7);

byte val[8];
const int LDRplace[]={PIN_PB0,PIN_PB1};
const int LDRout = PIN_PB2;
const int LDRin = PIN_PB3;
int count=0;
int valin=0;
int valout=0;
int pos = 0; 
void setup() {
  lcd.setBacklightPin(light_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.begin(16, 2);  
  for(int i=0;i<2;i++){
    pinMode(LDRplace[i], INPUT);
  }
  pinMode(LDRin, INPUT);
  pinMode(LDRout, INPUT);
  myservo.attach(PIN_PD0); 
  myservo.write(pos);
  
  for (pos = 0; pos <= 90; pos += 1) { 
    myservo.write(pos);              
    delay(30);                       
  }
  delay(1000);
  for (pos = 90; pos >= 0; pos -= 1) { 
    myservo.write(pos);             
    delay(30);                       
  }
  lcd.clear();
  lcd.setCursor(0, 0);
  count=0;
}

void loop() {
 //******************************************************* 
  lcd.setCursor(0, 0);
  lcd.print("P-L:");
  lcd.setCursor(0, 1);
  for( y=0;y<2;y++)
     {      
      val[y]=digitalRead(LDRplace[y]);
      if(val[y]==1){
        lcd.print(y+1);
      }            
      }
       
      lcd.print("       ");        
  valin=digitalRead(LDRin);
  valout=digitalRead(LDRout);
 
  if(count>=2){
    count=2;
    myservo.write(pos);
    delay(500);
    myservo.detach();
    lcd.setCursor(5, 1);
    lcd.print("       full");}
  
 //******************************************************** 
  if(valout==LOW){
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo.write(pos);
      delay(30);
    }
      while(valout==LOW){
        valout=digitalRead(LDRout);
      }
        count++;
        if(count<3){ 
        }
    delay(1000);     
    for (pos = 90; pos >= 0; pos -= 1) { 
      myservo.write(pos);
      delay(30);
    }
       }
//********************************************************       
  if(valin ==LOW){
    myservo.attach(PIN_PD0);
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo.write(pos);
      delay(30);
    }
      while(valin ==LOW){
        valin=digitalRead(LDRin);
      }
        count--;
        if(count<=0){
          count=0;
        }
  delay(1000);      
  for (pos = 90; pos >= 0; pos -= 1){ 
    myservo.write(pos);delay(30);
  }        
  }
//********************************************************        
  lcd.setCursor(10, 1);
  lcd.print(" car:");
  lcd.print(count);  
  if(count>=2){
    lcd.setCursor(5, 1);
    lcd.print("       full   ");
  }

}
