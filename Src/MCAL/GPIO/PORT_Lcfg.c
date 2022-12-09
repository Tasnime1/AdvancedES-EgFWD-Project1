#include "Port_Lcfg.h"


#define PORT_PINS_NUM 3

const Port_ConfigType PortsConfig [PORT_PINS_NUM] =
{
	{PORT_DEN, DIO_PIN_HIGH, PORT_PIN_OUTPUT, PORT_PULL_DOWN, PORT_8mA, DIO_PORT_F, DIO_PIN_0},
	{PORT_DEN, DIO_PIN_HIGH, PORT_PIN_OUTPUT, PORT_PULL_DOWN, PORT_8mA, DIO_PORT_F, DIO_PIN_1},
	{PORT_DEN, DIO_PIN_HIGH, PORT_PIN_OUTPUT, PORT_PULL_DOWN, PORT_8mA, DIO_PORT_F, DIO_PIN_2}
};
