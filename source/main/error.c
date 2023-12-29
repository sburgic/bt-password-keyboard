#include "error.h"

#include <esp_log.h>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

/*******************************************************************************
 * API functions
 ******************************************************************************/

void error_critical_handler(char* tag)
{
    ESP_LOGE(tag, "Critical error occurred!");

    /* Wait for 1 minute and restart the CPU. */
    vTaskDelay(pdMS_TO_TICKS(60000));
    esp_restart();
}
