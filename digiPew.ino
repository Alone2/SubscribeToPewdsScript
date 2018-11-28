#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  //use edge
  startProgram("edge", 5000);
  //go to Pewds
  schreibStart();
  DigiKeyboard.println("youtube.com/pewdiepie");
  DigiKeyboard.delay(8000);
  //navigate to the subscribe button
  for (int i = 0; i < 11; i++) {
    DigiKeyboard.sendKeyStroke(KEY_TAB);
  }
  //click subscribe
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //close the browser after 10 secs
  DigiKeyboard.delay(10000);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
}


void loop() {
  //nothing
}

void startProgram(String Program, int programDelay) {
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(Program);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(programDelay);
}

void schreibStart() {
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
}
