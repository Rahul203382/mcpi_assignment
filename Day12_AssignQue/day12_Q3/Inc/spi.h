/*
 * spi.h
 *
 *  Created on: Apr 1, 2025
 *      Author: admin
 */

#ifndef SPI_H_
#define SPI_H_

#include "stm32f4xx.h"

void SpiInit(void);
void SpiCSEnable(void); // CSEnable -- Slave Select Enable
void SpiCSDisable(void);// CSDisable
uint16_t SpiTransfer(uint16_t data);
void SpiTransmit(uint16_t data);
uint16_t SpiReceive(void);
void SpiWrite(uint8_t internalAddr, uint8_t data[], uint8_t size);
void SpiRead(uint8_t internalAddr, uint8_t data[], uint8_t size);


#endif /* SPI_H_ */
