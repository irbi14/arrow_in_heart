//it draws a big heart with breaking with arrow

#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
byte h1[8] = {
  B00000,
  B00000,
  B00010,
  B00111,
  B01111,
  B01111,
  B01111,
  B01111
};
byte h2[8] = {
  B00000,
  B00000,
  B01000,
  B11100,
  B11110,
  B11110,
  B11110,
  B11110
};
byte h3[8] = {
  B01111,
  B01111,
  B00111,
  B00111,
  B00011,
  B00011,
  B00001,
  B00000
};
byte h4[8] = {
  B11110,
  B11110,
  B11100,
  B11100,
  B11000,
  B11000,
  B10000,
  B00000
};
byte h5[8] = {
   B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111
};
byte h6[8] = {
   B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte h7[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B01000,
  B00100,
  B00010,
  B11111
};
byte h8[8] = {
   B11111,
  B00010,
  B00100,
  B01000,
  B00000,
  B00000,
  B00000,
  B00000
};
void setup()
{
  lcd.begin(16, 2);
}
void loop()
{
  
  lcd.createChar(0, h1);
  lcd.createChar(1, h2);
  lcd.createChar(2, h3);
  lcd.createChar(3, h4);
  lcd.createChar(4, h5);
  lcd.createChar(5, h6);
  lcd.createChar(6, h7);
  lcd.createChar(7, h8);

  lcd.setCursor(14, 0);
  lcd.write(byte(0));


  lcd.setCursor(15, 0);
  lcd.write((byte(1)));

  lcd.setCursor(14, 1);
  lcd.write(2);


  lcd.setCursor(15, 1);
  lcd.write(3);

for(int i=0;i<15;i++)
{
  lcd.setCursor(i, 0);
  lcd.write(4);
  lcd.setCursor(i, 1);
  lcd.write(5);

  lcd.setCursor(i+1, 0);
  lcd.write(6);
  lcd.setCursor(i+1, 1);
  lcd.write(7);
  delay(200);
}
  lcd.clear();

}
