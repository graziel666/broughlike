#pragma once
#include "general.h"

void enemyMove();

void actionsInput(){
  uint8_t step = 16;
  if (arduboy.justPressed(RIGHT_BUTTON)&& hero.x < (arduboy.width() - hero.w)){
    hero.x += step;
    //enemyMove();
  }
  if (arduboy.justPressed(LEFT_BUTTON) && hero.x > 0){
    hero.x -= step;
    //enemyMove();
  }
  if (arduboy.justPressed(DOWN_BUTTON) && hero.y < (arduboy.height() - hero.h)){
    hero.y += step;
    //enemyMove();
  }
  if (arduboy.justPressed(UP_BUTTON)&& hero.y > 0){
    hero.y -= step;
    //enemyMove();
  }

  if (arduboy.justReleased(RIGHT_BUTTON) || arduboy.justReleased(LEFT_BUTTON) || arduboy.justReleased(DOWN_BUTTON) || arduboy.justReleased(UP_BUTTON)){
    enemyMove();
  }
}


void enemyMove(){

  uint8_t xd = enemy.x - hero.x;
  uint8_t yd = enemy.y - hero.y;
  distance = sqrt(pow (hero.x-enemy.x, 2) + pow (hero.y-enemy.y, 2));


  if (distance > 16 && distance < 48){
    if (enemy.x > hero.x){
      enemy.x -= 8;
    }
    if (enemy.x < hero.x){
      enemy.x += 8;
    }
    
    if (enemy.y < hero.y){
      enemy.y+=8;
    }
    if (enemy.y > hero.y){
      enemy.y-=8;
    }
  }
}
