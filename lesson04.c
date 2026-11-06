#include <stdio.h>

int main(){
	// 1. Toan tu Gan
	int a = 10; // Gan a = 10;
	a += 5; // a = a+5
	printf("a += 5: %d \n", a); // 15
	
	int b = 10;
	b -= 5; // b = b-5
	printf("b -= 5: %d \n", b); // 5
	
	int c = 10;
	c *= 5; // c = c*5
	printf("c *= 5: %d \n", c);
	
	int d = 10;
	d /= 5; // d= d/5;
	printf("d /= 5: %d \n", d);
	
	
//	2. Toan tu So hoc
	int x = 10;
	int y = 4;
	printf("Tong: %d \n", x+y);
	printf("Hieu: %d \n", x-y);
	printf("Tich: %d \n", x*y);
	printf("Thuong: %.2f \n", (float) x/y);
	printf("Phan du: %d", x%y); // %: chia lay phan du
	

	return 0;
}
