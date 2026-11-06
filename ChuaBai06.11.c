#include <stdio.h>

int main(){
	
//	Bai 1:
	printf("*\n"); // \n : dung de xuong dong
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");
	
// 	Bai 2:
	printf("Anh ay noi: \"Hoc C that thu vi\"\n");
	printf("Duong dan: C:\\Users\\Lan\\bai1.c\n");
	
//	Bai 3:
	printf("Ten\t Tuoi\t Diem\n"); // \t: tao dau tab
	printf("Lan\t 20\t 8.5\n");
	printf("Nam\t 21\t 7.0\n");
	
//	Bai 4:
	int a = 1;
	int b = 2;
	int temp; // bien luu tam gia tri
	
	temp = b; // temp = b = 2
	b = a; // b = 1
	a = temp; // a = 2
	printf("a: %d \n",a);
	printf("b: %d \n",b);
	
//	Bai 5:
	const float PI = 3.14159;
	// float so thuc => %f
	float r; // r luu gia tri ban kinh
	
	printf("Nhap gia tri ban kinh R: ");
	// Gan gia tri nguoi nhap tu ban phim vao bien r
	scanf("%f", &r); 
	
	printf("Chu vi hinh tron: %.2f \n", 2*PI*r);
	printf("Dien tich hinh tro: %.2f \n", PI*r*r);	

//	Bai 6:
	// int: so nguyen => %d
	int dai;
	int rong;
	
	printf("Nhap chieu dai: ");
	scanf("%d", &dai);
	printf("Nhap chieu rong: ");
	scanf("%d", &rong);
	
	printf("Chu vi hinh chu nhat: %d \n", 2*(dai+rong));
	printf("Dien tich hinh chu nhat: %d \n", dai*rong);
	
	return 0;
}
