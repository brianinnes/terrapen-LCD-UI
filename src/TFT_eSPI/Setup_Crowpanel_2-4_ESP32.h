#define ILI9341_DRIVER // Generic driver for common displays

// Don't need to define this as they are set by the TFT_Drivers/IL9341_Defines.h
// #define TFT_WIDTH 320
// #define TFT_HEIGHT 240

#define TFT_BL 27 // LED back-light control pin

#define TFT_MISO 12
#define TFT_MOSI 13 // In some display driver board, it might be written as "SDA" and so on.
#define TFT_SCLK 14
#define TFT_CS 15  // Chip select control pin
#define TFT_DC 2   // Data Command control pin
#define TFT_RST -1 // Reset pin (could connect to Arduino RESET pin)
#define TFT_BL 27  // LED back-light

#define TOUCH_CS 33 // Chip select pin (T_CS) of touch screen

#define TFT_BACKLIGHT_ON HIGH // Level to turn ON back-light (HIGH or LOW)

#define LOAD_GLCD  // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2 // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4 // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6 // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7 // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8 // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

// #define SPI_FREQUENCY 40000000
// #define SPI_READ_FREQUENCY 20000000
// #define SPI_TOUCH_FREQUENCY 2500000