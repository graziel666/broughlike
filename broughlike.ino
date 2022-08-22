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

  //arduboy.fillRect(hero.x, hero.y, hero.w, hero.h);
  sprites.drawOverwrite(hero.x, hero.y, player, 2);

  arduboy.fillRect(enemy.x, enemy.y, enemy.w, enemy.h);

  arduboy.pollButtons();
  actionsInput();

  arduboy.print("Distance:");
  arduboy.println(distance);


  

  arduboy.display();

}
