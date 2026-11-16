#include <stdio.h>

int main(){
//	Vong lap khong biet truoc so lan lap
//	While:
//	int i = 1; // bien chay
//	
//	while(i <= 10) { // dieu kien lap: thoa man DK
////		Neu khong thoa man DK: Khong chay
//		printf("%d \n", i);
//		i++; // tang gia tri i
//	}

//	do-while:
//	int i = 1;
//	
//	do {
//		printf("%d \n",i);
//		i++;
//	}while(i <= 10);

// Bai toan:
	int luaChon;
	do {
		printf("\n\n\n=============MENU=============\n");
		printf("1. Danh sach mon an. \n");
		printf("2. Goi mon an. \n");
		printf("3. Thanh toan. \n");
		printf("0. Ket thuc. \n");
		
		printf("Vui long nhap lua chon cua ban: ");
		scanf("%d", &luaChon);
		
		switch(luaChon){
			case 1:
				printf("Day la danh sach mon an. \n");
				break;
			case 2:
				printf("Day la chuc nang goi mon an. \n");
				break;
			case 3:
				printf("Day la chuc nang thanh toan. \n");
				break;
			case 0:
				printf("Ket thuc! \n");
				break;
			default:
				printf("Nhap sai lua chon. \n");
		}
	}while(luaChon != 0);
	
	
	return 0;
}
