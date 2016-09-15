#include "video.h"
#include "keyboard.h"
#include "resume.h"

void buildFrame();
void civil();
void interests();
void education();

void kernel_start(unsigned long magic, unsigned long addr) {
	cls();
	chg_color(BG_WHITE |CYAN);
	print("Mon OS\n");
    print_at( "Trying to print at (2, 2)\n", 2, 2 );
	chg_color(BG_WHITE | BLACK);
	firstPart();
	getScancode();
	secondPart();
	while(1);
}


