#ifndef HAL_FR5994_OPT3001_H
#define HAL_FR5994_OPT3001_H

#define CONFIG_REG 0x01
#define RESULT_REG 0x00
#define HIGHLIMIT_REG 0x02
#define LOWLIMIT_REG 0x03

void OPT3001_init(uint8_t address);
uint16_t OPT3001_readConfigReg(uint8_t address);
void OPT3001_writeHighLimitReg(void);
void OPT3001_writeLowLimitReg(void);
void OPT3001_configReg(void);

#endif
