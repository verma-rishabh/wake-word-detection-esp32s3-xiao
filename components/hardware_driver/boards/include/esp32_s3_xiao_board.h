
#pragma once

#include "driver/gpio.h"
#include "esp_idf_version.h"
#include "driver/i2s_pdm.h"
/**
 * @brief ESP32-S3-XIAO I2C GPIO defineation
 * 
 */
#define FUNC_I2C_EN     (0)
#define GPIO_I2C_SCL    (GPIO_NUM_NC)
#define GPIO_I2C_SDA    (GPIO_NUM_NC)

/**
 * @brief ESP32-S3-XIAO I2S GPIO defination
 * 
 */
#define FUNC_I2S_EN         (1)
#define GPIO_I2S_LRCK       (GPIO_NUM_NC)
#define GPIO_I2S_MCLK       (GPIO_NUM_NC)
#define GPIO_I2S_SCLK       (GPIO_NUM_42)
#define GPIO_I2S_SDIN       (GPIO_NUM_41)
#define GPIO_I2S_DOUT       (GPIO_NUM_NC)

/**
 * @brief ESP32-S3-XIAO I2S GPIO defination
 * 
 */
#define FUNC_I2S0_EN         (0)
#define GPIO_I2S0_LRCK       (GPIO_NUM_NC)
#define GPIO_I2S0_MCLK       (GPIO_NUM_NC)
#define GPIO_I2S0_SCLK       (GPIO_NUM_NC)
#define GPIO_I2S0_SDIN       (GPIO_NUM_NC)
#define GPIO_I2S0_DOUT       (GPIO_NUM_NC)


#define I2S_CONFIG_DEFAULT(sample_rate, channel_fmt, bits_per_chan) { \
        .clk_cfg = I2S_PDM_RX_CLK_DEFAULT_CONFIG(sample_rate), \
        .slot_cfg = I2S_PDM_RX_SLOT_DEFAULT_CONFIG(bits_per_chan, channel_fmt), \
        .gpio_cfg = { \
            .clk = GPIO_I2S_SCLK, \
            .din  = GPIO_I2S_SDIN, \
            .invert_flags = { \
                .clk_inv = false, \
            }, \
        }, \
    }

