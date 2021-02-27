#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	int i, j;
	FILE *out = fopen("BlockusBoard.txt", "w");
    for(i = 0; i < 14; i++){
        for(j = 0; j < 14; j++){
            if(j == 13){
                fprintf(out, "%s\n","N");
            }
            else{
                fprintf(out, "%s,","N");
            }
        }
    }
    
    FILE *out2 = fopen("LeftPattern_Red.txt", "w");
    for(i = 0; i < 21; i++){
        if(i == 0){
        	fprintf(out2, "[%s,", "1");
		}
		else if(i == 20){
			fprintf(out2, "%s]", "1");
		}
		else{
			fprintf(out2, "%s,", "1");
		}
    }
    FILE *out3 = fopen("LeftPattern_Blue.txt", "w");
    for(i = 0; i < 21; i++){
        if(i == 0){
        	fprintf(out3, "[%s,", "1");
		}
		else if(i == 20){
			fprintf(out3, "%s]", "1");
		}
		else{
			fprintf(out3, "%s,", "1");
		}
    }
    fclose(out);
    fclose(out2);
    fclose(out3);
    return 0;
}
