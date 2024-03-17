#include "raylib.h"

int main()
{
    // Get the monitor width and height
    int screenWidth = 640;
    int screenHeight = 480;

    // Initialize Raylib
    InitWindow(screenWidth, screenHeight, "RAY LIB SETUP");

    // Screen logoScreen;
    // Main game loop
    while (!WindowShouldClose())
    {

        // Draw
        BeginDrawing();
        // Screen.draw();
        EndDrawing();
    }

    // Cleanup
    CloseWindow();

    return 0;
}
