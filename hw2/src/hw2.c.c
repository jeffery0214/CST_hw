#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define ROW 9//1-9節 
#define COLUMN 6//星期一到五 
#define LENGTH 10000//課程字數長度 
int main(){
	int index = 0;
	int i,j,k;
	int tsizeMax = 0;
	//創建課表欄位陣列 
	char class[ROW][COLUMN][LENGTH];
	//更改課表名稱的暫存陣列 
	char name[LENGTH];
	char name2[LENGTH];
	//每行每列的字數、大小 
	int size[ROW][COLUMN];
	//每行最長的字數、大小 
	int sizemax[COLUMN] = {0};
	//初始化課表陣列的值 
	for(i = 0; i < ROW; i++){
			
		for(j = 0; j < COLUMN; j++){
			
			strcpy(class[i][j], "");;
		}
	}
	strcpy(class[1][0], "1");
	strcpy(class[2][0], "2");
	strcpy(class[3][0], "3");
	strcpy(class[4][0], "4");
	strcpy(class[5][0], "5");
	strcpy(class[6][0], "6");
	strcpy(class[7][0], "7");
	strcpy(class[8][0], "8");
	strcpy(class[0][0], "");
	strcpy(class[0][1], "一");
	strcpy(class[0][2], "二");
	strcpy(class[0][3], "三");
	strcpy(class[0][4], "四");
	strcpy(class[0][5], "五");


	
	printf("歡迎進入選課系統:\n\n");
	//迴圈直到使用者選擇跳出系統 
	while(index != 4){
		tsizeMax = 0;
		printf("主選單:\n");
		printf("  -----------------------\n");
		printf("  | 功能編號 | 功能     |\n");
		printf("  -----------------------\n");
		printf("  |   1      | 新增課程 |\n");
		printf("  -----------------------\n");
		printf("  |   2      | 刪除課程 |\n");
		printf("  -----------------------\n");
		printf("  |   3      | 編輯課程 |\n");
		printf("  -----------------------\n");
		printf("  |   4      | 離開系統 |\n");
		printf("  -----------------------\n");
		//計算每行每列的字數大小	
		for(i = 0; i < ROW; i++){
			for(j = 0; j < COLUMN; j++){
				size[i][j] = strlen(class[i][j]); 
			}
		}
		//計算每行最長的字數大小	
		for(j = 0; j < COLUMN; j++){
			for(i = 0; i < ROW; i++){
				if(size[i][j] > sizemax[j]){
					sizemax[j] = size[i][j];
				}
				else{
					
				}
			}
			tsizeMax += sizemax[j];
 		}
 		//畫出課表 
		printf("\n課表如下:\n");
		for(k = 0; k < tsizeMax + 19; k++){
			printf("-");
		}
		printf("\n");
		for(i = 0; i < ROW; i++){
			for(j = 0; j < COLUMN; j++){
				
				int spaceSize = (sizemax[j] - size[i][j]) / 2;
				if(j == 0){
					printf("|");
				}
				if(((sizemax[j] - size[i][j]) % 2 ) == 0){
					for(k = 0; k < spaceSize + 1; k++){
						printf(" ");
					}
					printf("%s", class[i][j]);
					for(k = 0; k < spaceSize + 1; k++){
						printf(" ");
					}
				}
				else{
					for(k = 0; k < spaceSize + 1; k++){
						printf(" ");
					}
					printf("%s", class[i][j]);
					for(k = 0; k < spaceSize + 2; k++){
						printf(" ");
					}
				}
				printf("|");
			}
			printf("\n");
			for(k = 0; k < tsizeMax + 19; k++){
						printf("-");
			}
			printf("\n");
		}
		bool wroIndex = true;
		while(wroIndex){
			bool error_1 = true;
			bool error_2 = true;
			printf("\n請輸入功能編號:");
			scanf("%d",&index);
			char c = getchar();
			//新增課程 
			if(index == 1){
					
				printf("請輸入新增課程名稱:");
				scanf("%s",name);
				while(error_1){	
					error_2 = true;
					while(error_2){
						printf("\n請輸入週次:");
						scanf("%d",&j);
						char c = getchar();
						if((j >= 1) && (j <= 5)){
							error_2 = false;
						}
						else{
							printf("輸入範圍錯誤，重新輸入\n");
						}
						
					}
					error_2 = true;
					while(error_2){
						printf("\n請輸入節次:");
						scanf("%d",&i);
						char c = getchar();
						if((i >= 1) && (i <= 8)){
							error_2 = false;
						}
						else{
							printf("輸入範圍錯誤，重新輸入\n");
						}
					}
					
					if(strcmp(class[i][j], "") == 0){
						error_1 = false;
						strcpy(class[i][j], name);
					
					}
					else{
						printf("此節已經有課不能排，請重新輸入週次與節次");
					}
				} 
			wroIndex = false;	
			}
			//刪除課程 
			else if(index == 2){
				
				printf("請輸入欲刪除課程名稱:");
				scanf("%s",name);
				for(i = 1; i < ROW; i++){
					for(j = 1; j < COLUMN; j++){
						if(strcmp(class[i][j], name) == 0){
							strcpy(class[i][j],"");
							error_1 = false;
						}

					}
				}
				 wroIndex = false;
			}
			//編輯課程 
			else if(index == 3){
				int input;
				printf("請輸入編輯方式:\n");
				printf("	輸入 1：清除特定時間的課程\n");
				printf("	輸入 2：更改某課程的名稱\n");
				
				scanf("%d",&input);
				char c = getchar();
				if(input == 1){
					error_2 = true;
					while(error_2){
							printf("\n請輸入週次:");
							scanf("%d",&j);
							char c = getchar();
							if((j >= 1) && (j <= 5)){
								error_2 = false;
							}
							else{
								printf("輸入範圍錯誤，重新輸入\n");
							}
							
						}
						error_2 = true;
						while(error_2){
							printf("\n請輸入節次:");
							scanf("%d",&i);
							char c = getchar();
							if((i >= 1) && (i <= 8)){
								error_2 = false;
							}
							else{
								printf("輸入範圍錯誤，重新輸入\n");
							}
						}
						strcpy(class[i][j], "");;
				}
				else if(input == 2){
					printf("\n請輸入原本的課程名稱:");
					scanf("%s",name);
					printf("\n請輸入新的課程名稱:");
					scanf("%s",name2);
					for(i = 1; i < ROW; i++){
						for(j = 1; j < COLUMN; j++){
							if(strcmp(class[i][j], name) == 0){
								strcpy(class[i][j], name2);
							} 
						}
					}
				}
				wroIndex = false;
			}
			//跳出系統 
			else if(index == 4){
				wroIndex = false;
			}
			else{
				printf("輸入錯誤編號。請重新輸入");
			} 
		}	
	
		
	}
	return 0;
}
