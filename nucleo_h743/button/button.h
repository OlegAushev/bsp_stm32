#pragma once


#ifdef STM32H7xx_Nucleo

#include <mculib_stm32/h7/gpio/gpio.h>


namespace bsp {

namespace nucleo {

extern mcu::gpio::Input button;
extern const mcu::gpio::Config button_config;
void init_button();
void on_button_interrupt();

} // namespace nucleo

} // namespace bsp

#endif

