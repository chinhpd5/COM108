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
	printf("Phan du: %d \n", x%y); // %: chia lay phan du
	
//	Toan tu tang giam (thuoc toan tu so hoc)
	
/*
	++ tang gia tri cua bien len 1 don vi
	Neu ++ dung truoc bien -> thuc thi ngay tai thoi diem
	Neu ++ dung sau bien -> thuc thi sau cau lenh
*/
	int e = 1;
//	printf("e: %d \n", ++e); 
	printf("e: %d \n", e++);
	printf("e: %d \n", e);

	

	return 0;
}
