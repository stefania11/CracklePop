#include <LiquidCrystal.h> 


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  lcd.begin(16, 2);
  lcd.print("hello HackerSchool!");
}


void loop() {
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      lcd.println("CracklePop");
      delay(100);
    } else if (i % 3 == 0) {
      lcd.println("Crackle");
    } else  if (i % 5 == 0) {
      lcd.println("Pop");
    } else {
      lcd.println(i);
      delay(200);
    }
  }
}
