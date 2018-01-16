#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f,20,4);


void setup()
{
  lcd.init();
  lcd.backlight();  
}


void loop()
{
  lcd.setCursor(2,0);
  lcd.print("Firoz Noori");
  
  lcd.setCursor(2,1);
  lcd.print("Firoz Noori"); 

  delay(1500);
}
