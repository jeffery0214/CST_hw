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
    if((strcmp(Board[4][4], "N") == 0)|| (strcmp(Board[9][9], "N") == 0)){
    	return true;
	}
    else{
    	return false;
	}
    
}
void rotate(char (*puzzle)[PUZRC][PUZRC][20]){
    int i, j;
    char puztemp[PUZRC][PUZRC][20];
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

void construct(char puzzle[PUZNUM][PUZRC][PUZRC][20], String color){
    int i, j ,k;
    for(i = 0; i < 21; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 5;k++){
                strcpy(puzzle[i][j][k] ,"N");
                
            }
        }
    }
    strcpy(puzzle[0][0][0] , color);
    
    strcpy(puzzle[1][0][0] , color);
    strcpy(puzzle[1][0][1] , color);

    strcpy(puzzle[2][0][0] , color);
    strcpy(puzzle[2][0][1] , color);
    strcpy(puzzle[2][1][1] , color);

    strcpy(puzzle[3][0][0] , color);
    strcpy(puzzle[3][0][1] , color);
    strcpy(puzzle[3][0][2] , color);

    strcpy(puzzle[4][0][0] , color);
    strcpy(puzzle[4][0][1] , color);
    strcpy(puzzle[4][1][0] , color);
    strcpy(puzzle[4][1][1] , color);

    strcpy(puzzle[5][0][0] , color);
    strcpy(puzzle[5][0][1] , color);
    strcpy(puzzle[5][0][2] , color);
    strcpy(puzzle[5][1][0] , color);

    strcpy(puzzle[6][0][0] , color);
    strcpy(puzzle[6][0][1] , color);
    strcpy(puzzle[6][0][2] , color);
    strcpy(puzzle[6][1][1] , color);

    strcpy(puzzle[7][0][0] , color);
    strcpy(puzzle[7][0][1] , color);
    strcpy(puzzle[7][1][1] , color);
    strcpy(puzzle[7][1][2] , color);

    strcpy(puzzle[8][0][0] , color);
    strcpy(puzzle[8][0][1] , color);
    strcpy(puzzle[8][0][2] , color);
    strcpy(puzzle[8][0][3] , color);

    strcpy(puzzle[9][0][0] , color);
    strcpy(puzzle[9][0][1] , color);
    strcpy(puzzle[9][0][2] , color);
    strcpy(puzzle[9][1][0] , color);
    strcpy(puzzle[9][1][1] , color);

    strcpy(puzzle[10][0][0] , color);
    strcpy(puzzle[10][0][1] , color);
    strcpy(puzzle[10][0][2] , color);
    strcpy(puzzle[10][1][0] , color);
    strcpy(puzzle[10][1][2] , color);
    
    strcpy(puzzle[11][0][0] , color);
    strcpy(puzzle[11][0][1] , color);
    strcpy(puzzle[11][0][2] , color);
    strcpy(puzzle[11][1][1] , color);
    strcpy(puzzle[11][2][1] , color);

    strcpy(puzzle[12][0][0] , color);
    strcpy(puzzle[12][0][1] , color);
    strcpy(puzzle[12][0][2] , color);
    strcpy(puzzle[12][1][0] , color);
    strcpy(puzzle[12][2][0] , color);

    strcpy(puzzle[13][0][0] , color);
    strcpy(puzzle[13][0][1] , color);
    strcpy(puzzle[13][1][1] , color);
    strcpy(puzzle[13][1][2] , color);
    strcpy(puzzle[13][2][2] , color);

    strcpy(puzzle[14][0][0] , color);
    strcpy(puzzle[14][1][0] , color);
    strcpy(puzzle[14][1][1] , color);
    strcpy(puzzle[14][1][2] , color);
    strcpy(puzzle[14][2][2] , color);

    strcpy(puzzle[15][0][0] , color);
    strcpy(puzzle[15][1][0] , color);
    strcpy(puzzle[15][1][1] , color);
    strcpy(puzzle[15][1][2] , color);
    strcpy(puzzle[15][2][1] , color);

    strcpy(puzzle[16][0][1] , color);
    strcpy(puzzle[16][1][0] , color);
    strcpy(puzzle[16][1][1] , color);
    strcpy(puzzle[16][1][2] , color);
    strcpy(puzzle[16][2][1] , color);

    strcpy(puzzle[17][0][0] , color);
    strcpy(puzzle[17][0][1] , color);
    strcpy(puzzle[17][0][2] , color);
    strcpy(puzzle[17][0][3] , color);
    strcpy(puzzle[17][1][0] , color);

    strcpy(puzzle[18][0][0] , color);
    strcpy(puzzle[18][0][1] , color);
    strcpy(puzzle[18][0][2] , color);
    strcpy(puzzle[18][1][2] , color);
    strcpy(puzzle[18][1][3] , color);

    strcpy(puzzle[19][0][0] , color);
    strcpy(puzzle[19][0][1] , color);
    strcpy(puzzle[19][0][2] , color);
    strcpy(puzzle[19][0][3] , color);
    strcpy(puzzle[19][1][1] , color);

    strcpy(puzzle[20][0][0] , color);
    strcpy(puzzle[20][0][1] , color);
    strcpy(puzzle[20][0][2] , color);
    strcpy(puzzle[20][0][3] , color);
    strcpy(puzzle[20][0][4] , color);


}
void flip(char (*puzzle)[PUZRC][PUZRC][20]){
    int i, j;
    char puztemp[PUZRC][PUZRC][20];
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

void ini_end(char (*puzzle)[PUZRC][PUZRC][20], int *ini_r, int *ini_c, int *end_r, int *end_c, String color){
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
bool placeable(char (*puzzle)[PUZRC][PUZRC][20], char Board[ROW][COLUMN][20], int k, int t, int *ini_r, int *end_r, int *ini_c, int *end_c, String color){
    int i, j;
    bool canplace;
    bool pass1 = true;
    bool pass2 = false;
    bool pass3 = true;
   
    for(i = *ini_r; i < *end_r + 1; i++){
        for(j = *ini_c; j < *end_c + 1; j++){
            int m = i+k-*ini_r;
            int n = j+t-*ini_c;
            if((m > 13) || (n > 13) || (m < 0) || (n < 0)){
                pass3 = false;
                break;
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
        if((!pass1) || (!pass3)){
            break;
        }
    }
    canplace = pass1 & pass2 & pass3;
    
   
    return canplace;
}
void findarc(char Board[ROW][COLUMN][20], int *k, int *t, int *n, String color){
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
void place(int k, int t, int *ini_r, int *end_r, int *ini_c, int *end_c,char Board[ROW][COLUMN][20], char (*puzzle)[PUZRC][PUZRC][20]){
    int i,j;
    for(i = *ini_r; i < *end_r + 1; i++){
        for(j = *ini_c; j < *end_c + 1; j++){
            int m = i-*ini_r+k;
            int n = j-*ini_c+t;
            if(strcmp(Board[m][n], "N") == 0){
                strcpy(Board[m][n], (*puzzle)[i][j]);
            }
            
            
            
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

int main(int argc, char *argv[]){
    int i, j, m, l, h, e;
    int n;

    int k[14] = {0};
    int t[14] = {0}; 
    char Board[ROW][COLUMN][20];
    int pattern[PUZNUM];
    char puzzle[PUZNUM][PUZRC][PUZRC][20];
    String color;
    String color2;
    bool notpass;
    if(strcmp(argv[1],"Red") == 0){
        color = "R";
    }
    else{
        color = "B";
    }
    if(strcmp(argv[1],"Red") == 0){
        color2 = "B";
    }
    else{
        color2 = "R";
    }
    String name1 = argv[2];
    String name2 = argv[3];
    String name3 = argv[4];

    char temp[2];
    int ini_r, ini_c, end_r, end_c;
    
    
    
    bool place_able;
    FILE *in1 = fopen(argv[2],"r");
    FILE *in2 = fopen(argv[3],"r");

	i = 0;
    j = 0;
    while(fgets(temp, sizeof(temp), in1) != NULL){
    
    
    	
       
        if(strcmp(temp, ",") == 0){
		
        }
        else if(strcmp(temp, "\n") == 0){
            i++;
        }
        else{
            strcpy(Board[i][j], temp);
           
            j++;
            if(j == 14){
            	j = 0;
			}
        }
       

    }
     
   
    construct(puzzle,color);
    
    
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
		
	
    if(firstplace(Board)){
        ini_end(puzzle[15], &ini_r, &ini_c, &end_r, &end_c, color);
        if(strcmp(Board[9][9], color2) == 0){
            place(4,4,&ini_r,&end_r,&ini_c,&end_c,Board,puzzle[15]);
        }
        else if(strcmp(Board[4][4], color2) == 0){
            rotate(puzzle[15]);
            rotate(puzzle[15]);
            ini_end(puzzle[15], &ini_r, &ini_c, &end_r, &end_c, color);
            place(7,7,&ini_r,&end_r,&ini_c,&end_c,Board,puzzle[15]);
        }
        else{
            
            place(4,4,&ini_r,&end_r,&ini_c,&end_c,Board,puzzle[15]);
        }
        pattern[15] = 0;
    }
    
    else{
        notpass = false;
        n = 0;
        findarc(Board, k, t, &n, color);
        
        for(m = 20; m >= 0; m--){
            if(pattern[m] == 1){
                for(i = 0; i < n; i++){
                    for(j = 0; j < 2; j++){
                        for(l = 0; l < 4; l++){
                           
                            ini_end(puzzle[m], &ini_r, &ini_c, &end_r, &end_c, color);
                            int q = end_r - ini_r + 1;
                            int w = end_c - ini_c + 1;
                            for(h = -(q - 1); h < q; h++){
                                for(e = -(w - 1) ; e < w; e++){
                                    place_able = false;
                                	if((k[i] + h < 0) || (t[i] + e < 0) || (k[i] + h > 13) || (t[i] + e > 13)) {
                                		
                                	}
                                    else{
                                        place_able = placeable(puzzle[m], Board, k[i] + h, t[i] + e, &ini_r, &end_r, &ini_c, &end_c, color);
                                        notpass = notpass | place_able;   
                                        if(place_able){
                                              place(k[i] + h, t[i] + e, &ini_r, &end_r, &ini_c, &end_c, Board, puzzle[m]);
                                              pattern[m] = 0;
                                              break;
                                        }
                                    }
                                    if(place_able){
                                        break;
                                    }
                                    
                                }
                                if(place_able){
                                    break;
                                }
                            }
                            if(place_able){
                                break;
                            }
                            
                            rotate(puzzle[m]);
                            
                        }
                        if(place_able){
                            break;
                        }	
                        flip(puzzle[m]);

                    }
                    if(place_able){
                        break;
                    }
                
                }
            }
            if(place_able){
                break;
            }
           
        }
        if(!notpass){
            return 1;
        }
        
    }
	
    FILE *out = fopen(argv[2], "w");
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
    FILE *out2 = fopen(argv[3], "a");
    char outpat[20];
    for(i = 0; i < 21; i++){
    	sprintf(outpat, "%d", pattern[i]);
        if(i == 0){
        	fprintf(out2, "\n[%s,", outpat);
		}
		else if(i == 20){
			fprintf(out2, "%s]", outpat);
		}
		else{
			fprintf(out2, "%s,", outpat);
		}
    }
    fclose(out);
    fclose(out2);
    
    return 0;

}

