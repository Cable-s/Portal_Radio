    

    #include "pitches.h"
    #define REST 0


    uint16_t song[] = {
    // First line


  REST,233, NOTE_D2,67, NOTE_FS2,200, REST,133, NOTE_FS2,100, NOTE_G2,200, REST,133, NOTE_B3,67, REST,200, NOTE_B3,100, NOTE_A3,67, REST,200, NOTE_FS2,267, REST,133, NOTE_FS2,133, NOTE_G2,267, REST,133, NOTE_G2,100, NOTE_A3,267, REST,133, NOTE_B3,67, REST,133, NOTE_B3,133, NOTE_A3,67, REST,67,
// 3,465 REST /
    NOTE_G5,133, NOTE_FS5,67, REST,133, REST,67, NOTE_E5,400, NOTE_FS5,133, REST,67,
//933 NOTE /
  NOTE_C3,133, NOTE_FS2,133, NOTE_G2,200, REST,67, NOTE_G2,67, NOTE_B3,67, REST,167, NOTE_B2,133, NOTE_A2,67, REST,200, NOTE_D2,267, NOTE_D3,133, NOTE_D2,133, NOTE_FS2,267, NOTE_C3,100, REST,67,
//2,132 REST /
    NOTE_G5,133, NOTE_FS5,133, NOTE_E5,67, REST,67, NOTE_E5,400, NOTE_FS5,67, REST,133, NOTE_D5,67, REST,267, NOTE_E5,133, NOTE_A4,67, REST,67,
//1,534 NOTE /
  NOTE_G2,267, NOTE_E2,133, NOTE_G2,133, NOTE_A3,200, REST,67, NOTE_A3,133, NOTE_B3,67, REST,200, NOTE_B3,133, NOTE_A3,67, REST,67,
//1,334 REST /
    NOTE_FS5,133, NOTE_G5,67, REST,133, NOTE_E5,400,NOTE_CS5,67, REST,200, NOTE_D5,133, NOTE_E5,67, REST,200, NOTE_A4,67,REST,67, REST,133, REST,133, NOTE_A4,200, REST,33,
//2,000
  REST,133, NOTE_D2,267, NOTE_D3,133, NOTE_D2,133, NOTE_FS2,267, NOTE_C3,133, NOTE_FS2,133, REST,67,
//1,199 REST /
    NOTE_G5,200, NOTE_FS5,67, REST,67,  REST,67,  NOTE_E5,400,  NOTE_FS5,67,REST,67,
//868 NOTE /
  NOTE_D2,267, NOTE_D3,133, NOTE_D2,133, NOTE_FS2,267, NOTE_C3,133, NOTE_FS2,133, NOTE_G2,33, REST,67,
//1,199 REST /
    NOTE_G5,200, NOTE_FS5,133, NOTE_E5,67, REST,67, NOTE_E5,400, NOTE_FS5,67, REST,200, NOTE_D5,67, REST,200, NOTE_E5,133, NOTE_A4,133, REST,67,
//1,667 NOTE /
  NOTE_G2,200,NOTE_E2,133, NOTE_G2,133, NOTE_A3,200, REST,67, NOTE_A3,133, NOTE_B3,67, REST,66,
//1,066 REST /
    NOTE_E5,67, REST,200,NOTE_FS5,133, NOTE_G5,67, REST,133, NOTE_E5,400, NOTE_CS5,67, REST,133, REST,67, NOTE_D5,133, NOTE_E5,67, REST,200, NOTE_A4,67, REST,133, REST,133, NOTE_AS5,67, REST,33,
//2,067 NOTE
    REST,200, REST,133, NOTE_D5,67, REST,267, NOTE_F5,533, NOTE_A6,133, NOTE_AS6,133,NOTE_A6,133, NOTE_F5,133,NOTE_D5,67, REST,200, NOTE_A4,67, REST,33,
//2,066 NOTE
    REST,200, REST,133, NOTE_CS5,67, REST,267, NOTE_E5,533, NOTE_G5,133, NOTE_A6,133, NOTE_G5,133, NOTE_E5,133, NOTE_CS5,67, REST,200, NOTE_D2,300,
//1,999 NOTE
    // End of song
    0.0, 0.0
    };




    void setup() {
    pinMode(9, OUTPUT); 
    pinMode(2, OUTPUT); 
    pinMode(3, OUTPUT); 
    pinMode(4, OUTPUT); 
    pinMode(5, OUTPUT); 
    pinMode(7, OUTPUT); 


    digitalWrite(2, HIGH);   
    digitalWrite(3, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    digitalWrite(7, HIGH);   

    unsigned int note;
    unsigned int duration;

    for (int i = 0; duration > -1.0; i += 2)
    {

      note = song[i];
      duration = song[i+1];


     tone(8, note, duration);

    // tone2.begin(7);
    // tone2.play(note2, duration2);
    int pauseBetweenNotes = duration * 1.15;

    delay(pauseBetweenNotes);
    noTone(8);
    noTone(6);

    // tone2.stop();

    if (duration == 0.0) {
      i = 0;
    }

     }
    }

    void loop() 
    {

    }