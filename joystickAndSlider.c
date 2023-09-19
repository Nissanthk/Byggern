/*
 * CFile1.c
 *
 * Created: 19.09.2023 17:48:52
 *  Author: nissantk
 */ 

/*
uart_init(UBRR);
xmem_init();
// adc_init();
volatile uint8_t* adc = (uint8_t*)0x1400;
while(true){
	*adc = 69;
	_delay_ms(100);
	printf("%d, ", *adc);
	printf("%d, ", *adc);
	printf("%d, ", *adc);
	printf("%d, ", *adc);
	printf("\n\r");
}
*/


/*

int* joystickPos(uint8_t* adc) {
	int position[2]; 
	position[0] = *adc;
	position[1] = *adc;
	
	return position;
}


uint8_t sliderPos() {
	
}
*/
