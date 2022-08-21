#pragma once

struct Characters:Rect {
  uint8_t h = 8;
  uint8_t w = 8;
  int16_t x = 0;
  int16_t y = 0;
};

Characters hero;
Characters enemy;