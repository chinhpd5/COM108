#include <stdio.h>

int main(){
//	Bài 1:

	int n; // luu tru gia tri
	printf("Nhap so n: ");
	scanf("%d", &n); // %d: int; %f: float
	if(n > 0){
		printf("So %d la so duong \n", n);
	}

	
//	Bài 2:

	int age;
	printf("Nhap tuoi: ");
	scanf("%d", &age);
	
	if(age >= 18){
		printf("Du tuoi truong thanh \n");
	}else{
		printf("Chua du tuoi truong thanh \n");
	}


// 	Bài 3:

	int a, b;
	printf("Phuong trinh: ax + b = 0 \n");
	printf("Nhap he so a: ");
	scanf("%d", &a);
	
	printf("Nhap he so b: ");
	scanf("%d", &b);
	
	if(a != 0){
		printf("Phuong trinh co nghiem = %.2f \n", (float) -b/a);
	}else if(a == 0 && b ==0){
		printf("Phuong trinh vo so nghiem \n");
	}else{
		printf("Phuong trinh vo nghiem \n");
	}


//	Bài 4:


	int soA, soB;
	printf("Nhap so A: ");
	scanf("%d", &soA);
	printf("Nhap so B: ");
	scanf("%d", &soB);
	
	if(soB != 0){
		if(soA % soB == 0){
			printf("so A chia het cho so B \n");
		}else{
			printf("so A khong chia het cho so B \n");
		}
	}
	

//	Bài 5:
	float x,y,z;
	printf("Nhap so x: ");
	scanf("%f", &x);
	
	printf("Nhap so y: ");
	scanf("%f", &y);
	
	printf("Nhap so z: ");
	scanf("%f", &z);
	
	if(x == y && x == z){
		printf("3 so bang nhau \n");
	}else if(x > y  && x > z){
		printf("x la so lon nhat");
	}else if(y>x && y>z){
		printf("y la so lon nhat");
	}else{
		printf("z la so lon nhat");
	}

	return 0;
}
