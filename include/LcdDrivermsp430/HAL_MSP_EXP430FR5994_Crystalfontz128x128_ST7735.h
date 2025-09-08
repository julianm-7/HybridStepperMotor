#ifndef HAL_MSP_EXP430FR5994_CRYSTALFONTZ128X128_ST7735_H
#define HAL_MSP_EXP430FR5994_CRYSTALFONTZ128X128_ST7735_H

#include <stdint.h>
#include "grlib.h"

void Graphics_initContext(Graphics_Context *context, const void *lcd);
void Graphics_setForegroundColor(Graphics_Context *context, uint32_t color);
void Graphics_setBackgroundColor(Graphics_Context *context, uint32_t color);
void Graphics_clearDisplay(Graphics_Context *context);
void GrContextFontSet(Graphics_Context *context, const void *font);
void Graphics_drawStringCentered(Graphics_Context *context, const char *text, int length, int x, int y, int mode);

#endif
