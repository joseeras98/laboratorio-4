#ifndef SDRAM_H_INCLUDED
#define SDRAM_H_INCLUDED

#define SDRAM_BASE_ADDRESS ((uint8_t *)(0xd0000000))

void sdram_init(void);

#ifndef NULL
#define NULL (void *)(0)
#endif

#endif // SDRAM_H_INCLUDED