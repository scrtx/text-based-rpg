#pragma once

namespace rpg 
{
  struct Stat 
  {
    int HIT_POINT_MAXIMUM;
    int POWER;
    int SPEED;
    int MAGIC;

    Stat(int hp_val, int power_val, int speed_val, int magic_val)
    : HIT_POINT_MAXIMUM(hp_val),
      POWER(power_val),
      SPEED(speed_val),
      MAGIC(magic_val) {}
  };
}
