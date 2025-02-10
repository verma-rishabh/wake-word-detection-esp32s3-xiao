

#pragma once

#include <stdbool.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Special config for dev board
 * 
 * @param sample_rate
 * @param channel_format
 * @param bits_per_chan
 * @return
 *    - ESP_OK: Success
 *    - Others: Fail
 */
esp_err_t esp_board_init(uint32_t sample_rate, int channel_format, int bits_per_chan);




esp_err_t get_i2s_data(char *buffer, int buffer_len);


/**
 * @brief Get the record pcm data.
 * 
 * @param is_get_raw_channel Whether to get the recording data of the original number of channels. 
 *                           Otherwise, the corresponding number of channels will be filtered based on the board.
 * @param buffer The buffer where the data is stored.
 * @param buffer_len The buffer length.
 * @return
 *    - ESP_OK                  Success
 *    - Others                  Fail
 */
esp_err_t esp_get_feed_data(bool is_get_raw_channel, int16_t *buffer, int buffer_len);

int esp_get_feed_channel(void);

#ifdef __cplusplus
}
#endif
