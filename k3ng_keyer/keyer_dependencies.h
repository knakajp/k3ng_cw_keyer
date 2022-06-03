
#if defined(FEATURE_LCD_4BIT) || defined(FEATURE_LCD_8BIT) || defined(FEATURE_LCD_ADAFRUIT_I2C) || defined(FEATURE_LCD_ADAFRUIT_BACKPACK) || defined(FEATURE_LCD_YDv1) || defined(FEATURE_LCD_ST7032_I2C) || defined(FEATURE_LCD1602_N07DH) || defined(FEATURE_LCD_SAINSMART_I2C) || defined(FEATURE_LCD_FABO_PCF8574) || defined(FEATURE_LCD_MATHERTEL_PCF8574) || defined(FEATURE_LCD_HD44780) || defined(FEATURE_LCD_I2C_FDEBRABANDER) || defined(FEATURE_LCD_TWILIQUIDCRYSTAL) || defined(FEATURE_OLED_SSD1306)
  #define FEATURE_DISPLAY
#endif

#if defined(FEATURE_COMMAND_LINE_INTERFACE_ON_SECONDARY_PORT) && !defined(FEATURE_COMMAND_LINE_INTERFACE)
  #define FEATURE_COMMAND_LINE_INTERFACE
#endif

#if defined(FEATURE_COMMAND_LINE_INTERFACE) || defined(FEATURE_WINKEY_EMULATION)
  #define FEATURE_SERIAL
#endif

//#if defined(HARDWARE_ARDUINO_DUE) && !defined(FEATURE_EEPROM_E24C1024) && defined(FEATURE_MEMORIES)
#if defined(ARDUINO_SAM_DUE) && !defined(FEATURE_EEPROM_E24C1024) && defined(FEATURE_MEMORIES)
  #error "In order to use FEATURE_MEMORIES with HARDWARE_ARDUINO_DUE you need FEATURE_EEPROM_E24C1024"
#endif

#if defined(FEATURE_DISPLAY) || defined(FEATURE_COMMAND_LINE_INTERFACE) || defined(FEATURE_CW_COMPUTER_KEYBOARD)
  #define FEATURE_PADDLE_ECHO
#endif


#if defined(FEATURE_STRAIGHT_KEY) && (defined(FEATURE_STRAIGHT_KEY_ECHO) || defined(FEATURE_MEMORIES) || defined(FEATURE_CW_COMPUTER_KEYBOARD))
  #define FEATURE_STRAIGHT_KEY_DECODE
#endif

#if defined(FEATURE_WEB_SERVER) || defined(FEATURE_INTERNET_LINK)
  #define FEATURE_ETHERNET
#endif

#if defined(FEATURE_INTERNET_LINK)
  #define FEATURE_UDP
#endif

#if defined(FEATURE_4x4_KEYPAD) && defined(FEATURE_3x4_KEYPAD)
  #error "You can't use both FEATURE_4x4_KEYPAD and FEATURE_3x4_KEYPAD simultaneously"
#endif

#if defined(FEATURE_TRAINING_COMMAND_LINE_INTERFACE) && defined(OPTION_WORDSWORTH_NORSK) && !defined(OPTION_NON_ENGLISH_EXTENSIONS)
  #define OPTION_NON_ENGLISH_EXTENSIONS
#endif

#if defined(FEATURE_BEACON_SETTING) && !defined(FEATURE_MEMORIES)
  #error "FEATURE_BEACON_SETTING requires FEATURE_MEMORIES and you may also want FEATURE_MEMORY_MACROS"
#endif

#if defined(FEATURE_COMMAND_MODE) && !defined(FEATURE_BUTTONS)
  #error "FEATURE_COMMAND_MODE requires FEATURE_BUTTONS"
#endif

