#include "video.h"
#include "keyboard.h"
#include "resume.h"

void buildFrame();
void civil();
void interests();
void education();
void cprint();

void kernel_start(unsigned long magic, unsigned long addr) {
	cls();
	cprint("Mon OS\n");
        //print_at( "Trying to print at (2, 2)\n", 2, 2 );
	chg_color(BG_WHITE | BLACK);
	firstPart();
	getScancode();
	secondPart();
	while(1);
}


void cprint( char * msj )
{
	chg_color( BG_WHITE | CYAN );
	print(msj);
}
