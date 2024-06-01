#include "pitches.h"
#define NPS_1 333
//238
#define NPS_2 346
//102
#define ROW1 9
#define ROW2 8
#define ROW3 4
#define ROW4 A2
#define ROW5 3
#define ROW6 A0
#define ROW7 10
#define ROW8 6

#define COL1 A1
#define COL2 11
#define COL3 A3
#define COL4 12
#define COL5 5
#define COL6 A4
#define COL7 7
#define COL8 2

int music_1[] = {
  NOTE_A5,
  NOTE_G5,
  NOTE_A5,
  NOTE_C6,
  NOTE_A5,
  NOTE_G5,
  NOTE_A5,
  NOTE_C6,
  NOTE_A5,
  NOTE_G5,
  NOTE_A5,
  NOTE_C6,
  NOTE_A5,
  NOTE_G5,
  NOTE_A5,
  NOTE_C6,
  NOTE_A5,
  NOTE_G5,
  NOTE_A5,
  NOTE_C6,
  NOTE_A5,
  NOTE_G5,
  NOTE_E5,
  NOTE_DS5,
  NOTE_D5,
  NOTE_C5,
  NOTE_A4,
  NOTE_G4,
  NOTE_E4,
  NOTE_DS4,
  NOTE_D4,
  NOTE_C4,
  NOTE_D4,
  NOTE_DS4,
  NOTE_E4,
  NOTE_G4,
  NOTE_A4,
  NOTE_G4,
  NOTE_A4,
  NOTE_C5,
  NOTE_D5,
  NOTE_DS5,
  NOTE_G5,
  NOTE_A5,
  NOTE_C6,
  NOTE_D6,
  NOTE_DS6,
  NOTE_DS6, NOTE_E5, NOTE_E6, NOTE_E5, NOTE_E6, NOTE_E5, NOTE_E6, NOTE_E5, NOTE_E6, NOTE_E5, NOTE_E6,0, NOTE_A6, NOTE_G6, NOTE_DS6, NOTE_D6, NOTE_C6,
  NOTE_DS6, NOTE_D6, NOTE_C6, NOTE_DS6, NOTE_D6, NOTE_C6, NOTE_DS6, NOTE_D6, NOTE_C6, NOTE_DS6, NOTE_D6, NOTE_C6, NOTE_A5, NOTE_GS5, NOTE_A5,
  NOTE_DS5, NOTE_D5, NOTE_C5,
  NOTE_D5, NOTE_E5, 
  NOTE_C5, NOTE_A4, NOTE_GS4, 
  NOTE_GS4, NOTE_A4, 
  NOTE_DS4, NOTE_D4, NOTE_C4, 
  NOTE_D4, NOTE_C4, NOTE_A3,NOTE_GS3, NOTE_A3, NOTE_A4, NOTE_G3, NOTE_G4, NOTE_C4, NOTE_C5, NOTE_G3, NOTE_G4, NOTE_A3, NOTE_A4, NOTE_G3, NOTE_G4, NOTE_C4, NOTE_C5, NOTE_D4, NOTE_D5, NOTE_DS4, NOTE_DS5, NOTE_C4, NOTE_C5, NOTE_D4, NOTE_D5, NOTE_C4, NOTE_C5, NOTE_DS4, NOTE_DS5, NOTE_E4, NOTE_E5, NOTE_F4, NOTE_F5, NOTE_DS4,
  NOTE_D5, NOTE_E5, NOTE_A4, NOTE_E5, NOTE_A4, 
  NOTE_B4, NOTE_C5, NOTE_C5, NOTE_CS5, NOTE_D5, NOTE_DS5, NOTE_E5, 
  NOTE_A5, NOTE_D5, NOTE_C5, NOTE_A5, NOTE_D5, NOTE_C5, NOTE_A5, NOTE_D5, NOTE_C5, NOTE_A5, NOTE_D5, NOTE_C5, NOTE_A5, NOTE_C5, NOTE_A5, NOTE_B5, NOTE_C6, NOTE_GS5, NOTE_A5, NOTE_DS5, NOTE_C5,
  NOTE_GS4, NOTE_A5, NOTE_B5, NOTE_C5, NOTE_CS5, NOTE_D5, NOTE_DS5, NOTE_F5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_GS5, NOTE_A5, NOTE_B5, NOTE_C6, NOTE_DS6, NOTE_E6, NOTE_F6, NOTE_E6, NOTE_DS6, NOTE_E5, NOTE_B5, NOTE_GS5, NOTE_E5, NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_DS5,
  NOTE_E5, NOTE_A5, NOTE_C6, NOTE_B5, NOTE_GS5, NOTE_B5, NOTE_A5, NOTE_DS5, NOTE_D5, NOTE_C5, NOTE_D5, 0, NOTE_D5, NOTE_C5, NOTE_D5, 0, NOTE_D5, NOTE_C5, 
  NOTE_D5, NOTE_E5, NOTE_A4, NOTE_C5, 
  NOTE_DS5, 0, NOTE_F5, 0, NOTE_G5,0,NOTE_A5, 0, NOTE_B5, 0, NOTE_C6, 0, NOTE_D6, 0, NOTE_DS6, 0, NOTE_E6, 0, NOTE_E6, 0, NOTE_E6, 0, NOTE_E6, 0, 
  NOTE_E6
};
byte tempo_1[] = {
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  25,
  50,16,16, 16, 16, 16, 16, 16, 16, 16,100,50,25, 25, 25, 25, 25,25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
  16, 16, 16,
  25, 25, 
  16, 16, 16, 
  25, 25, 
  16, 16, 16, 
  25, 25, 25,25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
  25, 25, 25, 25, 25, 
  50, 50, 50, 50, 50, 50, 50, 
  25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
  25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
  25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 
  50, 50, 50, 50, 
  25, 25, 25, 25, 25,25,25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 
  200
};

