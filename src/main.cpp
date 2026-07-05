#include <iostream>
#include <raylib.h>

int main()
{
    const int GAME_WIDTH = 800;
    const int GAME_HEIGHT = 600;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(GAME_WIDTH,GAME_HEIGHT,"Game Name");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Everything Is Working Fine", (GAME_WIDTH/2), (GAME_HEIGHT/2), 20, BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}