

#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "boards.h"

/**
 * @brief Function for application main entry.
 */
int main(void)
{
bsp_board_init(BSP_INIT_LEDS);

while (true){
bsp_board_led_on(0);
nrf_delay_ms(500);
bsp_board_led_off(0);
nrf_delay_ms(500);
bsp_board_led_invert(3);
    

}
}


/**
 *@}
 **/
