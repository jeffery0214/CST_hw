#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define ROW 9//1-9�` 
#define COLUMN 6//�P���@�줭 
#define LENGTH 10000//�ҵ{�r�ƪ��� 
int main(){
	int index = 0;
	int i,j,k;
	int tsizeMax = 0;
	//�ЫؽҪ����}�C 
	char class[ROW][COLUMN][LENGTH];
	//���Ҫ�W�٪��Ȧs�}�C 
	char name[LENGTH];
	char name2[LENGTH];
	//�C��C�C���r�ơB�j�p 
	int size[ROW][COLUMN];
	//�C��̪����r�ơB�j�p 
	int sizemax[COLUMN] = {0};
	//��l�ƽҪ�}�C���� 
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
	strcpy(class[0][1], "�@");
	strcpy(class[0][2], "�G");
	strcpy(class[0][3], "�T");
	strcpy(class[0][4], "�|");
	strcpy(class[0][5], "��");


	
	printf("�w��i�J��Ҩt��:\n\n");
	//�j�骽��ϥΪ̿�ܸ��X�t�� 
	while(index != 4){
		tsizeMax = 0;
		printf("�D���:\n");
		printf("  -----------------------\n");
		printf("  | �\��s�� | �\��     |\n");
		printf("  -----------------------\n");
		printf("  |   1      | �s�W�ҵ{ |\n");
		printf("  -----------------------\n");
		printf("  |   2      | �R���ҵ{ |\n");
		printf("  -----------------------\n");
		printf("  |   3      | �s��ҵ{ |\n");
		printf("  -----------------------\n");
		printf("  |   4      | ���}�t�� |\n");
		printf("  -----------------------\n");
		//�p��C��C�C���r�Ƥj�p	
		for(i = 0; i < ROW; i++){
			for(j = 0; j < COLUMN; j++){
				size[i][j] = strlen(class[i][j]); 
			}
		}
		//�p��C��̪����r�Ƥj�p	
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
 		//�e�X�Ҫ� 
		printf("\n�Ҫ�p�U:\n");
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
			printf("\n�п�J�\��s��:");
			scanf("%d",&index);
			char c = getchar();
			//�s�W�ҵ{ 
			if(index == 1){
					
				printf("�п�J�s�W�ҵ{�W��:");
				scanf("%s",name);
				while(error_1){	
					error_2 = true;
					while(error_2){
						printf("\n�п�J�g��:");
						scanf("%d",&j);
						char c = getchar();
						if((j >= 1) && (j <= 5)){
							error_2 = false;
						}
						else{
							printf("��J�d����~�A���s��J\n");
						}
						
					}
					error_2 = true;
					while(error_2){
						printf("\n�п�J�`��:");
						scanf("%d",&i);
						char c = getchar();
						if((i >= 1) && (i <= 8)){
							error_2 = false;
						}
						else{
							printf("��J�d����~�A���s��J\n");
						}
					}
					
					if(strcmp(class[i][j], "") == 0){
						error_1 = false;
						strcpy(class[i][j], name);
					
					}
					else{
						printf("���`�w�g���Ҥ���ơA�Э��s��J�g���P�`��");
					}
				} 
			wroIndex = false;	
			}
			//�R���ҵ{ 
			else if(index == 2){
				
				printf("�п�J���R���ҵ{�W��:");
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
			//�s��ҵ{ 
			else if(index == 3){
				int input;
				printf("�п�J�s��覡:\n");
				printf("	��J 1�G�M���S�w�ɶ����ҵ{\n");
				printf("	��J 2�G���Y�ҵ{���W��\n");
				
				scanf("%d",&input);
				char c = getchar();
				if(input == 1){
					error_2 = true;
					while(error_2){
							printf("\n�п�J�g��:");
							scanf("%d",&j);
							char c = getchar();
							if((j >= 1) && (j <= 5)){
								error_2 = false;
							}
							else{
								printf("��J�d����~�A���s��J\n");
							}
							
						}
						error_2 = true;
						while(error_2){
							printf("\n�п�J�`��:");
							scanf("%d",&i);
							char c = getchar();
							if((i >= 1) && (i <= 8)){
								error_2 = false;
							}
							else{
								printf("��J�d����~�A���s��J\n");
							}
						}
						strcpy(class[i][j], "");;
				}
				else if(input == 2){
					printf("\n�п�J�쥻���ҵ{�W��:");
					scanf("%s",name);
					printf("\n�п�J�s���ҵ{�W��:");
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
			//���X�t�� 
			else if(index == 4){
				wroIndex = false;
			}
			else{
				printf("��J���~�s���C�Э��s��J");
			} 
		}	
	
		
	}
	return 0;
}
