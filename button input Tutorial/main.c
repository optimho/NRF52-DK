
#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"

#define Led 27
#define Button 13
uint16_t check;

/**
 * @brief Function for application main entry.
 */

int main(void)
{
  printf("main Application started \r\n");
   nrf_gpio_cfg_output(Led);  // configures the LED pin as an output
   nrf_gpio_cfg_input(Button, NRF_GPIO_PIN_PULLUP); // configures the Button as an input
   nrf_gpio_pin_clear(Led);
  // nrf_gpio_pin_set(Led); //Turn on the LED
  //check = nrf_gpio_pin_clear(Led);

   while (true)
   {
    if(nrf_gpio_pin_read(Button) == 0){
        nrf_gpio_pin_clear(Led);  // Turn on the LED 
        printf("Button Pressed !! \r\n");
        while(nrf_gpio_pin_read(Button) == 0){ // Stay in this loop untill the button id  released
          nrf_gpio_pin_toggle(Led);
          printf("The button was released \r\n");
          //nrf_gpio_pin_set(Led);   //turns off the led
          nrf_delay_ms(50);       // 

                               }
             }
/**
 *@}
 **/
   }
 }