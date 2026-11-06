#include <stdio.h>

int main(){
	
//	day la chu thich noi dung in ra man hinh
//	printf("Xin chao SA2101");

/*
	day 
	la
	chu thich
	tren nhieu dong
*/
//	\n la ky tu xuong dong
	printf("Xin chao SA2101\n");
	printf("Xin chao SA2102\n");
	printf("Xin chao SA2103\n");
	
//	\t la cach ra 1 khoang
	printf("Ho va ten: chinhpd5\t Tuoi: 20 \n");
	printf("dau xuoc: \\ \n");
	printf("dau nhay kep: \" \n");
	printf("dau phan tram: %% \n");
	
//	kieu so nguyen: int
	int age = 20;
	int score = -10;
	printf("Toi: %d tuoi,và duoc: %d diem\n",age,score);
	
//	kieu so thuc: float hoac double
	float dola = 8.5;
	printf("gia tri dola: %.2f \n",dola);
	
	double pi = 3.1415926535;
	printf("so PI: %f \n",pi);

//	kieu ky tu: char
//	chi chua duy nhat 1 ky tu: %c
	char kytu = 'c';
	printf("Ky tu: %c \n",kytu);
	
//	Chuoi: %s
	char name[] = "Phi Duc Chinh";
	printf("Ho va ten: %s",name);
	
	return 0;
}
