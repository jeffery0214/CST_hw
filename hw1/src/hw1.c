#include<stdio.h>

int main(void){
	int num = 0;
	int sum = 0;
	char ans = "";
	
	int i ;
	printf("歡迎來到心理測驗指數，以下提供十個問題來統計檢測一下你的心理狀態喔!\n");
	printf("-----注意以下每個問題均有 a, b, c, d, e五個選項 (分別代表非常不同意、不同意、無意見、同意、非常同意)。-----\n\n");
	
	for(i = 0;i < 10; i++){
		
		switch(i){
			case 0:
				printf("1.請問你是否覺得自己是個悲觀的人?\n");
				break;
			case 1:
				printf("2.請問你是否認為每天都過得不順利?\n");
				break;
			case 2:
				printf("3.請問你是否有過傷害自己的念頭?\n");
				break;
			case 3:
				printf("4.請問你是否覺得自己心中悶悶的，甚至偶爾會喘不過氣?\n");
				break;
			case 4:
				printf("5.請問你是否覺得自己不應該活在這個世界上?\n");
				break;
			case 5:
				printf("6.請問你是否覺得自己是個沒用的人?\n");
				break;
			case 6:
				printf("7.請問你是否常常精神不濟?\n");
				break;
			case 7:
				printf("8.請問你是否很難去相信一個人，甚至害怕他們會傷害你?\n");
				break;
			case 8:
				printf("9.請問你是否覺得自己壓力大、鬱悶?\n");
				break;
			case 9:
				printf("10.請問你是否覺得自己有心理疾病的情況?\n");
				break;
			default:		;
								
		}
		scanf("%c",&ans);
		char c = getchar();
		switch(ans){
			case 'a':
				num = 5;
				break;
			case 'b':
				num = 4;
				break;
			case 'c':
				num = 3;
				break;
			case 'd':
				num = 2;
				break;
			case 'e':
				num = 1;
				break;
			default:
				printf("輸入錯誤字母");					
		}
		sum += num;
		
	}
	printf("\n你的心裡指數總分:%d分\n",sum);
	if(sum <= 50 && sum >= 40){
	
		printf("你的心理指數區間為 40~50 間:非常棒喔!活潑開朗，沒有什麼煩惱呢，繼續保持!\n");
		
	}
	else if(sum <= 40 && sum >= 30){
		printf("你的心理指數區間為 30~40 間:還不錯!平常還算開心，但偶爾會焦躁不安，可以跟朋友聊聊喔!");
	}
	else if(sum <= 30 && sum >= 20){
		printf("你的心理指數區間為 20~30 間:些微恐慌，狀況不優，大概時不時會有壓力吧，建議跟家人朋友師長聊聊喔!須注意自己的身心狀況。");
		
	}
	else if(sum <= 20 && sum >= 10){
		printf("你的心理指數區間為 10~20 間:非常焦慮恐慌，狀況極度不優，無時無刻都感到壓迫，建議去找醫生談談、治療，親朋好友都會幫助你的，加油!");
		
	}
	else{

	}
	return 0;
} 
