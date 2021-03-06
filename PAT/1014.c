#include<stdio.h>
#include<string.h>

void week(char str){
	
	char weekname[][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	char week[8] = "ABCDEFG";
	int i;
	
	for(i = 0; i < 7; i++){
		if(str == week[i]){
			printf("%s ", weekname[i]);
		}
	}
}

void hour(char str){
	
	int hour[24], i;
	char hourname[24] = "0123456789ABCDEFGHIJKLMN";
	
	for(i = 0; i < 24; i++){
		hour[i] = i;
		if(str == hourname[i]){
			printf("%02d:", hour[i]);
		}
	}
}

int main(void){
	
	char a[61], b[61], c[61], d[61];
	int i;
	
	scanf("%s %s %s %s", a, b, c, d);
	
	for(i = 0; i < strlen(a); i++){
		if(a[i] == b[i] && a[i] >= 'A' && a[i] <= 'Z'){
			week(a[i]);
			i++;
			break;
		}
	}
	while(i < strlen(a)){
		if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9')){
			if(a[i] == b[i]){
				hour(a[i]);
				break;
			}
		}
		i++;
	}
	
	for(i = 0; i < strlen(c); i++){
		if( c[i] >= 'a' && c[i] <= 'z' && c[i] == d[i]){
			printf("%02d", i);
			break;
		}
	}
		
	return 0;
}
