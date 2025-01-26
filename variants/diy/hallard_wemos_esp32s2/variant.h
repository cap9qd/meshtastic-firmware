// WeMos/Lolin ESP32s2-Mini with Harllard WeMos Shield
// https://github.com/hallard/WeMos-Lora/tree/master

// Battery
//#define BATTERY_PIN 3
//#define ADC_MULTIPLIER 2.0
//#define ADC_WIDTH ADC_WIDTH_12Bit
//#define ADC_CHANNEL ADC1_GPIO3_CHANNEL

// Button
#define HAS_BUTTON 1
#define BUTTON_PIN 16
#define BUTTON_NEED_PULLUP
//#define BUTTON_ACTIVE_LOW true
//#define BUTTON_ACTIVE_PULLUP true
//#define BUTTON_SENSE_TYPE INPUT_SENSE_LOW

// Buzzer
//#define PIN_BUZZER 16 //  pwm output

// I2C
#define I2C_SCL 35
#define I2C_SDA 33
#define I2C_SCL1 1
#define I2C_SDA1 2

// Screen 
#define HAS_SCREEN 1 
#define USE_SSD1306

// GPS
#define HAS_GPS 1
#define GPS_TX_PIN 39
#define GPS_RX_PIN 37
//#define PIN_GPS_FORCE_ON 14
//#define PIN_GPS_RESET -1
#undef PIN_GPS_RESET
//#define PIN_GPS_PPS -1
#undef PIN_GPS_PPS

// LED 
#undef BUILTIN_LED
#define LED_PIN 15
#define BUILTIN_LED LED_PIN
#define CONN_LED LED_PIN
#define LED_STATE_ON 0 // State when LED is lit

//Neopixels
#define HAS_NEOPIXEL                         // Enable the use of neopixels
#define NEOPIXEL_COUNT 2                     // How many neopixels are connected
#define NEOPIXEL_DATA 18                     // gpio pin used to send data to the neopixels
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

// Radio
#define USE_RF95 // RFM95/SX127x

#define LORA_SCK  7 
#define LORA_MISO 9
#define LORA_MOSI 11
#define LORA_CS   5 

#define LORA_RESET RADIOLIB_NC

// WeMos shield has DIO0, DIO1 & DIO2 tied to 12 via 1n4148 
// removed D3 and D4 for DIO1 and DIO2
// Added jumper from DIO1 to A0/3 on WeMos shield
#define LORA_DIO0 12
#define LORA_DIO1 RADIOLIB_NC
#define LORA_DIO2 RADIOLIB_NC
#define LORA_DIO3 RADIOLIB_NC 
#define LORA_DIO4 RADIOLIB_NC 
#define LORA_DIO5 RADIOLIB_NC 