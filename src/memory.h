#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>

uint8_t RAM[65536]; // 64KB of RAM
uint8_t ROM[65536]; // 64KB of ROM

bool loadrom(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        return false;
    }

    size_t address = 0;
    std::string line;
    while (std::getline(file, line) && address < 65536) {
        for (char c : line) {
            if (address >= 65536) break;
            ROM[address++] = static_cast<uint8_t>(c);
        }
        if (address < 65536) {
            ROM[address++] = '\n';
        }
    }

    file.close();
    return true;
}