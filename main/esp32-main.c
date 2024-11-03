#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <stdio.h>

void app_main() {
    printf("Hello from ESP32! Running FreeRTOS task.\n");

    while (1) {
        printf("ESP32 FreeRTOS Task Loop\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);  // Delay for 1 second
    }
}
