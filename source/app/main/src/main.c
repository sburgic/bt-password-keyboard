/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "adc.h"
#include "config.h"
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
    /* Enable the power regulator. */
    (void) power_latch_init();

    /* Initialize LED handler. */
    (void) led_init();

    /* Initialize configuration handler. */
    (void) config_init();

    /* Initialize ADC handler. */
    (void) adc_init();
}
