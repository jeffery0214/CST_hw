#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define ROW 14
#define COLUMN 14
#define PUZNUM 21
#define PUZRC 5

typedef const char* String;
bool firstplace(char Board[ROW][COLUMN][20]){
    int i, j;
    bool nothing = true;
    for(i = 0; i < 14; i++){
        for(j = 0; j < 14; j++){
        	printf("   %s", Board[i][j]);
        	printf(" a ");
            if((i == 4 && j == 4) || (i == 9 && j == 9)){
                nothing = nothing & true;
            }
            else{
            	
                if((strcmp(Board[i][j], "N") == 0)){
                
                    nothing = nothing & true;
                }
                else{
                
                    nothing = nothing & false;
                    break;
                }    
            }
            
        }
        if(!nothing){
            break;
        }
    }
    return nothing;
}
void rotate(String (*puzzle)[PUZRC][PUZRC]){
    int i, j;
    String puztemp[PUZRC][PUZRC];
	for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5; j++){
           strcpy(puztemp[i][j], (*puzzle)[4-j][i]);
        }
    }
    for( i = 0; i < 5; i++){
        for( j = 0; j < 5; j++){
            strcpy((*puzzle)[i][j], puztemp[i][j]);
        }
    }
}

void construct(String puzzle[PUZNUM][PUZRC][PUZRC], String color){
    int i, j ,k;
    for(i = 0; i < 21; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 5;k++){
                puzzle[i][j][k] = "N";
            }
        }
    }
    puzzle[0][0][0] = color;
    
    puzzle[1][0][0] = color;
    puzzle[1][0][1] = color;

    puzzle[2][0][0] = color;
    puzzle[2][0][1] = color;
    puzzle[2][1][1] = color;

    puzzle[3][0][0] = color;
    puzzle[3][0][1] = color;
    puzzle[3][0][2] = color;

    puzzle[4][0][0] = color;
    puzzle[4][0][1] = color;
    puzzle[4][1][0] = color;
    puzzle[4][1][1] = color;

    puzzle[5][0][0] = color;
    puzzle[5][0][1] = color;
    puzzle[5][0][2] = color;
    puzzle[5][1][0] = color;

    puzzle[6][0][0] = color;
    puzzle[6][0][1] = color;
    puzzle[6][0][2] = color;
    puzzle[6][1][1] = color;

    puzzle[7][0][0] = color;
    puzzle[7][0][1] = color;
    puzzle[7][1][1] = color;
    puzzle[7][1][2] = color;

    puzzle[8][0][0] = color;
    puzzle[8][0][1] = color;
    puzzle[8][0][2] = color;
    puzzle[8][0][3] = color;

    puzzle[9][0][0] = color;
    puzzle[9][0][1] = color;
    puzzle[9][0][2] = color;
    puzzle[9][1][0] = color;
    puzzle[9][1][1] = color;

    puzzle[10][0][0] = color;
    puzzle[10][0][1] = color;
    puzzle[10][0][2] = color;
    puzzle[10][1][0] = color;
    puzzle[10][1][2] = color;
    
    puzzle[11][0][0] = color;
    puzzle[11][0][1] = color;
    puzzle[11][0][2] = color;
    puzzle[11][1][1] = color;
    puzzle[11][2][1] = color;

    puzzle[12][0][0] = color;
    puzzle[12][0][1] = color;
    puzzle[12][0][2] = color;
    puzzle[12][1][0] = color;
    puzzle[12][2][0] = color;

    puzzle[13][0][0] = color;
    puzzle[13][0][1] = color;
    puzzle[13][1][1] = color;
    puzzle[13][1][2] = color;
    puzzle[13][2][2] = color;

    puzzle[14][0][0] = color;
    puzzle[14][1][0] = color;
    puzzle[14][1][1] = color;
    puzzle[14][1][2] = color;
    puzzle[14][2][2] = color;

    puzzle[15][0][0] = color;
    puzzle[15][1][0] = color;
    puzzle[15][1][1] = color;
    puzzle[15][1][2] = color;
    puzzle[15][2][1] = color;

    puzzle[16][0][1] = color;
    puzzle[16][1][0] = color;
    puzzle[16][1][1] = color;
    puzzle[16][1][2] = color;
    puzzle[16][2][1] = color;

    puzzle[17][0][0] = color;
    puzzle[17][0][1] = color;
    puzzle[17][0][2] = color;
    puzzle[17][0][3] = color;
    puzzle[17][1][0] = color;

    puzzle[18][0][0] = color;
    puzzle[18][0][1] = color;
    puzzle[18][0][2] = color;
    puzzle[18][1][2] = color;
    puzzle[18][1][3] = color;

    puzzle[19][0][0] = color;
    puzzle[19][0][1] = color;
    puzzle[19][0][2] = color;
    puzzle[19][0][3] = color;
    puzzle[19][1][1] = color;

    puzzle[20][0][0] = color;
    puzzle[20][0][1] = color;
    puzzle[20][0][2] = color;
    puzzle[20][0][3] = color;
    puzzle[20][0][4] = color;


}
void flip(String (*puzzle)[PUZRC][PUZRC]){
    int i, j;
    String puztemp[PUZRC][PUZRC];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            strcpy(puztemp[i][j], (*puzzle)[4-i][j]);
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            strcpy((*puzzle)[i][j], puztemp[i][j]);
        }
    }
}

