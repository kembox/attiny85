//This DigiSpark scripts downloads and executes a powershell script in hidden mode.
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("msedge");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("https://hackertyper.com/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  for(int i =0; i < 1000; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_ENTER);
    }
  for (;;) {
    /*empty*/
  }

}
