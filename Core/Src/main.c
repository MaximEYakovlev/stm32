#include "main.h"
#include "gpio.h"

int main(void)
{
    MPU_Config();

    HAL_Init();

    SystemClock_Config();

    MX_GPIO_Init();
}