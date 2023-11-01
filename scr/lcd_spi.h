#ifndef LCD_SPI_H_INCLUDED
#define LCD_SPI_H_INCLUDED

void lcd_spi_init(void);
void lcd_show_frame(void);
void lcd_draw_pixel(int x, int y, uint16_t color);

#define	LCD_BLACK   0x0000
#define	LCD_BLUE    0x1F00
#define	LCD_RED     0x00F8
#define	LCD_GREEN   0xE007
#define LCD_CYAN    0xFF07
#define LCD_MAGENTA 0x1FF8
#define LCD_YELLOW  0xE0FF
#define LCD_WHITE   0xFFFF
#define LCD_GREY    0xc339

#define LCD_CS      PC2     /* CH 1 */
#define LCD_SCK     PF7     /* CH 2 */
#define LCD_DC      PD13    /* CH 4 */
#define LCD_MOSI    PF9     /* CH 3 */

#define LCD_SPI     SPI5

#define LCD_WIDTH   240
#define LCD_HEIGHT  320

#define FRAME_SIZE (LCD_WIDTH * LCD_HEIGHT)
#define FRAME_SIZE_BYTES (FRAME_SIZE * 2)
#endif // LCD_SPI_H_INCLUDED