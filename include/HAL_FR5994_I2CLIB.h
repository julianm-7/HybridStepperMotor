#ifndef HAL_FR5994_I2CLIB_H
#define HAL_FR5994_I2CLIB_H

#include <stdint.h>

void I2C_setAddress(uint8_t address);
void I2C_write16(uint8_t reg, uint16_t value);
uint16_t I2C_read16(uint8_t reg);

#endif
