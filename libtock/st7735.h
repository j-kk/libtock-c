/*L3GD20 3 axis gyroscope and temperature sensor
*
* <https://www.pololu.com/file/0J563/L3GD20.pdf>
*
*/

#pragma once

#include "tock.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DRIVER_NUM_ST7735 0x80006

#define	ST7735_COLOR_BLACK   0x0000
#define	ST7735_COLOR_BLUE    0x001F
#define	ST7735_COLOR_RED     0xF800
#define	ST7735_COLOR_GREEN   0x07E0
#define ST7735_COLOR_CYAN    0x07FF
#define ST7735_COLOR_MAGENTA 0xF81F
#define ST7735_COLOR_YELLOW  0xFFE0  
#define ST7735_COLOR_WHITE   0xFFFF

int st7735_reset (void);
int st7735_fill (int color);

#ifdef __cplusplus
}
#endif
