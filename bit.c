#include <stdio.h>

int main(){
int number=0x00ccbbaa;
//printf("%x",number);

for(int i=0;i<4;i++){
	int shift=i*8;
	int totalShift;
	totalShift=number>>shift;
	int g=0x000000ff;
	int total=totalShift & g;
	printf("%d element by bit %x \n",i,total);
	}
}
