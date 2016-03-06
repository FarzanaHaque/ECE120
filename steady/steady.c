#include <stdlib.h>
#include <stdio.h>

int main(){
	int in1, in2, in3;
	int gate1_out, gate2_out, Q;
	printf("Stable state found at %d %d %d %d %d %d\n",in1,in2,in3,gate1_out&1,gate2_out&1,Q);

	return 0;
}