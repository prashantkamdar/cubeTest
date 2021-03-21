#include <Arduboy2.h>
Arduboy2 arduboy;
Sprites sprites;

const unsigned char PROGMEM SMALLBOX[] =
{
16, 16,
0xf8, 0x14, 0x94, 0x22, 0x22, 0x41, 0xc1, 0xc1, 0xe2, 0xe2, 0xf4, 0xf4, 0xf8, 0x00, 0x00, 0x00, 
0x07, 0x08, 0x0a, 0x10, 0x15, 0x20, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM SMALLBOXMASK[] =
{
16, 16,
0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0x00, 0x00, 0x00, 
0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x00, 0x00, 0x00, 
};

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(30);
  arduboy.clear();
}

void cube(){
  arduboy.print(F("PK"));
  sprites.drawExternalMask( 56, 24, SMALLBOX, SMALLBOXMASK, 0, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!(arduboy.nextFrame()))
    return;

    
    //arduboy.pollButtons();

      if(arduboy.pressed(A_BUTTON)) {
        cube();
  }
        if(arduboy.pressed(B_BUTTON)) {
        arduboy.clear();
  }

          if(arduboy.pressed(LEFT_BUTTON )) {
  }

          if(arduboy.pressed(RIGHT_BUTTON)) {
        arduboy.clear();
  }

          if(arduboy.pressed(UP_BUTTON)) {
        arduboy.clear();
  }

          if(arduboy.pressed(DOWN_BUTTON)) {
        arduboy.clear();
  }
    
    arduboy.display();
}