int music_2[] = {
  NOTE_A4,
  NOTE_A5,
  0,
  NOTE_A5,
  0,
  NOTE_A5,
  0,
  NOTE_E5,
  NOTE_CS6,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_F5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_F5,
  NOTE_FS5,
  NOTE_G5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_AS5,
  NOTE_C6,
  NOTE_DS6,
  NOTE_CS6,
  NOTE_CS6,
  NOTE_CS6,
  NOTE_CS6,
  NOTE_CS6,
  NOTE_CS6,
  NOTE_CS6,
  NOTE_CS6,
  NOTE_DS6,
  NOTE_F5,
  NOTE_FS6,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_F5,
  NOTE_F5,
  NOTE_F5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_F5,
  NOTE_DS5,
  NOTE_F5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_F5,
  NOTE_DS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_F5,
  NOTE_DS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_F5,
  NOTE_F5,
  NOTE_F5,
  NOTE_F5,
  NOTE_DS5,
  NOTE_DS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_F5,
  NOTE_CS5,
  0,
};

byte tempo_2[] = {
  100, 50, 50, 50, 50, 50, 50, 100, 50, 25, 25, 50, 25, 25, 50, 25, 25, 50, 25,
  50, 25, 25, 50, 25, 25, 50, 25, 25, 50, 25,
  50, 25, 25, 50, 25, 25, 50, 25, 25, 50, 25,
  50, 25, 25, 50, 25, 25, 50, 25, 25, 50, 25,
  25, 25, 25, 25, 50, 25, 25, 25, 25, 25, 25, 50, 50,
  25, 25, 25, 25, 50, 50, 25, 25, 25, 25, 50, 50,
  25, 25, 25, 25, 50, 25, 25, 25, 25, 25, 25, 50, 50,
  25, 25, 25, 25, 25, 25, 25, 25, 50, 50, 50, 50
};

const int row[] = { ROW1, ROW2, ROW3, ROW4, ROW5, ROW6, ROW7, ROW8 };
const int col[] = { COL1, COL2, COL3, COL4, COL5, COL6, COL7, COL8 };

int circle[8][8] = { { 1, 1, 0, 0, 0, 0, 1, 1 },
                     { 1, 0, 1, 1, 1, 1, 0, 1 },
                     { 0, 1, 1, 1, 1, 1, 1, 0 },
                     { 0, 1, 1, 1, 1, 1, 1, 0 },
                     { 0, 1, 1, 1, 1, 1, 1, 0 },
                     { 0, 1, 1, 1, 1, 1, 1, 0 },
                     { 1, 0, 1, 1, 1, 1, 0, 1 },
                     { 1, 1, 0, 0, 0, 0, 1, 1 } };
int s[8][8] = { { 1, 0, 0, 0, 0, 0, 0, 1 },
                { 0, 0, 0, 1, 1, 0, 0, 0 },
                { 0, 0, 0, 1, 1, 0, 0, 0 },
                { 0, 0, 0, 1, 1, 0, 0, 0 },
                { 0, 0, 0, 1, 1, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 1, 1, 0, 0, 0 },
                { 1, 0, 0, 0, 0, 0, 0, 1 } };


int thisNote = -1, noteDuration = 0;
long previousTime = 0,
     presentTime = 0,
     pauseBetweenNotes = 0;

int dura(byte eva, int NPS) {
  int rev = ((float(eva)/100) * NPS);
  return (rev);
}

void CheckToPlay() {
  presentTime = millis();
  if (presentTime - previousTime >= pauseBetweenNotes) {
    thisNote += 1;
    noTone(A5);
    if (thisNote >= 102 ) {
      thisNote = -1;
      pauseBetweenNotes = 100;
      previousTime = millis();
    } else {
      tone(A5, music_2[thisNote], int(dura(tempo_2[thisNote], NPS_2)));
      pauseBetweenNotes = dura(tempo_2[thisNote] * 1.1, NPS_2);
      previousTime = millis();
    }
  }
}


void lightup(int matrix[8][8]) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(col[i], HIGH);
    for (int j = 0; j < 8; j++) {
      digitalWrite(row[j], matrix[j][i]);
    }
    for (int j = 0; j < 8; j++) {
      digitalWrite(row[j], HIGH);
    }
    digitalWrite(col[i], LOW);
  }
}

void setup() {
  Serial.begin(9600);
  for (int i = 2; i <= 12; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

  pinMode(A0, OUTPUT);
  digitalWrite(A0, LOW);
  pinMode(A1, OUTPUT);
  digitalWrite(A1, LOW);
  pinMode(A2, OUTPUT);
  digitalWrite(A2, LOW);
  pinMode(A3, OUTPUT);
  digitalWrite(A3, LOW);
  pinMode(A4, OUTPUT);
  digitalWrite(A4, LOW);
  pinMode(13, INPUT_PULLUP);
}

int mode = 1;

bool pressing = 0;

void loop() {
  if (digitalRead(13) == LOW && !pressing) {
    pressing = true;
    mode += 1;
    if (mode > 1) {
      mode = 0;
    }
  } else if (digitalRead(13) == HIGH && pressing) {
    pressing = false;
    Serial.print(1);
  }
  if (mode == 0) {
    lightup(circle);
  }
  if (mode == 1) {
    lightup(s);
  }
  CheckToPlay();
  delay(1);
}
