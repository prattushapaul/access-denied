#include <Wire.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {

  lcd.init();
  lcd.backlight();
lcd.setCursor(0, 0);  
  lcd.print(" ACCESS  DENIED ");
  
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  
}

void loop() {
int A=digitalRead(3);
int B=digitalRead(4);
int C=digitalRead(5);
int D=digitalRead(6);

if(A==1 &&B==0 && C==0 && D==0)
{
    lcd.setCursor(0, 1);
   lcd.print(" HELLO ");
delay (3000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
else if(A==0 &&B==1 && C==0 && D==0)
{
    lcd.setCursor(0, 1);
  lcd.print("I AM HUNGRY");
delay (3000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
if(A==0 &&B==0 && C==1 && D==0)
{
    lcd.setCursor(0, 1);
  lcd.print("I WANT TO BATH");
delay (3000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
if(A==0 &&B==0 && C==0 && D==1)
{
    lcd.setCursor(0, 1);
  lcd.print("I AM THIRSTY");
delay (3000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}  
if(A==1 &&B==1 && C==1 && D==1)
{
 
    lcd.setCursor(0, 1);
  lcd.print("I NEED HELP");
   digitalWrite(13,1);
delay(5000);
digitalWrite(13,0);
delay(2000);

    lcd.setCursor(0, 1);
lcd.print("                ");

}
if(A==1 &&B==1 && C==0 && D==0)
{
    lcd.setCursor(0, 1);
  lcd.print("WASHROOM");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}  
if(A==0 &&B==1 && C==1 && D==0)
{
    lcd.setCursor(0, 1);
  lcd.print("TAKE ME OUTSIDE");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}  
if(A==0 &&B==0 && C==1 && D==1)
{
    lcd.setCursor(0, 1);
  lcd.print("SILENCE PLEASE");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
  
if(A==1 &&B==0 && C==1 && D==0)
{
    lcd.setCursor(0, 1);
  lcd.print("I AM BORED");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
if(A==1 &&B==0 && C==1 && D==1)
{
    lcd.setCursor(0, 1);
  lcd.print("I AM SPARSH");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
if(A==0 &&B==1 && C==0 && D==1)
{
    lcd.setCursor(0, 1);
  lcd.print("I NEED MY MEDS");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
if(A==1 &&B==0 && C==0 && D==1)
{
    lcd.setCursor(0, 1);
  lcd.print("I NEED JUICE");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
if(A==1 &&B==1 && C==1&& D==0)
{
    lcd.setCursor(0, 1);
  lcd.print("I AM IN PAIN");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
if(A==1 &&B==1 && C==0&& D==1)
{
    lcd.setCursor(0, 1);
  lcd.print("I AM DIZZY");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
if(A==0 &&B==1 && C==1&& D==1)
{
    lcd.setCursor(0, 1);
  lcd.print("HOW ARE YOU");
delay (2000);
    lcd.setCursor(0, 1);
lcd.print("                ");
}
}
