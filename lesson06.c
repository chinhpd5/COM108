#include <stdio.h>

int main(){
	int day;
	printf("Nhap 1 so tu 1 den 7: ");
	scanf("%d", &day);
	
	switch(day){
		case 1: // neu day == 1
			printf("Thu hai\n");
			break;
		case 2: // neu day == 2
			printf("Thu ba \n");
			break;
		case 3: 
			printf("Thu tu \n");
			break;
		case 4: 
			printf("Thu nam \n");
			break;
		case 5: 
			printf("Thu sau \n");
			break;
		case 6: 
			printf("Thu bay \n");
			break;
		case 7: 
			printf("Chu nhat \n");
			break;
		default:
			printf("Khong thoa man gia tri tu 1-7");
	}
	
	return 0;
}
