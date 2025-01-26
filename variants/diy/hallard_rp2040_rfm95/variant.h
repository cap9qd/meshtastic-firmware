// #define RADIOLIB_CUSTOM_ARDUINO 1
// #define RADIOLIB_TONE_UNSUPPORTED 1
// #define RADIOLIB_SOFTWARE_SERIAL_UNSUPPORTED 1

#define ARDUINO_ARCH_AVR

// #define USE_SSD1306

// #define USE_SH1106 1

// default I2C pins:
// SDA = 4
// SCL = 5

// Recommended pins for SerialModule:
// txd = 8
// rxd = 9

//LCD
#define HAS_SCREEN 1
#define USE_SSD1306
#define I2C_SDA 12
#define I2C_SCL 13
#define I2C_SDA1 14
#define I2C_SCL1 15

// Wire
/*
#undef PIN_WIRE0_SDA
#undef PIN_WIRE0_SCL
#define PIN_WIRE0_SDA (12u)
#define PIN_WIRE0_SCL (13u)

#define PIN_WIRE1_SDA (-1)
#define PIN_WIRE1_SCL (-1)

#define SERIAL_HOWMANY (3u)
#define SPI_HOWMANY (2u)
#define WIRE_HOWMANY (1u)
*/

//#define EXT_NOTIFY_OUT 22
#define BUTTON_PIN 3
#define BUTTON_ACTIVE_LOW false
#define BUTTON_ACTIVE_PULLUP false
#define BUTTON_SENSE_TYPE INPUT_SENSE_HIGH

#define PIN_BUZZER 16 // pwm output

//LED on RP2040 board
#define LED_PIN 17

#define RGBLED_RED   9 // Red of RGB   6
#define RGBLED_GREEN 6 // Green of RGB 5
#define RGBLED_BLUE  5 // Blue of RGB  9
#define RGBLED_CA      // comment out this line if you have a common cathode type, as defined use common anode logic

//#undef BUILTIN_LED
//#define BUILTIN_LED 17
#define LED_CONN 17

#define LED_STATE_ON 0 // State when LED is lit

// #define BATTERY_PIN 26
//  ratio of voltage divider = 3.0 (R17=200k, R18=100k)
// #define ADC_MULTIPLIER 3.1 // 3.0 + a bit for being optimistic

//GPS
#define HAS_GPS 1
#define GPS_RX_PIN 1
#define GPS_TX_PIN 0
// #define PIN_GPS_FORCE_ON 14
//#define PIN_GPS_RESET -1
#undef PIN_GPS_RESET
//#define PIN_GPS_PPS -1
#undef PIN_GPS_PPS

#define USE_RF95 // RFM95/SX127x

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

//Using RP2040 MINI from AliExpress:
// RFM95 connected to SPI0
#define LORA_SCK  22 //14 // 10 12P
#define LORA_MISO 20 //8 // 12 10P
#define LORA_MOSI 23 //15 // 11 11P
#define LORA_CS   21 //16 // 3 13P

#define LORA_RESET 26 //17 // 15 14P

#define LORA_DIO0 2  //21 // ?? 6P
#define LORA_DIO1 7  //22 // 20 7P
#define LORA_DIO2 8  //23 // 2 8P
#define LORA_DIO3 RADIOLIB_NC //19 // ?? 3P
#define LORA_DIO4 RADIOLIB_NC //20 // ?? 4P
#define LORA_DIO5 RADIOLIB_NC //18 // ?? 15P

#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
// #define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif
