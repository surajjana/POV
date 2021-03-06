/* Name: main.c
 * Author: Michael Ciuffo
 * Published under Creative Commons Attribution-NonCommercial 3.0 Unported license
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
const uint8_t dance[227]  PROGMEM = {0x0,0xe3,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf1,0x4,0xff,0xf1,0x4,0xff,0xf1,0x4,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x20,0x0,0x6,0x30,0x0,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x0,0xff,0x3f,0x0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0x18,0xf1,0x3c,0xf8,0x0,0x3c,0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x3f,0x0,0x80,0xff,0x0,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6,0x3c,0x1f,0x3e,0x3c,0x1,0x3f,0x30,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xe,0x38,0x0,0x2,0x20,0x0,0x2,0x20,0x0,0x0,0x0,0x0,0xf1,0x4,0xff,0xf1,0x4,0xff,0xf1,0x4,0xff,0xc0,0x0,0x20,0xc2,0x20,0x20,0xc2,0x30,0x20,0xce,0x38,0x20,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x21,0x0,0xcf,0x21,0x0,0xcf,0x21,0x0,0xcf,0xff,0x0,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x0,0x0,0x7,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0xf,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff};
const uint8_t heart[62] PROGMEM = {0x0,0x3c,0xff,0x3c,0xff,0xff,0x3c,0xff,0xde,0x3c,0x3f,0x4e,0x3c,0x1f,0x6,0x3c,0x1f,0x6,0x3c,0xf,0x6,0x3c,0x3,0xe,0x3c,0x1,0x1e,0x38,0x0,0x1e,0x30,0x0,0xe,0x3c,0x1,0x6,0x3c,0x3,0x6,0x3c,0xf,0x6,0x3c,0x1f,0xce,0x3c,0x1f,0xde,0x3c,0x3f,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff};
const uint8_t smile[83] PROGMEM = {0x0,0x51,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x3f,0x3c,0x7,0x1e,0x3c,0x1,0xce,0x3c,0x70,0xc7,0x38,0xfc,0xf3,0x30,0xff,0xf1,0x20,0xff,0xf9,0x24,0x1f,0xf9,0x4,0x13,0xfd,0xc,0x19,0xfd,0xc,0xfc,0xfd,0xc,0xfc,0xfd,0xc,0xfc,0xfd,0xc,0x19,0xf9,0x4,0x13,0xf9,0x24,0x1f,0xf1,0x20,0xff,0xf3,0x30,0xff,0xc7,0x38,0xfc,0xce,0x3c,0x70,0x1e,0x3c,0x1,0x3f,0x3c,0x7,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff};
const uint8_t star[98] PROGMEM = {0x0,0x60,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xf7,0xff,0x3c,0xe7,0xbf,0x3c,0xe7,0xbf,0x3c,0xe7,0x39,0x3c,0xe7,0x3,0x3c,0xc7,0x6,0x3c,0x7,0xe,0x3c,0x7,0x1e,0x3c,0x0,0x3e,0x0,0x0,0x3e,0x0,0x0,0x1e,0x3c,0x0,0xe,0x3c,0x7,0x6,0x3c,0x7,0x3,0x3c,0xc7,0x39,0x3c,0xe7,0xbf,0x3c,0xe7,0xff,0x3c,0xe7,0xff,0x3c,0xe7,0xff,0x3c,0xf7,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff};
const uint8_t notes[176] PROGMEM = {0x0,0xb0,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x0,0x3c,0x1,0xff,0x3c,0xf8,0xff,0x3c,0xf8,0xff,0x38,0xf8,0xff,0x38,0xf8,0xff,0x3c,0xfc,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0x1f,0x3e,0x3c,0x1f,0x9e,0x3c,0x2f,0xce,0x3c,0x77,0xce,0x3c,0xfb,0xc7,0x3c,0xff,0xe3,0x3c,0xff,0xf1,0x3c,0xff,0x0,0x30,0x0,0xff,0x20,0xfe,0xff,0x0,0xfe,0xff,0x0,0xfe,0xff,0x0,0xff,0xff,0x24,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x0,0x3c,0x1,0xf9,0x3c,0xf8,0xf3,0x3c,0xf8,0xf3,0x3c,0xf8,0xf3,0x3c,0xf8,0xf3,0x3c,0xff,0xf3,0x3c,0xff,0xf7,0x3c,0xff,0x6,0x38,0x0,0xff,0x30,0xfc,0xff,0x30,0xfc,0xff,0x30,0xfe,0xff,0x30,0xfe,0xff,0x30,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff};
const uint8_t peace[74] PROGMEM = {0x0,0x4a,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x3e,0x3c,0x1,0xde,0x3c,0x78,0xcf,0x30,0xfe,0xe7,0x30,0xfc,0xf3,0x24,0xf8,0xfb,0xc,0xf1,0xf9,0xc,0xe3,0xb9,0x1c,0xe7,0x3d,0x1c,0xef,0x0,0x0,0x0,0x0,0x0,0x0,0x3d,0x1c,0xef,0xb9,0x1c,0xe7,0xf9,0xc,0xe3,0xfb,0xc,0xf1,0xf3,0x24,0xf8,0xe7,0x30,0xfc,0xcf,0x30,0xfe,0xde,0x3c,0x78,0x3f,0x3c,0x1,0xff,0x3c,0xff};
const uint8_t radioactive[83] PROGMEM = {0x0,0x4a,0xff,0x3c,0xff,0xff,0x3c,0xff,0xff,0x3c,0xff,0x3e,0x3c,0x1,0xde,0x3c,0x78,0xcf,0x30,0xfe,0xe7,0x30,0xfc,0xf3,0x24,0xf8,0xfb,0xc,0xf1,0xf9,0xc,0xe3,0xb9,0x1c,0xe7,0x3d,0x1c,0xef,0x0,0x0,0x0,0x0,0x0,0x0,0x3d,0x1c,0xef,0xb9,0x1c,0xe7,0xf9,0xc,0xe3,0xfb,0xc,0xf1,0xf3,0x24,0xf8,0xe7,0x30,0xfc,0xcf,0x30,0xfe,0xde,0x3c,0x78,0x3f,0x3c,0x1,0xff,0x3c,0xff};
const uint8_t yinyang[74] PROGMEM = {0x0,0x4a,0xff,0x3c,0xff,0xff,0x3c,0xff,0x3f,0x3c,0x3,0xde,0x3c,0x70,0xcf,0x38,0xf8,0x27,0x30,0xfc,0x37,0x20,0xee,0x3b,0x20,0xce,0x39,0x0,0xee,0xf9,0x0,0xfe,0xfd,0x0,0xfc,0xfd,0x0,0xf0,0xbd,0x0,0xe0,0x3d,0x0,0xc0,0x39,0x0,0x0,0xfb,0x0,0x10,0xf3,0x20,0x30,0xf7,0x20,0x10,0xe7,0x30,0x80,0xf,0x38,0x80,0x1e,0x3c,0xe0,0x3f,0x3c,0x3,0xff,0x3c,0xff,0xff,0x3c,0xff};

void print(uint8_t *pattern, uint8_t loops)
{
	uint8_t j = 0;
	for (j = 0; j<loops; j++)
	{
	int i = 0;
	int length = pgm_read_byte(&pattern[1]);
	length += pgm_read_byte(&pattern[0])<<8;
	for (i = 2; i<length; i+=3)
	{
		PORTB = pgm_read_byte(&pattern[i]);
		PORTC = pgm_read_byte(&pattern[i+1]);
		PORTD = pgm_read_byte(&pattern[i+2]);
		_delay_ms(10);
	}
	}
	return;
}

int main(void)
{
	DDRB = 0xFF;
	DDRC = 0xFF;
	DDRD = 0xFF;
	PORTD = 0xFF;
	PORTC = 0XFF;
	PORTB = 0XFF;
	
    while(1){
		print (&dance, 100);
		print (&heart, 200);
		print (&smile, 200);
		print (&star, 200);
		print (&notes, 100);
		print (&peace, 200);
		print (&radioactive, 200);
		print (&yinyang, 200);
		
		
	}
    
    return 0;   /* never reached */
}
