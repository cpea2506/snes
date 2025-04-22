#include <cstdint>

#include "bus.h"

class Olc6502 {
  public:
    Olc6502();
    ~Olc6502();

    void connect_bus(Bus *n) { bus = n; }

  private:
    Bus *bus = nullptr;
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr);
};
