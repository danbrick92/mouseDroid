// Header Files
#include <PCM.h>
#include "MouseDroidSounds.h"


// Globals
bool shouldPlaySound = false;
short curSound = 0;
const short maxSoundIndex = 5;
int incomingByte = 0; // for incoming serial data


// Functions
void playSound() {
  // This function plays the correct sound based on index chosen
  switch(curSound){
    case 0: 
      break;
    case 1: 
      startPlayback(chirp1, sizeof(chirp1));
      break;
    case 2:
      startPlayback(chirp2, sizeof(chirp2));
      break;
    case 3:
      startPlayback(shortSound1, sizeof(shortSound1));
      break;
    case 4:
      startPlayback(shortSound3, sizeof(shortSound3));
      break;
//    case 5: 
//      startPlayback(shortSound2, sizeof(shortSound2));
//      break; 
//    case 6:
//      startPlayback(scared, sizeof(scared));
//     break;
    default:
      startPlayback(chirp1, sizeof(chirp1));
  }
}

void checkSound(){
  // Wait to see if there is input for sound
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.parseInt();
    if (incomingByte > 0 && incomingByte < maxSoundIndex){
      curSound = incomingByte;
      shouldPlaySound = true;
    }
  }
}

void setup() {
  shouldPlaySound = true;
  Serial.begin(9600);
}

void loop() {
  // Check if should play sound
  checkSound();
  
  // Play sound
  if (shouldPlaySound){
    playSound();
    shouldPlaySound = false;
    Serial.println("Enter a sound # from 0-6: ");
  }
}
