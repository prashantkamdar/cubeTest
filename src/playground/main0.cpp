#include <Arduboy2.h>

Arduboy2 arduboy;

int horizSpin = 64;
int vertSpin1 = 88;
int vertSpin2 = 40;
int SpinRad = 38;

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(30);
}

void loop() {

  if (!(arduboy.nextFrame()))
    return;

  if (arduboy.pressed(RIGHT_BUTTON)) {
    
  }
  
  arduboy.clear();

  for (int i = 60; i > 0; i--) {

    arduboy.fillRect(0, 0, 128, 64, BLACK);
    arduboy.fillCircle(horizSpin, vertSpin1, (SpinRad / 2) - 1 , BLACK);

    float SpinAng = i * 6;
    SpinAng = SpinAng / 57.296;
    float SpinAng2 = SpinAng + 90 / 57.296;

    int a = (horizSpin + (sin(SpinAng) * (SpinRad / 2)));
    int b = (vertSpin1 - (cos(SpinAng) * (SpinRad / 2))) / 2;
    int c = (horizSpin - (sin(SpinAng) * (SpinRad / 2)));
    int d = (vertSpin1 + (cos(SpinAng) * (SpinRad / 2))) / 2;
    int a1 = (horizSpin + (sin(SpinAng2) * (SpinRad / 2)));
    int b1 = (vertSpin1 - (cos(SpinAng2) * (SpinRad / 2))) / 2;
    int c1 = (horizSpin - (sin(SpinAng2) * (SpinRad / 2)));
    int d1 = (vertSpin1 + (cos(SpinAng2) * (SpinRad / 2))) / 2;
    int e = (horizSpin + (sin(SpinAng) * (SpinRad / 2)));
    int f = (vertSpin2 - (cos(SpinAng) * (SpinRad / 2))) / 2;
    int g = (horizSpin - (sin(SpinAng) * (SpinRad / 2)));
    int h = (vertSpin2 + (cos(SpinAng) * (SpinRad / 2))) / 2;
    int e1 = (horizSpin + (sin(SpinAng2) * (SpinRad / 2)));
    int f1 = (vertSpin2 - (cos(SpinAng2) * (SpinRad / 2))) / 2;
    int g1 = (horizSpin - (sin(SpinAng2) * (SpinRad / 2)));
    int h1 = (vertSpin2 + (cos(SpinAng2) * (SpinRad / 2))) / 2;

    arduboy.drawLine(a, b, a1, b1, WHITE);
    arduboy.drawLine(a1, b1, c, d, WHITE);
    arduboy.drawLine(c, d, c1, d1, WHITE);
    arduboy.drawLine(c1, d1, a, b, WHITE);
    arduboy.drawLine(e, f, e1, f1, WHITE);
    arduboy.drawLine(e1, f1, g, h, WHITE);
    arduboy.drawLine(g, h, g1, h1, WHITE);
    arduboy.drawLine(g1, h1, e, f, WHITE);
    arduboy.drawLine(a, b, e, f, WHITE);
    arduboy.drawLine(g, h, c, d, WHITE);
    arduboy.drawLine(a1, b1, e1, f1, WHITE);
    arduboy.drawLine(g1, h1, c1, d1, WHITE);

    arduboy.display();
  }
}