#include <raylib.h>
#include "dino.hpp"
int main(){
  int Screenheight = 800;
  int Screenwidth = 1000;
  InitWindow(Screenwidth,Screenheight,"--DINO--");
  SetTargetFPS(120);
  PLAYER player;
  while(!WindowShouldClose()){
    float dt=GetFrameTime();
    BeginDrawing();
    ClearBackground(RAYWHITE);
    //main content
    player.Jump();
    player.Draw();
    //end here
    EndDrawing();
  }CloseWindow();
}
