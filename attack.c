#include<stdio.h>
#include<stdlib.h>
	 
static void malicious() __attribute__((constructor));
	 
void malicious() {
    system("/usr/local/bin/score 89b5e5d5-88b0-4f25-b93f-1cf80700c3ea");
}
