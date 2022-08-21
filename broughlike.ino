#include "general.h"

void setup() {
  arduboy.begin();  
  arduboy.setFrameRate(60);
  arduboy.clear();
  arduboy.display();
    

  hero.x = 8;
  hero.y = 8;
  
  enemy.x = 80;
  enemy.y = 40;
}

void loop() {
  arduboy.clear();

  arduboy.fillRect(hero.x, hero.y, hero.w, hero.h);

  arduboy.fillRect(enemy.x, enemy.y, enemy.w, enemy.h);

  arduboy.pollButtons();
  heroMove();


  

  arduboy.display();

}
