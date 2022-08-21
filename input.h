#include "Arduboy2Core.h"
#pragma once
#import "general.h"

void enemyMove();

void heroMove(){
  if (arduboy.justReleased(RIGHT_BUTTON)&& hero.x < (arduboy.width() - hero.w)){
    hero.x += 8;
    enemyMove();
  }
  if (arduboy.justReleased(LEFT_BUTTON) && hero.x > 0){
    hero.x -= 8;
    enemyMove();
  }
  if (arduboy.justReleased(DOWN_BUTTON) && hero.y < (arduboy.height() - hero.h)){
    hero.y += 8;
    enemyMove();
  }
  if (arduboy.justReleased(UP_BUTTON)&& hero.y > 0){
    hero.y -= 8;
    enemyMove();
  }
}


void enemyMove(){
  if (enemy.x > hero.x && (enemy.x - hero.x > 8)){
    enemy.x -= 8;
  }
  if (enemy.x < hero.x && (enemy.x + hero.x > 8)){
    enemy.x += 8;
  }
  
  if (enemy.y < hero.y && (enemy.y + hero.y > 0)){
    enemy.y+=8;
  }
  if (enemy.y > hero.y && (enemy.y - hero.y > 0)){
    enemy.y-=8;
  }
}
