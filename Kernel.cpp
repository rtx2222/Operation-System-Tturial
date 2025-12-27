#include <stdint_h>

#define  VIDEO_MEMORY 0xB8000
#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25

extern "C" void Kernel_main(){

    volatile uint16_t* vga = (uint16_t*)VIDEO_MEMORY; 
    const char* msg = "Welcome to Tuturial OS";

    int i = 0;

    while(msg[i]){

        vga[i] = (uint8_t) msg[i] | (0x0f << 8);
    }

    while(1){}
    

}
