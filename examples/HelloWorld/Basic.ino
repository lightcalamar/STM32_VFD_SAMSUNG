/********************
  Pin config:
  SCLK = pin PB9
  RST  = pin PB8
  DATA = pin PB7
*********************/

#include <Samsung_16LF01_VFD.h>
Samsung_16LF01_VFD vfd(PB9, PB7, PB8);   // Constructor



void setup() {
    vfd.begin(16, 31);  // Init the display, 16 digits and 5/31 of brightness
  vfd.clear();
  
  vfd.print(" STM32F103C8T6 ");
  delay(2000);
  vfd.print(" my name is tomas");
  delay(4000);
  pinMode(PB12, OUTPUT);
} 

void loop() {

  vfd.clear();
  vfd.home();

  vfd.print("VFD SAMSUNG 16X1");
  delay(3000);
  vfd.clear();
  vfd.home();
  vfd.print("HELLO stm32duino");
  delay(4000);
  digitalWrite(PB12, HIGH);
  delay(1000);
  digitalWrite(PB12, LOW);
  vfd.clear();
  vfd.print("  good morning");
  delay(2000);
  vfd.clear();
  vfd.print("all users forum");
  delay(2000);
 }
