#include "stdio.h"

#ifndef __ESP_LOG_H__

#define __ESP_LOG_H__

//#ifndef ESP_PLATFORM // TODO?
    #include "ArduinoLog.h"
//#endif

#define DEBUG_BUFFER_SIZE 255

/* Critical errors, software module can not recover on its own */
void ESP_LOGE(const char* tag, const char *message, ...); // arduinoLog: error
/* Information messages which describe normal flow of events */
void ESP_LOGI(const char* tag, const char *message, ...); // arduinoLog: notice
/* Extra information which is not necessary for normal use (values, pointers, sizes, etc). */
void ESP_LOGD(const char* tag, const char *message, ...); // arduinoLog: trace
/* Bigger chunks of debugging information, or frequent messages which can potentially flood the output. */
void ESP_LOGV(const char* tag, const char *message, ...); // arduinoLog: verbose
/* Error conditions from which recovery measures have been taken */
void ESP_LOGW(const char* tag, const char *message, ...); // arduinoLog: warning

#endif // __ESP_LOG_H__
