#ifndef __ETL_PROFILE_H__
#define __ETL_PROFILE_H__

#if defined(__AVR__) || defined(ARDUINO_ARCH_STM32)
  #define ETL_TARGET_OS_NONE
  #define ETL_CPP11_SUPPORTED 0
#endif

#if defined(ARDUINO_ARCH_ESP8266)
  #define ETL_TARGET_OS_NONE
  #define ETL_CPP11_SUPPORTED 1
#endif

#if defined(ARDUINO_ARCH_ESP32)
  #define ETL_CPP11_SUPPORTED 1
#endif

#define ETL_CHECK_PUSH_POP
#define ETL_COMPILER_GCC
#define ETL_CPP14_SUPPORTED 0
#define ETL_CPP17_SUPPORTED 0
#define ETL_VERBOSE_ERRORS

#endif