void ini_end(String (*puzzle)[PUZRC][PUZRC], int *ini_r, int *ini_c, int *end_r, int *end_c, String color){
    int i, j;
    bool find = false;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
           if(strcmp((*puzzle)[i][j], color) == 0){
               *ini_r = i;
               find = true;
               break;
           }
        }
        if(find){
            break;
        }
    }
    find = false;
    for(j = 0; j < 5; j++){
        for(i = 0; i < 5; i++){
           if(strcmp((*puzzle)[i][j], color) == 0){
               *ini_c = j;
               find = true;
               break;
           }
        }
        if(find){
            break;
        }
    }
    find = false;
    for(i = 4; i >= 0; i--){
        for(j = 0; j < 5; j++){
           if(strcmp((*puzzle)[i][j], color) == 0){
               *end_r = i;
               find = true;
               break;
           }
        }
        if(find){
            break;
        }
    }
    find = false;
    
    for(j = 4; j >= 0; j--){
        for(i = 0; i < 5; i++){
           if(strcmp((*puzzle)[i][j], color) == 0){
               *end_c = j;
               find = true;
               break;
           }
        }
        if(find){
            break;
        }
    }  
}
bool placeable(String (*puzzle)[PUZRC][PUZRC], String Board[ROW][COLUMN], int k, int t, int *ini_r, int *end_r, int *ini_c, int *end_c, String color){
    int i, j;
    bool canplace;
    bool pass1 = true;
    bool pass2 = false;
   
    
    for(i = *ini_r; i < *end_r + 1; i++){
        for(j = *ini_c; j < *end_c + 1; j++){
            int m = i+k-*ini_r;
            int n = j+t-*ini_c;
            if((m > 13) || (n > 13)){
                canplace = false;
            }
            else if(strcmp((*puzzle)[i][j], color) == 0){
                if(m == 0 && n == 0){
                    if((!(strcmp(Board[m+1][n], color) == 0)) && (!(strcmp(Board[m][n+1], color) == 0)) 
                        && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if(strcmp(Board[m+1][n+1], color) == 0){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                else if(m == 13 && n == 0){
                    if((!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0)) 
                        && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if(strcmp(Board[m-1][n+1], color) == 0){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                else if(m == 0 && n == 13){
                    if((!(strcmp(Board[m+1][n], color) == 0)) && (!(strcmp(Board[m][n-1], color) == 0))
                            && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if(strcmp(Board[m+1][n-1], color) == 0){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                else if(m == 13 && n == 13){
                    if( (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0)) 
                        && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if(strcmp(Board[m-1][n-1], color) == 0){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                else if(m == 0){
                    if((!(strcmp(Board[m+1][n], color) == 0)) && (!(strcmp(Board[m][n+1], color) == 0)) 
                        && (!(strcmp(Board[m][n-1], color) == 0)) && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }         
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if((strcmp(Board[m+1][n+1], color) == 0) || (strcmp(Board[m+1][n-1], color) == 0) ){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                else if(m == 13){
                    if((!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m][n-1], color) == 0)) 
                        && (!(strcmp(Board[m-1][n], color) == 0)) && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if((strcmp(Board[m-1][n-1], color) == 0) || (strcmp(Board[m-1][n+1], color) == 0)){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                else if(n == 0){
                    if((!(strcmp(Board[m+1][n], color) == 0)) && (!(strcmp(Board[m][n+1], color) == 0)) 
                        && (!(strcmp(Board[m-1][n], color) == 0)) && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if((strcmp(Board[m+1][n+1], color) == 0) || (strcmp(Board[m-1][n+1], color) == 0)){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                else if(n == 13){
                    if((!(strcmp(Board[m+1][n], color) == 0)) && (!(strcmp(Board[m][n-1], color) == 0)) 
                        && (!(strcmp(Board[m-1][n], color) == 0)) && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if(((strcmp(Board[m-1][n-1], color) == 0) || (strcmp(Board[m+1][n-1], color) == 0))){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                else{
                    if((!(strcmp(Board[m+1][n], color) == 0)) && (!(strcmp(Board[m][n+1], color) == 0)) 
                        && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0)) 
                        && (strcmp(Board[m][n], "N") == 0)){
                        pass1 = pass1 & true;
                    }
                    else{
                        pass1 = pass1 & false;
                        break;
                    }
                    if((strcmp(Board[m+1][n+1], color) == 0) || (strcmp(Board[m-1][n-1], color) == 0)
                        || (strcmp(Board[m+1][n-1], color) == 0) || (strcmp(Board[m-1][n+1], color) == 0)){
                        pass2 = pass2 | true;
                    }
                    else{
                        pass2 = pass2 | false;
                    }
                }
                
            }
            
        }
        if(!pass1){
            break;
        }
    }
    canplace = pass1 & pass2;
    
   
    return canplace;
}
void findarc(String Board[ROW][COLUMN], int *k, int *t, int *n, String color){
    int i, j;
    bool isarc;
    bool pass1;
    bool pass2;
    for(i = 0; i < 14; i++){
        for(j = 0; j < 14; j++){
            if(i == 0 && j == 0){
                if((!(strcmp(Board[i+1][j], color) == 0)) && (!(strcmp(Board[i][j+1], color) == 0)) 
                    && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }
                else{
                    pass1 = false;
                    break;
                }
                if(strcmp(Board[i+1][j+1], color) == 0){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            else if(i == 13 && j == 0){
                if((!(strcmp(Board[i][j+1], color) == 0)) && (!(strcmp(Board[i-1][j], color) == 0)) 
                    && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }
                else{
                    pass1 = false;
                    break;
                }
                if(strcmp(Board[i-1][j+1], color) == 0){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            else if(i == 0 && j == 13){
                if((!(strcmp(Board[i+1][j], color) == 0)) && (!(strcmp(Board[i][j-1], color) == 0))
                        && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }
                else{
                    pass1 = false;
                    break;
                }
                if(strcmp(Board[i+1][j-1], color) == 0){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            else if(i == 13 && j == 13){
                if( (!(strcmp(Board[i][j-1], color) == 0)) && (!(strcmp(Board[i-1][j], color) == 0)) 
                    && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }
                else{
                    pass1 = false;
                    break;
                }
                if(strcmp(Board[i-1][j-1], color) == 0){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            else if(i == 0){
                if((!(strcmp(Board[i+1][j], color) == 0)) && (!(strcmp(Board[i][j+1], color) == 0)) 
                    && (!(strcmp(Board[i][j-1], color) == 0)) && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }         
                else{
                    pass1 = false;
                    break;
                }
                if((strcmp(Board[i+1][j+1], color) == 0) || (strcmp(Board[i+1][j-1], color) == 0) ){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            else if(i == 13){
                if((!(strcmp(Board[i][j+1], color) == 0)) && (!(strcmp(Board[i][j-1], color) == 0)) 
                    && (!(strcmp(Board[i-1][j], color) == 0)) && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }
                else{
                    pass1 = false;
                    break;
                }
                if((strcmp(Board[i-1][j-1], color) == 0) || (strcmp(Board[i-1][j+1], color) == 0)){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            else if(j == 0){
                if((!(strcmp(Board[i+1][j], color) == 0)) && (!(strcmp(Board[i][j+1], color) == 0)) 
                    && (!(strcmp(Board[i-1][j], color) == 0)) && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }
                else{
                    pass1 = false;
                    break;
                }
                if((strcmp(Board[i+1][j+1], color) == 0) || (strcmp(Board[i-1][j+1], color) == 0)){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            else if(j == 13){
                if((!(strcmp(Board[i+1][j], color) == 0)) && (!(strcmp(Board[i][j-1], color) == 0)) 
                    && (!(strcmp(Board[i-1][j], color) == 0)) && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }
                else{
                    pass1 = false;
                    break;
                }
                if(((strcmp(Board[i-1][j-1], color) == 0) || (strcmp(Board[i+1][j-1], color) == 0))){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            else{
                if((!(strcmp(Board[i+1][j], color) == 0)) && (!(strcmp(Board[i][j+1], color) == 0)) 
                    && (!(strcmp(Board[i][j-1], color) == 0)) && (!(strcmp(Board[i-1][j], color) == 0)) 
                    && (strcmp(Board[i][j], "N") == 0)){
                    pass1 = true;
                }
                else{
                    pass1 = false;
                    break;
                }
                if((strcmp(Board[i+1][j+1], color) == 0) || (strcmp(Board[i-1][j-1], color) == 0)
                    || (strcmp(Board[i+1][j-1], color) == 0) || (strcmp(Board[i-1][j+1], color) == 0)){
                    pass2 = true;
                }
                else{
                    pass2 = false;
                }
            }
            isarc = pass1 & pass2;
            if(isarc){
                k[*n] = i;
                t[*n] = j;
                *n = *n + 1;
            }
            
        }
       
    }
}
void place(int k, int t, int *ini_r, int *end_r, int *ini_c, int *end_c,String Board[ROW][COLUMN], String (*puzzle)[PUZRC][PUZRC]){
    int i,j;
    for(i = *ini_r; i < *end_r; i++){
        for(j = *ini_c; j < *end_c; j++){
            int m = i-*ini_r+k;
            int n = j-*ini_c+t;
            strcpy(Board[m][n], (*puzzle)[i][j]);
            
        }
    }
}
/*void arc_area(String Board[ROW][COLUMN], int *t_arc, int *t_area, String color){
    for(i = 0; i < 14; i++){
        for(j = 0; j < 14; j++){
            if(i == 0 && j == 0){
                if((!(strcmp(Board[i+1][j], color) == 0)) && (!(strcmp(Board[m][n+1], color) == 0)) 
                    && ((strcmp(Board[m+1][n+1], color) == 0) || (strcmp(Board[m+1][n+1], color2) == 0))
                    && (strcmp(Board[m][n], "N") == 0)){
                        *t_arc = *t_arc + 1;
                        *t_area = *t_area + 
                    }
            }
        }
    }
}*/

int main(){
    int i, j, m, l, h, e;
    int *n;

    int k[14] = {0};
    int t[14] = {0}; 
    char Board[ROW][COLUMN][20];
    int pattern[PUZNUM];
    String puzzle[PUZNUM][PUZRC][PUZRC];
    String color;
    String color2;

    char temp[2];
    int *ini_r, *ini_c, *end_r, *end_c;
    
    color = "R";
    color2 = "B";
    bool place_able;
    FILE *in1 = fopen("BlockusBoard.txt","r");
    FILE *in2 = fopen("LeftPattern_Color.txt","r");

	i = 0;
    j = 0;
    while(fgets(temp, sizeof(temp), in1) != NULL){
    	printf("%s", temp);
    
    	
       
        if(strcmp(temp, ",") == 0){
			printf("a");
        }
        else if(strcmp(temp, "\n") == 0){
        	
            i++;
            printf("%d",i);
        }
        else{
        	printf("%d",j);
            strcpy(Board[i][j], temp);
            printf("   %s", Board[i][j]);
            j++;
            if(j == 14){
            	j = 0;
			}
        }
       

    }
    
     printf("   %s", Board[2][2]);
    construct(puzzle,color);
    for(i = 0; i < 21; i++){
    	 printf("\n\n");
        for(j = 0; j < 5; j++){
       	 printf("\n");
            for(l = 0; l < 5;l++){
                printf("%s", puzzle[i][j][l]);
            }
        }
    }
    
    fseek(in2, -43L, SEEK_END);
    i = 0;
    while(fgets(temp, sizeof(temp), in2) != NULL){
       
        if((strcmp(temp, "1") == 0) || (strcmp(temp, "0") == 0) ){
           	pattern[i] = atoi(temp);
            i++;
        }
        if(i > 20){
            break;
        }

    }
   
    fclose(in1);
    fclose(in2);
		
	printf("   %s", Board[0][0]);
    if(firstplace(Board)){
    	printf("hhhh");
        ini_end(puzzle[15], ini_r, ini_c, end_r, end_c, color);
        if((strcmp(Board[4][4], "N") == 0) && (strcmp(Board[9][9], color2) == 0)){
            place(4,4,ini_r,end_r,ini_c,end_c,Board,puzzle[15]);
        }
        else if((strcmp(Board[9][9], "N") == 0) && (strcmp(Board[4][4], color2) == 0)){
            place(9,9,ini_r,end_r,ini_c,end_c,Board,puzzle[15]);
        }
        else{
            place(4,4,ini_r,end_r,ini_c,end_c,Board,puzzle[15]);
        }
    }
    /*
    else{
        *n = 0;
        findarc(Board, k, t, n, color);
        for(m = 20; m >= 0; m--){
            for(i = 0; i < n; i++){
                for(j = 0; j < 1; j++){
                    for(l = 0; l < 4; l++){
                        place_able = true;
                        ini_end(puzzle[m], ini_r, ini_c, end_r, end_c, color);
                        for(h = -5; h < 6; h++){
                            for(e = -5 ; e < 6; e++){
                                place_able = placeable(puzzle[m], Board, k[i] + h, t[i] + e, ini_r, end_r, ini_c, end_c, color) & place_able;
                                
                            }
                        }
                        if(place_able){
                            place(k[i], t[i], ini_r, end_r, ini_c, end_c, Board, puzzle[m]);
                        }
                        rotate(puzzle[m]);
                        
                    }
                    flip(puzzle[m]);

                }
                
            }
        }
    }

    FILE *out = fopen("BlockusBoard.txt", "w");
    for(i = 0; i < 14; i++){
        for(j = 0; j < 14; j++){
            if(j == 13){
                fprintf(out, "%s\n", Board[i][j]);
            }
            else{
                fprintf(out, "%s,", Board[i][j]);
            }
        }
    }
    fclose(out);
    */
    return 0;

}

