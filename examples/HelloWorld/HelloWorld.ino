/********************
  Pin config:
  
  SCLK = pin 7
  RST  = pin 6
  DATA = pin 5
*********************/

#include <Samsung_16LF01_VFD.h>

Samsung_16LF01_VFD vfd(7, 5, 6);

void setup() {
  // Init the display, 16 digits and 5/31 of brightness
  vfd.begin(16, 14);
  vfd.clear();

} 

void loop() {
//  vfd.print(millis() / 1000);
 // vfd.println(" s");
 // delay(1000);

  vfd.print(" tigre");
  delay(3000);
  vfd.home();
  vfd.clear();
  delay(1000);
  vfd.print("5 bonos ");
  delay(2000);
  vfd.home();
  vfd.clear();
  vfd.print("ondacero");
  
  
}

