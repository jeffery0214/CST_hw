#include<stdio.h>

int main(void){
	int num = 0;
	int sum = 0;
	char ans = "";
	
	int i ;
	printf("�w��Ө�߲z������ơA�H�U���ѤQ�Ӱ��D�Ӳέp�˴��@�U�A���߲z���A��!\n");
	printf("-----�`�N�H�U�C�Ӱ��D���� a, b, c, d, e���ӿﶵ (���O�N��D�`���P�N�B���P�N�B�L�N���B�P�N�B�D�`�P�N)�C-----\n\n");
	
	for(i = 0;i < 10; i++){
		
		switch(i){
			case 0:
				printf("1.�аݧA�O�_ı�o�ۤv�O�Ӵd�[���H?\n");
				break;
			case 1:
				printf("2.�аݧA�O�_�{���C�ѳ��L�o�����Q?\n");
				break;
			case 2:
				printf("3.�аݧA�O�_���L�ˮ`�ۤv�����Y?\n");
				break;
			case 3:
				printf("4.�аݧA�O�_ı�o�ۤv�ߤ��e�e���A�Ʀܰ����|�ݤ��L��?\n");
				break;
			case 4:
				printf("5.�аݧA�O�_ı�o�ۤv�����Ӭ��b�o�ӥ@�ɤW?\n");
				break;
			case 5:
				printf("6.�аݧA�O�_ı�o�ۤv�O�ӨS�Ϊ��H?\n");
				break;
			case 6:
				printf("7.�аݧA�O�_�`�`�믫����?\n");
				break;
			case 7:
				printf("8.�аݧA�O�_�����h�۫H�@�ӤH�A�Ʀܮ`�ȥL�̷|�ˮ`�A?\n");
				break;
			case 8:
				printf("9.�аݧA�O�_ı�o�ۤv���O�j�B�{�e?\n");
				break;
			case 9:
				printf("10.�аݧA�O�_ı�o�ۤv���߲z�e�f�����p?\n");
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
				printf("��J���~�r��");					
		}
		sum += num;
		
	}
	printf("\n�A���߸̫����`��:%d��\n",sum);
	if(sum <= 50 && sum >= 40){
	
		printf("�A���߲z���ư϶��� 40~50 ��:�D�`�γ�!����}�ԡA�S������дo�O�A�~��O��!\n");
		
	}
	else if(sum <= 40 && sum >= 30){
		printf("�A���߲z���ư϶��� 30~40 ��:�٤���!���`�ٺ�}�ߡA�������|�Jļ���w�A�i�H��B�Ͳ���!");
	}
	else if(sum <= 30 && sum >= 20){
		printf("�A���߲z���ư϶��� 20~30 ��:�ǷL���W�A���p���u�A�j���ɤ��ɷ|�����O�a�A��ĳ��a�H�B�ͮv������!���`�N�ۤv�����ߪ��p�C");
		
	}
	else if(sum <= 20 && sum >= 10){
		printf("�A���߲z���ư϶��� 10~20 ��:�D�`�J�{���W�A���p���פ��u�A�L�ɵL�賣�P�������A��ĳ�h����ͽͽ͡B�v���A�˪B�n�ͳ��|���U�A���A�[�o!");
		
	}
	else{

	}
	return 0;
} 
