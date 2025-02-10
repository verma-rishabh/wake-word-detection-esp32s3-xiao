
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include "bsp_board.h"
#include "esp_err.h"
#include "esp_board_init.h"

static const char *TAG = "hardware";

esp_err_t esp_board_init(uint32_t sample_rate, int channel_format, int bits_per_chan)
{
    return bsp_board_init(sample_rate, channel_format, bits_per_chan);
}

esp_err_t esp_get_feed_data(bool is_get_raw_channel, int16_t *buffer, int buffer_len)
{
    return bsp_get_feed_data(is_get_raw_channel, buffer, buffer_len);
}

int esp_get_feed_channel(void)
{
    return bsp_get_feed_channel();
}
