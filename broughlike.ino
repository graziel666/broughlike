#include "general.h"

void setup() {
  arduboy.begin();  
  arduboy.setFrameRate(60);
  arduboy.clear();
  arduboy.display();
    

  hero.x = 10;
  hero.y = 10;
  
  enemy.x = 30;
  enemy.y = 30;
}

void loop() {
  arduboy.clear();

  arduboy.fillRect(hero.x, hero.y, hero.w, hero.h);

  arduboy.fillRect(enemy.x, enemy.y, enemy.w, enemy.h);

  arduboy.display();

}
