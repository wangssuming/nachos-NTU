#include "syscall.h"
main() {
	int i;
	for(i = 0; i < 5; i++) {
		PrintInt(i);
		Sleep(1000000);
		
	}
	return 0;
}
