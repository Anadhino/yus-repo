#include <platform.h>

uint8_t pushButton = PA0; // pin D2

int main(void)
{
	Serial.begin(115200);
	pinMode(pushButton, INPUT_PULLUP);
    
	while(true)
	{
	    bool buttonState = getPinState(pushButton);
		Serial.print("%d\n", buttonState);
		delay_ms(1);
	}
}
