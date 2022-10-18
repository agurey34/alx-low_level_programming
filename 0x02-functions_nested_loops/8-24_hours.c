#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0, hour <= 23; hour++)
	{
		for (minute = 0, minute <= 59; minute++)
		{
			_printchar((hour / 10) + '0');
			_printchar((hour % 10) + '0');
			_printchar(':');
			_printchar((minute / 10) + '0');
			_printchar((minute % 10) + '0');
			_printchar('\n');
		}
	}
}
