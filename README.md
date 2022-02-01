# chromebook-powerwash-scripts
Some short scripts to use with Arduino boards that mimic keystrokes to reset chromebooks


# Basic Instructions
1. Download as zip or clone the repository
2. Open the .ino of your choosing (either powerwash or powerwash_after_restart) with Arduino IDE
3. Plug in your board (I used a pro micro) and upload the code. Make sure you pick the right COM port!
4. For the powerwash script, turn on the chromebook and click nothing then plug it in and let it run. For the powerwash_after_restart script, press ctrl+shift+alt+r on your chromebook and follow the prompts to restart your computer. Once the computer restarts, press nothing and plug in the Arduino to let it run.

# Code Context
You will likely have to make changes to some of the delays and commands depending on what machine you're using and how your internet is setup.

For example, my administration uses a guest network with a splash page to initially enroll the chromebook. This network usually appears at the top of the list when setting up so I use that to my advantage. The splash page also appears after agreeing to terms and conditions, if it appears at all, so I added functionality to my code to account for that.

# Troubleshooting
The code should be easily understood, most of the key combinations are in the header file ChromeKeyComs.h, included with each script. If you need a reference for key commands then check out the Arduino Keyboard and Mouse libraries. 

Some basic key commands can be found here: https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/

**Terms and Conditions**: At my workplace we have Lenovo 100e chromebooks and Dell 3100 chromebooks. They can have minute differences in the way the setups are structured. For the lenovo models, the terms have one less button to tab through so in this case you could need to edit the tabMultiplier argument in the acceptTerms function from 98 to 97.
