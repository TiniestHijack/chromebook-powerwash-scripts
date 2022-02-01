/**
 * Runs from start of setup after user presses
 * ctrl+alt+shift+r and computer reboots.
 * Just plug and play   
 * 
 * Author: Ian Nostrant
 * Date: 1/28/2022
 */

#include <Keyboard.h>
#include "ChromeKeyComs.h"

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(10000); //allows for modification of script

  // begins setup and selects network
  networkSelect();

  // clicks through and accepts terms of service
  acceptTerms();

  //click on splash page if it appears, if not
  //machine will update, enroll, and stop at final page
  finishPowerwash();

  exit(0); //stop program after one run
}
