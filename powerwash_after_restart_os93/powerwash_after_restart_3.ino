/**
 * Runs from start of setup after user presses
 * ctrl+alt+shift+r and computer reboots.
* Just plug and play.  
 * 
 * Has one less tab on terms and conditions page
 * specific to lenovo model chromebooks
 * 
 * Author: Ian Nostrant
 * Date: 2/1/2022
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
  acceptTerms(97);

  //click on splash page if it appears, if not
  //machine will update, enroll, and stop at final page
  finishPowerwash();

  exit(0); //stop program after one run
}
