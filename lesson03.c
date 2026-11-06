#include <stdio.h>

int main(){
	int age = 20; // khai bao bien
	age = 21; // gan lai gia tri cho bien
	
	printf("Tuoi: %d \n", age);
	
//	Kieu 1: phiDucChinh
//	Kieu 2: phi_duc_chinh
// 	Kieu 3: PhiDucChinh
	
	char key = 'a'; // 1 ky tu
	char myName[] = "chinhpd5";
	printf("Ho va ten: %s \n", myName);
	
	float myScore = 9.5;
	printf("Diem: %.1f \n", myScore);
	
//	Hang so
	const float PI = 3.14; // const the hien bien (Hang so)
//	PI = 3.15; Loi: Hang so khong the thay doi gia tri
	printf("PI: %f \n", PI);
	
//	Ung dung bien:
	int a = 20;
	int b = 10;
	
	int sum = a+b;
	printf("Tong: %d \n", sum);
	printf("Hieu: %d \n", a-b);
	printf("Tich: %d \n", a*b);
	printf("Thuong: %d \n", a/b);
	
	char name[100];
	printf("Nhap ten cua ban: ");
	// gan gia tri nhap tu ban phim vào bien name
	scanf("%99s", &name);
	printf("Xin chao %s, den voi lop SA2101",name);
	
	return 0;
}
