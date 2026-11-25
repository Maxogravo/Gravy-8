#include <iostream>
#include <cstdint>
#include "memory.h"
#include "graphics.h"

uint8_t fps;

int main() {
    std::cout << "Gravy 8 Emulator" << std::endl;
    std::cout << "Enter FPS: ";
    std::cin >> fps;
    init_graphics(fps);
    while (!WindowShouldClose()) {
        render();
    }
}