#ifndef BATTERY_H_INCLUDED
#define BATTERY_H_INCLUDED

void adc_setup(void);
uint16_t read_adc_naiive(uint8_t channel);

#endif // BATTERY_H_INCLUDED