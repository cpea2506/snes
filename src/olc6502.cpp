#include "olc6502.h"

Olc6502::Olc6502() {}
Olc6502::~Olc6502() {}

uint8_t Olc6502::read(uint16_t addr) { return bus->read(addr, false); }
void Olc6502::write(uint16_t addr, uint8_t data) { bus->write(addr, data); }
