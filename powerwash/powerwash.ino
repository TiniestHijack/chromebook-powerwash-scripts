/**
 * Powerwashes the system directly after turning it on if
 * there was a previous user signed in.
 * 
 * Instructions:
 * start up the laptop and press nothing, then plug in the 
 * arduino from the login screen
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
  delay(10000); //gives time to erase the script when testing

  // begins powerwash from login screen
  powerwash();
  powerwashConfOld();

  //blink LED's while waiting for chromebook to reboot
  blink(20);

  // begins setup and selects network
  networkSelect();

  // clicks through and accepts terms of service
  acceptTerms();

  //click on splash page if it appears, if not
  //machine will update, enroll, and stop at final page
  finishPowerwash();

  exit(0); // ends loop (runs once)
}
