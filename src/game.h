#pragma once
#include <raylib.h>
#include <vector>

class Game
{
public:
    Game();
    ~Game();
    void Draw();
    void Update();

private:
    void Reset();
    void Input();
};