#include <avr/io.h>
#include <avr/interrupt.h>
#include <customs/pins.h>



void twiInit()
{
    TWBR = 80; // 200kHz ?
}

void twiStartCondition()
{
    TWCR = (1 << TWINT) | (1 << TWSTA) | (1 << TWEN);
    while (!(TWCR & (1 << TWINT))) {  };
}

void read()
{

}







void printRegs()
{
  Serial.print("TWBR =\t");
  Serial.println(TWBR, BIN);

  Serial.print("TWDR =\t");
  Serial.println(TWDR, BIN);

  Serial.print("TWSR =\t");
  Serial.println(TWSR, BIN);

  Serial.print("TWAR =\t");
  Serial.println(TWAR, BIN);

  Serial.print("TWCR =\t");
  Serial.println(TWCR, BIN);

  Serial.print("TWAMR =\t");
  Serial.println(TWAMR, BIN);
}