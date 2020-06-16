#include <stdio.h>

int main(){
int number=0x00ccbbaa;
//printf("%d",number);

for(int i=1;i<5;i++){
	int shift=(5-i)*8;
	int totalShift;
	totalShift=number>>shift;
	int g=0x000000ff;
	int total=totalShift&g;
	printf("%d element by bit %d \n",i,total);
	}
}
