#include <stdio.h>
 
int main(){
//	3. Toan tu so sanh: >, <, >=, <=, ==, !=
/*	
	Ket qua tra ve:
	Neu dung (true) => 1
	Neu sai (false) => 0
*/
	int a = 2;
	int b = 1;
	printf("%d \n", a>b);
	printf("%d \n", a<b);
	printf("%d \n", a==b);
	printf("%d \n", a!=b);
	
//	4. Toan tu logic
/*
	Ket hop cac bieu thuc dieu kien: &&, ||, !
	Vi du bieu thuc dieu kien: a>b, a==b,...
	thuong duoc su dung trong cau dieu kien (if)
*/
/*
	&&:
	- Dung: khi tat ca bieu thuc dieu kien dung
	- Sai: Khi it nhat co 1 bieu thuc dieu kien sai
*/
	printf("-----------------------\n");
	int x = 1;
	int y = 2;
	int result1 = (x>0) && (y>0); //1
	int result2 = (x>1) && (y>1); //0
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);

/*
	||:
	- Sai: Khi tat ca bieu thuc dieu dien sai
	- Dung: khi it nhat co 1 bieu thuc dieu kien dung
*/
	int result3 = (x<0) || (y<0); // 0: sai
	int result4 = (x>1) || (y>1); // 1: dung
	printf("result3: %d \n", result3);
	printf("result4: %d \n", result4);
	
/*
	!: phu dinh
	chuyen tu dung(true): 1 -> sai(false): 0
	chuyen tu sai(false): 0 -> dung(true): 1
*/
	printf("Phu dinh result3: %d \n", !result3);
	printf("Phu dinh result4: %d \n", !result4);
	
	
//	Cau dieu kien: IF, dung de kiem tra thoa man dieu kien hay khong
	int dk = -123;
	if(dk > 0){ 
//  neu bieu thuc dieu kien dung -> chay logic ben trong
		printf("dk la so nguyen duong \n");
	}
	
//	du dung hay sai: van duoc chay vi nam ngoai { }
	printf("Ket thuc \n");

//	Cau dieu kien if...else
	int chanle = 10;
	
	if(chanle % 2 == 0){ // %: chia lay phan du
		printf("Day la so chan \n");
	}else{
		printf("Day la so le \n");
	}
	
//	Ket hop voi toan tu logic
//	Bai toan dang nhap: dung khi tai khoan va mat khau bang 1
	int username = 1;
	int password = 1;
	if(username == 1 && password == 1){
		printf("Dang nhap thanh cong \n");
	}else{
		printf("Sai tai khoan hoac mat khau \n");
	}
	
//	kiem tra 1 so nam ngoai khoang 10 - 20
	int num = 30;
	if(num < 10 || num > 20){
		printf("so %d nam ngoai khoang 10 - 20 \n", num);
	}else{
		printf("so %d nam trong khoang 10 - 20 \n", num);
	}

	return 0;
}
