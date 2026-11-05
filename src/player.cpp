#include "dino.hpp"
#include "raylib.h"

PLAYER::PLAYER(){
  gravity =900.0;
  width=60;
  height=60;
  x=50;
  y=Screenheight - width;
  JumpForce=300;
  VY =0;
  IsAlive=true;
  IsJump=false;
  int ground=y;
  }

  void PLAYER::Jump(){
    if(IsKeyPressed(KEY_SPACE) && !IsJump){
      y += -JumpForce;
      VY = -JumpForce;
      IsJump = true;
    }else{
      IsJump = false;
    }
    VY += gravity * dt;
    y += VY;
    if(y>=ground){
      VY=0;
      IsJump=false;
    }
  }
  void PLAYER::Draw(){
      DrawRectangle(
          x,
          y,
          width,
          height,
          RED
      );
  }
  


