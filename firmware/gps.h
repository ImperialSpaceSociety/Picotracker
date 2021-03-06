/*
 * Functions for the UBLOX 6 GPS
 * for Pico Balloon Tracker using HC12 radio module and GPS
 * HC12 Module with STM8S003F3 processor and silabs Si4463 Radio
 *  
 * Derived Work Copyright (c) 2018 Imperial College Space Society
 * From original work Copyright (C) 2014  Richard Meadows <richardeoin>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef GPS_H
#define GPS_H

#include <stdint.h>
#include <iostm8s003f3.h>
#include "fix.h"


#define UART_RX_BUFFER_LENGTH   120
#define UBX_CFG_RETRIES         3
#define UBX_CFG_TIMEOUT         60000     // timeout 
#define UBX_POLL_RETRIES        3       
#define UBX_POLL_TIMEOUT        1000000l     // timeout

void InitialiseUART(void);
void UART_send_buffer(char *cmd, uint8_t length);

uint8_t gps_set_gps_only(void);
uint8_t gps_disable_nmea_output(void);
uint8_t gps_set_airborne_model(void);
uint8_t gps_set_power_save(void);
uint8_t gps_power_save(int on);
uint8_t gps_save_settings(void);
uint8_t gps_get_fix(struct gps_fix *fix);
uint8_t gps_wake_up(void);
void gps_startup_delay(void);
void delay_ms(unsigned long ms);
void uart_power_save(int on);





#endif /* GPS_H */

