#ifndef POWER_LATCH_H
#define POWER_LATCH_H

#include <esp_err.h>

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define POWER_LATCH_TAG      "POWER_LATCH"
#define POWER_LATCH_GPIO_PIN (10)

/*******************************************************************************
 * Functions
 ******************************************************************************/

esp_err_t power_latch_init(void);

#endif /* POWER_LATCH_H */
