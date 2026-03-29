#include <iostream>
#include "clrprint.h"

using namespace std;

int main(){
	PCONSOLE_SCREEN_BUFFER_INFO psbi={0};
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),psbi);
//	psbi->
	
	clrprint("--------Voter--------",0xa,0x0);
	return 0;
}
