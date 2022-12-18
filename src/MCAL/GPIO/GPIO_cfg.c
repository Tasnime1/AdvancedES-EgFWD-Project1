#include "GPIO_cfg.h"

const GPIO_ConfigType PortsConfig [PINS_NUM] =
{
	{GPIO_DEN, GPIO_PIN_LOW, GPIO_PIN_OUTPUT, GPIO_PULL_UP, GPIO_2mA, GPIO_PORT_A, GPIO_PIN_1},
	{GPIO_DEN, GPIO_PIN_HIGH, GPIO_PIN_OUTPUT, GPIO_PULL_DOWN, GPIO_4mA, GPIO_PORT_A, GPIO_PIN_2},
	{GPIO_DEN, GPIO_PIN_HIGH, GPIO_PIN_OUTPUT, GPIO_PULL_DOWN, GPIO_8mA, GPIO_PORT_A, GPIO_PIN_3}
};
