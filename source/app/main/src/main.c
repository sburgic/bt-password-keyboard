/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "adc.h"
#include "config.h"
#include "error.h"
#include "led.h"
#include "power-latch.h"

#include <esp_log.h>

/*******************************************************************************
 * Defines
 ******************************************************************************/

#define MAIN_TAG "MAIN"

/*******************************************************************************
 * API functions
 ******************************************************************************/

void app_main(void)
{
    esp_err_t ret;

    /* Enable the power regulator. */
    ret = power_latch_init();

    if (ESP_OK == ret)
    {
        /* Initialize LED handler. */
        ret = led_init();
    }

    if (ESP_OK == ret)
    {
        /* Initialize configuration handler. */
        ret = config_init();
    }

    if (ESP_OK == ret)
    {
        /* Initialize ADC handler. */
        ret = adc_init();
    }

    if (ESP_OK == ret)
    {
        ESP_LOGI(MAIN_TAG, "Initialization successful.");
    }
}
