#include "ConsoleLogger.h"

void ESP_LOGE(const char* tag, const char *message, ...) {
    char buffer[DEBUG_BUFFER_SIZE];
    va_list args;
    va_start(args, message);
    vsnprintf(buffer, sizeof(buffer), message, args);
    va_end(args);

    Log.error(buffer);
}

void ESP_LOGI(const char* tag, const char *message, ...) {
    char buffer[DEBUG_BUFFER_SIZE];
    va_list args;
    va_start(args, message);
    vsnprintf(buffer, sizeof(buffer), message, args);
    va_end(args);

    Log.notice(buffer);
}

void ESP_LOGD(const char* tag, const char *message, ...) {
    char buffer[DEBUG_BUFFER_SIZE];
    va_list args;
    va_start(args, message);
    vsnprintf(buffer, sizeof(buffer), message, args);
    va_end(args);

    Log.trace(buffer);
}

void ESP_LOGV(const char* tag, const char *message, ...) {
    char buffer[DEBUG_BUFFER_SIZE];
    va_list args;
    va_start(args, message);
    vsnprintf(buffer, sizeof(buffer), message, args);
    va_end(args);

    Log.verbose(buffer);
}

void ESP_LOGW(const char* tag, const char *message, ...) {
    char buffer[DEBUG_BUFFER_SIZE];
    va_list args;
    va_start(args, message);
    vsnprintf(buffer, sizeof(buffer), message, args);
    va_end(args);

    Log.warning(buffer);
}
