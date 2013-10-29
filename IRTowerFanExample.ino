
// simple test for "Seville Classics" tower fan control
// scruss - 2013/10/28
// Licence: WTFPL

#include "IRTowerFan.h"

// uses Ken Shirriff's Arduino-IRremote library
// get it from https://github.com/shirriff/Arduino-IRremote
#include <IRremote.h>
IRsend irsend;

// run through test once
// hit reset to run again
void setup () {
  delay(1000);                        // pause before first command
  irsend.sendNEC(FAN_POWER_ON,   32); // turn fan on
  delay(10000);                       // wait 10 s
  irsend.sendNEC(FAN_SPEED_MED,  32); // set speed to medium
  delay(10000);                       // wait 10 s
  irsend.sendNEC(FAN_OSC_ON_MED, 32); // turn oscillation on
  delay(10000);                       // wait 10 s
  irsend.sendNEC(FAN_POWER_OFF,  32); // turn fan off again
}

void loop() {
  // nothing
}
