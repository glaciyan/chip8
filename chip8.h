//
// Created by kevin on 05.03.2025.
//

#ifndef CHIP8_H
#define CHIP8_H

#include <array>

namespace emulator
{
    class chip8
    {
    public:
        void init();
        void cycle();
        bool running{true};
    private:
        // memory
        // 0x000-0x1FF - Chip 8 interpreter (contains font set in emu)
        // 0x050-0x0A0 - Used for the built-in 4x5 pixel font set (0-F)
        // 0x200-0xFFF - Program ROM and work RAM
        std::array<int8_t, 4096> memory{};

        // registers
        std::array<int8_t, 16> V{};
        int16_t I{};
        int16_t pc{};

        // stack
        std::array<int16_t, 16> stack{};
        int16_t sp{};

        // timers
        int8_t delay_timer{};
        int8_t sound_timer{};

        // input
        std::array<int8_t, 16> keys{};

        // screen
        std::array<int8_t, 64*32> screen{};

        // op code
        int16_t opcode{};
    };
} // emulator

#endif //CHIP8_H
