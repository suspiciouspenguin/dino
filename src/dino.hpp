#ifndef dino_hpp
#define dino_hpp
extern int Screenheight;
extern int Screenwidth;
extern float dt;
class PLAYER{
  public:
    float gravity;
    float width;
    float height;
    float x;
    float y;
    float JumpForce;
    float VY;
    float IsAlive;
    float IsJump;
    int ground;
    PLAYER();
    void Jump();
    void Draw();
};




#endif
