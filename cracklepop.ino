#include <LiquidCrystal.h> 


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  lcd.begin(16, 2);
  lcd.print("hello HackerSchool!");
  delay(300);
}


void loop() {
  for (int i = 0; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      lcd.print("CracklePop! ");
    } else if (i % 3 == 0) {
      lcd.print("Crackle ");
    } else  if (i % 5 == 0) {
      lcd.print("Pop ");
    } else {
      lcd.print(i);
      lcd.print(" ");
    }
    delay(300);
  }
}
