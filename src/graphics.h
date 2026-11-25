#include "raylib.h"
#include "memory.h"

Color colors[22] = {
        BLACK, WHITE, ORANGE, DARKGRAY, DARKGREEN, DARKBLUE, DARKPURPLE, DARKBROWN,
        GRAY, RED, GOLD, LIME, BLUE, VIOLET, BROWN, LIGHTGRAY, PINK, YELLOW,
        GREEN, SKYBLUE, PURPLE, BEIGE };

void init_graphics(int framerate) {
    InitWindow(640, 640, "Gravy 8");
    SetTargetFPS(framerate);
}

void render() {
    int pixel_address = 0x0000;
    BeginDrawing();
    ClearBackground(BLACK);
    for (int y = 0; y < 64; y++) {
        for (int x = 0; x < 64; x++) {
            DrawRectangle(x*10, y*10, 10,10, colors[RAM[pixel_address] % 22]);
            pixel_address++;
        }
    }
}