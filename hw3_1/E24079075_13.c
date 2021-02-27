#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define ROW 14
#define COLUMN 14
#define PUZNUM 21
#define PUZRC 5

typedef const char* String;
bool firstplace(char Board[ROW][COLUMN][20], String color){
    if(((strcmp(Board[4][4], "N") == 0) && (!(strcmp(Board[9][9], color) == 0))) 
        || ((strcmp(Board[9][9], "N") == 0) && (!(strcmp(Board[4][4], color) == 0)))){
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
void arcinfo(char (*puzzle)[PUZRC][PUZRC][20], char Board[ROW][COLUMN][20], int k, int t, int ini_r, int end_r, int ini_c, int end_c,int *opparc_r, int *opparc_c, 
                int *elmarc_r, int *elmarc_c, int *createarc_r, int *createarc_c, int *opparcnum, int *elmnum, int *createnum, int *oppedgenum,int *dest,bool *creat,
                bool *elmin, bool *oppo, String color, String color2){
    int i, j;
    for(i = ini_r; i < end_r+1; i++){
        for(j = ini_c; j < end_c+1; j++){
            int m = k+i-ini_r;
            int n = t+j-ini_c;
            if(strcmp((*puzzle)[i][j], color) == 0){
                if(m == 0 && n == 0){
                    
                    if((i + 1 > end_r) && (j + 1 > end_c)){
                        if(strcmp(Board[m+1][n+1], "N") == 0){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(i + 1 > end_r){
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j + 1 > end_c){
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((strcmp(Board[m+1][n+1], color) == 0) && (!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m+1][n], color) == 0))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if((strcmp(Board[m+1][n+1], color2) == 0) && (!(strcmp(Board[m][n+1], color2) == 0)) && (!(strcmp(Board[m+1][n], color2) == 0))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m+1][n], color2) == 0) || (strcmp(Board[m][n+1], color2) == 0)){
                       
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
                else if(m == 0 && n == 13){
                    if((i + 1 > end_r) && (j - 1 < ini_c)){
                        if(strcmp(Board[m+1][n-1], "N") == 0){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n - 1;
                            *createnum = *createnum + 1;
                            *dest = 1;
                            *creat = true;
                        }
                    }
                    else if(i + 1 > end_r){
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j - 1 < ini_c){
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((strcmp(Board[m+1][n-1], color) == 0) && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m+1][n], color) == 0))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if((strcmp(Board[m+1][n-1], color2) == 0) && (!(strcmp(Board[m][n-1], color2) == 0)) && (!(strcmp(Board[m+1][n], color2) == 0))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m+1][n], color2) == 0) || (strcmp(Board[m][n-1], color2) == 0)){
                       
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
                else if(m == 13 && n == 0){
                    if((i - 1 < ini_r) && (j + 1 > end_c)){
                        if(strcmp(Board[m-1][n+1], "N") == 0){
                            createarc_r[*createnum] = m - 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 2;
                            *creat = true;
                        }
                    }
                    else if(i - 1 < ini_r){
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j + 1 > end_c){
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((strcmp(Board[m-1][n+1], color) == 0) && (!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if((strcmp(Board[m-1][n+1], color2) == 0) && (!(strcmp(Board[m][n+1], color2) == 0)) && (!(strcmp(Board[m-1][n], color2) == 0))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m-1][n], color2) == 0) || (strcmp(Board[m][n+1], color2) == 0)){
                       
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
                else if(m == 13 && n == 13){
                    if((i - 1 < ini_r) && (j - 1 < ini_c)){
                        if(strcmp(Board[m-1][n-1], "N") == 0){
                            createarc_r[*createnum] = m - 1;
                            createarc_c[*createnum] = n - 1;
                            *createnum = *createnum + 1;
                            *dest = 3;
                            *creat = true;
                        }
                    }
                    else if(i - 1 < ini_r){
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j - 1 < ini_c){
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((strcmp(Board[m-1][n-1], color) == 0) && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if((strcmp(Board[m-1][n-1], color2) == 0) && (!(strcmp(Board[m][n-1], color2) == 0)) && (!(strcmp(Board[m-1][n], color2) == 0))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m-1][n], color2) == 0) || (strcmp(Board[m][n-1], color2) == 0)){
                       
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
                else if(m == 0){
                    if((i + 1 > end_r) && (j + 1 > end_c)){
                        if(strcmp(Board[m+1][n+1], "N") == 0){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(i + 1 > end_r){
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j + 1 > end_c){
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((i + 1 > end_r) && (j - 1 < ini_c)){
                        if(strcmp(Board[m+1][n-1], "N") == 0){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n - 1;
                            *createnum = *createnum + 1;
                            *dest = 1;
                            *creat = true;
                        }
                    }
                    else if(i + 1 > end_r){
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j - 1 < ini_c){
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if(((strcmp(Board[m+1][n+1], color) == 0) && (!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m+1][n], color) == 0))) 
                            || ((strcmp(Board[m+1][n-1], color) == 0) && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m+1][n], color) == 0)))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if(((strcmp(Board[m+1][n+1], color2) == 0) && (!(strcmp(Board[m][n+1], color2) == 0)) && (!(strcmp(Board[m+1][n], color2) == 0))) 
                            || ((strcmp(Board[m+1][n-1], color2) == 0) && (!(strcmp(Board[m][n-1], color2) == 0)) && (!(strcmp(Board[m+1][n], color2) == 0)))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m+1][n], color2) == 0) || (strcmp(Board[m][n+1], color2) == 0) 
                        || (strcmp(Board[m][n-1], color2) == 0)){
                      
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
                else if(m == 13){
                    if((i - 1 < ini_r) && (j + 1 > end_c)){
                        if(strcmp(Board[m-1][n+1], "N") == 0){
                            createarc_r[*createnum] = m - 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 2;
                            *creat = true;
                        }
                    }
                    else if(i - 1 < ini_r){
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j + 1 > end_c){
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((i - 1 < ini_r) && (j - 1 < ini_c)){
                        if(strcmp(Board[m-1][n-1], "N") == 0){
                            createarc_r[*createnum] = m - 1;
                            createarc_c[*createnum] = n - 1;
                            *createnum = *createnum + 1;
                            *dest = 3;
                            *creat = true;
                        }
                    }
                    else if(i - 1 < ini_r){
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j - 1 < ini_c){
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if(((strcmp(Board[m-1][n+1], color) == 0) && (!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0))) 
                            || ((strcmp(Board[m-1][n-1], color) == 0) && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0)))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if(((strcmp(Board[m-1][n+1], color2) == 0) && (!(strcmp(Board[m][n+1], color2) == 0)) && (!(strcmp(Board[m-1][n], color2) == 0))) 
                            || ((strcmp(Board[m-1][n-1], color2) == 0) && (!(strcmp(Board[m][n-1], color2) == 0)) && (!(strcmp(Board[m-1][n], color2) == 0)))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m-1][n], color2) == 0) || (strcmp(Board[m][n+1], color2) == 0) 
                        || (strcmp(Board[m][n-1], color2) == 0)){
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
                else if(n == 13){
                    if((i + 1 > end_r) && (j - 1 < ini_c)){
                        if(strcmp(Board[m+1][n-1], "N") == 0){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n - 1;
                            *createnum = *createnum + 1;
                            *dest = 1;
                            *creat = true;
                        }
                    }
                    else if(i + 1 > end_r){
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j - 1 < ini_c){
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((i - 1 < ini_r) && (j - 1 < ini_c)){
                        if(strcmp(Board[m-1][n-1], "N") == 0){
                            createarc_r[*createnum] = m - 1;
                            createarc_c[*createnum] = n - 1;
                            *createnum = *createnum + 1;
                            *dest = 3;
                            *creat = true;
                        }
                    }
                    else if(i - 1 < ini_r){
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j - 1 < ini_c){
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if(((strcmp(Board[m+1][n-1], color) == 0) && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m+1][n], color) == 0))) 
                            || ((strcmp(Board[m-1][n-1], color) == 0) && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0)))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if(((strcmp(Board[m+1][n-1], color2) == 0) && (!(strcmp(Board[m][n-1], color2) == 0)) && (!(strcmp(Board[m+1][n], color2) == 0))) 
                            || ((strcmp(Board[m-1][n-1], color2) == 0) && (!(strcmp(Board[m][n-1], color2) == 0)) && (!(strcmp(Board[m-1][n], color2) == 0)))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m+1][n], color2) == 0) || (strcmp(Board[m-1][n], color2) == 0) 
                        || (strcmp(Board[m][n-1], color2) == 0)){
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
                else if(n == 0){
                    if((i - 1 < ini_r) && (j + 1 > end_c)){
                        if(strcmp(Board[m-1][n+1], "N") == 0){
                            createarc_r[*createnum] = m - 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 2;
                            *creat = true;
                        }
                    }
                    else if(i - 1 < ini_r){
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j + 1 > end_c){
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((i + 1 > end_r) && (j + 1 > end_c)){
                        if(strcmp(Board[m+1][n+1], "N") == 0){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(i + 1 > end_r){
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j + 1 > end_c){
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if(((strcmp(Board[m-1][n+1], color) == 0) && (!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0))) 
                            || ((strcmp(Board[m+1][n+1], color) == 0) && (!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m+1][n], color) == 0)))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if(((strcmp(Board[m-1][n+1], color2) == 0) && (!(strcmp(Board[m][n+1], color2) == 0)) && (!(strcmp(Board[m-1][n], color2) == 0))) 
                            || ((strcmp(Board[m+1][n+1], color2) == 0) && (!(strcmp(Board[m][n+1], color2) == 0)) && (!(strcmp(Board[m+1][n], color2) == 0)))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m-1][n], color2) == 0) || (strcmp(Board[m+1][n], color2) == 0) 
                        || (strcmp(Board[m][n], color2) == 0)){
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
                else{
                    if((i - 1 < ini_r) && (j + 1 > end_c)){
                        if(strcmp(Board[m-1][n+1], "N") == 0){
                            createarc_r[*createnum] = m - 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 2;
                            *creat = true;
                        }
                    }
                    else if(i - 1 < ini_r){
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j + 1 > end_c){
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m-1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }

                    if((i - 1 < ini_r) && (j - 1 < ini_c)){
                        if(strcmp(Board[m-1][n-1], "N") == 0){
                            createarc_r[*createnum] = m - 1;
                            createarc_c[*createnum] = n - 1;
                            *createnum = *createnum + 1;
                            *dest = 3;
                            *creat = true;
                        }
                    }
                    else if(i - 1 < ini_r){
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j - 1 < ini_c){
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m-1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i-1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    if((i + 1 > end_r) && (j + 1 > end_c)){
                        if(strcmp(Board[m+1][n+1], "N") == 0){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(i + 1 > end_r){
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j + 1 > end_c){
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m+1][n+1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j+1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    
                    if((i + 1 > end_r) && (j - 1 < ini_c)){
                        if(strcmp(Board[m+1][n-1], "N") == 0){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n - 1;
                            *createnum = *createnum + 1;
                            *dest = 1;
                            *creat = true;
                        }
                    }
                    else if(i + 1 > end_r){
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else if(j - 1 < ini_c){
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    else{
                        if((strcmp(Board[m+1][n-1], "N") == 0) && (!(strcmp((*puzzle)[i+1][j], color) == 0)) && (!(strcmp((*puzzle)[i][j-1], color) == 0))){
                            createarc_r[*createnum] = m + 1;
                            createarc_c[*createnum] = n + 1;
                            *createnum = *createnum + 1;
                            *dest = 0;
                            *creat = true;
                        }
                    }
                    
                    if(((strcmp(Board[m-1][n+1], color) == 0) && (!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0))) 
                            || ((strcmp(Board[m-1][n-1], color) == 0) && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m-1][n], color) == 0))) 
                            || ((strcmp(Board[m+1][n+1], color) == 0) && (!(strcmp(Board[m][n+1], color) == 0)) && (!(strcmp(Board[m+1][n], color) == 0)))  
                            || ((strcmp(Board[m+1][n-1], color) == 0) && (!(strcmp(Board[m][n-1], color) == 0)) && (!(strcmp(Board[m+1][n], color) == 0)))){
                        elmarc_r[*elmnum] = m;
                        elmarc_c[*elmnum] = n;
                        *elmnum = *elmnum + 1;
                        *elmin = true;
                    }
                    if(((strcmp(Board[m-1][n+1], color2) == 0) && (!(strcmp(Board[m][n+1], color2) == 0)) && (!(strcmp(Board[m-1][n], color2) == 0))) 
                            || ((strcmp(Board[m-1][n-1], color2) == 0) && (!(strcmp(Board[m][n-1], color2) == 0)) && (!(strcmp(Board[m-1][n], color2) == 0))) 
                            || ((strcmp(Board[m+1][n+1], color2) == 0) && (!(strcmp(Board[m][n+1], color2) == 0)) && (!(strcmp(Board[m+1][n], color2) == 0)))  
                            || ((strcmp(Board[m+1][n-1], color2) == 0) && (!(strcmp(Board[m][n-1], color2) == 0)) && (!(strcmp(Board[m+1][n], color2) == 0)))){
                        opparc_r[*opparcnum] = m;
                        opparc_c[*opparcnum] = n;
                        *opparcnum = *opparcnum + 1;
                        *oppo = true;
                    }
                    if((strcmp(Board[m-1][n], color2) == 0) || (strcmp(Board[m][n+1], color2) == 0) 
                        || (strcmp(Board[m][n-1], color2) == 0) || (strcmp(Board[m+1][n], color2) == 0)){
                        *oppedgenum = *oppedgenum + 1;
                    }
                }
            }
            
        }
    }                
}
void arcroundedge(char Board[ROW][COLUMN][20], int arc_r, int arc_c, int *roundedge, String color2){

    if(arc_r == 0 && arc_c == 0){
        if((strcmp(Board[arc_r+1][arc_c], color2) == 0) || (strcmp(Board[arc_r][arc_c+1], color2) == 0)){

            *roundedge = *roundedge + 1;
        }
    }
    else if(arc_r == 13 && arc_c == 0){
        if((strcmp(Board[arc_r-1][arc_c], color2) == 0) || (strcmp(Board[arc_r][arc_c+1], color2) == 0)){
                       
            *roundedge = *roundedge + 1;
        }
    }
    else if(arc_r == 0 && arc_c == 13){
        if((strcmp(Board[arc_r+1][arc_c], color2) == 0) || (strcmp(Board[arc_r][arc_c-1], color2) == 0)){
                       
            *roundedge = *roundedge + 1;
        }
    }
    else if(arc_r == 13 && arc_c == 13){
        if((strcmp(Board[arc_r-1][arc_c], color2) == 0) || (strcmp(Board[arc_r][arc_c-1], color2) == 0)){
                       
            *roundedge = *roundedge + 1;
        }
    }
    else if(arc_r == 0){
        if((strcmp(Board[arc_r+1][arc_c], color2) == 0) || (strcmp(Board[arc_r][arc_c+1], color2) == 0) 
            || (strcmp(Board[arc_r][arc_c-1], color2) == 0)){
                      
            *roundedge = *roundedge + 1;
        }
    }
    else if(arc_r == 13){
        if((strcmp(Board[arc_r-1][arc_c], color2) == 0) || (strcmp(Board[arc_r][arc_c+1], color2) == 0) 
            || (strcmp(Board[arc_r][arc_c-1], color2) == 0)){
            *roundedge = *roundedge + 1;
        }
    }
    else if(arc_c == 0){
        if((strcmp(Board[arc_r-1][arc_c], color2) == 0) || (strcmp(Board[arc_r+1][arc_c], color2) == 0) 
            || (strcmp(Board[arc_r][arc_c], color2) == 0)){
            *roundedge = *roundedge + 1;
        }
    }
    else if(arc_c == 13){
        if((strcmp(Board[arc_r+1][arc_c], color2) == 0) || (strcmp(Board[arc_r-1][arc_c], color2) == 0) 
            || (strcmp(Board[arc_r][arc_c-1], color2) == 0)){
            *roundedge = *roundedge + 1;
        }
    }
    else{
        if((strcmp(Board[arc_r-1][arc_c], color2) == 0) || (strcmp(Board[arc_r][arc_c+1], color2) == 0) 
            || (strcmp(Board[arc_r][arc_c-1], color2) == 0) || (strcmp(Board[arc_r+1][arc_c], color2) == 0)){
            *roundedge = *roundedge + 1;
        }
    }

}
void arcarea(char Board[ROW][COLUMN][20], int arc_r, int arc_c, int *area, String selfcolor, String oppcolor){ 
    int i, j, k;
    
    int partarea = 0;
    *area = 0;
    if((arc_r - 1 >= 0) && (arc_c - 1 >= 0)){
        if(strcmp(Board[arc_r-1][arc_c-1], selfcolor) == 0){
            if((strcmp(Board[arc_r+1][arc_c], selfcolor) == 0) || (strcmp(Board[arc_r][arc_c-1], selfcolor) == 0)){
                *area = 0;
            }
            else{
                int column[14];
                int breaknum = 0;
                bool breaktrue;
                for(i = arc_r; i < 14; i++){
                    breaktrue = false;
                    for(j = arc_c; j < 14; j++){
                        
                        for(k = 0; k < breaknum; k++){
                            if(j == column[k]){
                                breaktrue = true;
                                break;
                            }
                        }
                        if(breaktrue){
                            break;
                        }
                        if(i == 13 && j == 13){
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                *area = *area + 1;
                            }
                        }
                        else if(i == 13){
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                                ||  (strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                *area = *area + 1;
                            }
                        }
                        else if(j == 13){
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                                || (strcmp(Board[i][j-1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                *area = *area + 1;
                            }
                        }
                        else{
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                                || (strcmp(Board[i][j-1], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0)
                                || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                *area = *area + 1;
                            }
                        }
                        
                    }
                }
            }
            
        }
    }
    if((arc_r - 1 >= 0) && (arc_c + 1 <= 13)){
        if(strcmp(Board[arc_r-1][arc_c+1], selfcolor) == 0){
            if((strcmp(Board[arc_r+1][arc_c], selfcolor) == 0) || (strcmp(Board[arc_r][arc_c-1], selfcolor) == 0)){
                partarea = 0;
            }
            else{
                int column[14];
                int breaknum = 0;
                bool breaktrue;
                for(i = arc_r; i < 14; i++){
                    breaktrue = false;
                    for(j = arc_c; j >= 0; j--){
                        for(k = 0; k < breaknum; k++){
                            if(j == column[k]){
                                breaktrue = true;
                                break;
                            }
                        }
                        if(breaktrue){
                            break;
                        }
                        if(i == 13 && j == 0){
                            if((strcmp(Board[i-1][j], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else if(i == 13){
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                                || (strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else if(j == 0){
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                                || (strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else{
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                                || (strcmp(Board[i][j-1], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0)
                                || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                    }
                }
            }
            
            if(partarea > *area){
                *area = partarea;
            }
        }
    }
    if((arc_r + 1 <= 13) && (arc_c - 1 >= 0)){
        if(strcmp(Board[arc_r+1][arc_c-1], selfcolor) == 0){
            if((strcmp(Board[arc_r-1][arc_c], selfcolor) == 0) || (strcmp(Board[arc_r][arc_c+1], selfcolor) == 0)){
                partarea = 0;
            }
            else{
                int column[14];
                int breaknum = 0;
                bool breaktrue;
                for(i = arc_r; i >= 0; i--){
                    breaktrue = false;
                    for(j = arc_c; j < 14; j++){
                        for(k = 0; k < breaknum; k++){
                            if(j == column[k]){
                                breaktrue = true;
                                break;
                            }
                        }
                        if(breaktrue){
                            break;
                        }
                        if(i == 0 && j == 13){
                            if((strcmp(Board[i+1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                                || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else if(i == 0){
                            if((strcmp(Board[i+1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                                ||(strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else if(j == 13){
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                                || (strcmp(Board[i][j-1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else{
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                                || (strcmp(Board[i][j-1], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0)
                                || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                    }
                }
            }
            
            if(partarea > *area){
                *area = partarea;
            }
        }
    }
    if((arc_r + 1 <= 13) && (arc_c + 1 <= 13)){
        if(strcmp(Board[arc_r+1][arc_c+1], selfcolor) == 0){
            if((strcmp(Board[arc_r-1][arc_c], selfcolor) == 0) || (strcmp(Board[arc_r][arc_c-1], selfcolor) == 0)){
                partarea = 0;
            }
            else{
                int column[14];
                int breaknum = 0;
                bool breaktrue;
                for(i = arc_r; i >= 0; i--){
                    breaktrue = false;
                    for(j = arc_c; j >= 0; j--){
                        for(k = 0; k < breaknum; k++){
                            if(j == column[k]){
                                breaktrue = true;
                                break;
                            }
                        }
                        if(breaktrue){
                            break;
                        }
                        if(i == 0 && j == 0){
                            if((strcmp(Board[i+1][j], selfcolor) == 0) || (strcmp(Board[i][j+1], selfcolor) == 0)
                                || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else if(i == 0){
                            if( (strcmp(Board[i+1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                                ||(strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else if(j == 0){
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                                ||(strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                        else{
                            if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                                || (strcmp(Board[i][j-1], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0)
                                || (strcmp(Board[i][j], oppcolor) == 0)){
                                    
                            }
                            else if(strcmp(Board[i][j], selfcolor) == 0){
                                column[breaknum] = j;
                                breaknum++;
                                break;
                            }
                            else{
                                partarea = partarea + 1;
                            }
                        }
                    }
                }
            }
            
            if(partarea > *area){
                *area = partarea;
            }
        }
    }
}

void arcarea2(char Board[ROW][COLUMN][20], int dest, int arc_r, int arc_c, int *area, String selfcolor, String oppcolor){
    int i, j, k;
    int partarea = 0;
    *area = 0;
    if(dest == 0){
        if((strcmp(Board[arc_r+1][arc_c], selfcolor) == 0) || (strcmp(Board[arc_r][arc_c+1], selfcolor) == 0)){
            *area = 0;
        }
        else{
            int column[14];
            int breaknum = 0;
            bool breaktrue;
            for(i = arc_r; i < 14; i++){
                breaktrue = false;
                for(j = arc_c; j < 14; j++){
                    for(k = 0; k < breaknum; k++){
                        if(j == column[k]){
                            breaktrue = true;
                            break;
                        }
                    }
                    if(breaktrue){
                        break;
                    }
                    if(i == 13 && j == 13){
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else if(i == 13){
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                            ||  (strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else if(j == 13){
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                            || (strcmp(Board[i][j-1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else{
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                            || (strcmp(Board[i][j-1], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0)
                            || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    
                }
            }
        }
        
    }
    else if(dest == 1){
        if((strcmp(Board[arc_r+1][arc_c], selfcolor) == 0) || (strcmp(Board[arc_r][arc_c-1], selfcolor) == 0)){
            *area = 0;
        }
        else{
            int column[14];
            int breaknum = 0;
            bool breaktrue;
            for(i = arc_r; i < 14; i++){
                breaktrue = false;
                for(j = arc_c; j >= 0; j--){
                    for(k = 0; k < breaknum; k++){
                        if(j == column[k]){
                            breaktrue = true;
                            break;
                        }
                    }
                    if(breaktrue){
                        break;
                    }
                    if(i == 13 && j == 0){
                        if((strcmp(Board[i-1][j], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else if(i == 13){
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                            || (strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else if(j == 0){
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                            || (strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else{
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                            || (strcmp(Board[i][j-1], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0)
                            || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                }
            }
        }
        
       
        
    }
    else if(dest == 2){
        if((strcmp(Board[arc_r-1][arc_c], selfcolor) == 0) || (strcmp(Board[arc_r][arc_c+1], selfcolor) == 0)){
            *area = 0;
        }
        else{
            int column[14];
            int breaknum = 0;
            bool breaktrue;
            for(i = arc_r; i >= 0; i--){
                breaktrue = false;
                for(j = arc_c; j < 14; j++){
                    for(k = 0; k < breaknum; k++){
                        if(j == column[k]){
                            breaktrue = true;
                            break;
                        }
                    }
                    if(breaktrue){
                        break;
                    }
                    if(i == 0 && j == 13){
                        if((strcmp(Board[i+1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                            || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else if(i == 0){
                        if((strcmp(Board[i+1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                            ||(strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else if(j == 13){
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                            || (strcmp(Board[i][j-1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else{
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                            || (strcmp(Board[i][j-1], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0)
                            || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                }
            }
        }
        
        
        
    }
    else if(dest == 3){  
        if((strcmp(Board[arc_r-1][arc_c], selfcolor) == 0) || (strcmp(Board[arc_r][arc_c-1], selfcolor) == 0)){
            *area = 0;
        }
        else{
            int column[14];
            int breaknum = 0;
            bool breaktrue;
            for(i = arc_r; i >= 0; i--){
                breaktrue = false;
                for(j = arc_c; j >= 0; j--){
                    for(k = 0; k < breaknum; k++){
                        if(j == column[k]){
                            breaktrue = true;
                            break;
                        }
                    }
                    if(breaktrue){
                        break;
                    }
                    if(i == 0 && j == 0){
                        if((strcmp(Board[i+1][j], selfcolor) == 0) || (strcmp(Board[i][j+1], selfcolor) == 0)
                            || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else if(i == 0){
                        if( (strcmp(Board[i+1][j], selfcolor) == 0) || (strcmp(Board[i][j-1], selfcolor) == 0) 
                            ||(strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else if(j == 0){
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                            ||(strcmp(Board[i][j+1], selfcolor) == 0) || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                    else{
                        if((strcmp(Board[i-1][j], selfcolor) == 0) || (strcmp(Board[i+1][j], selfcolor) == 0) 
                            || (strcmp(Board[i][j-1], selfcolor) == 0) ||(strcmp(Board[i][j+1], selfcolor) == 0)
                            || (strcmp(Board[i][j], oppcolor) == 0)){
                                
                        }
                        else if(strcmp(Board[i][j], selfcolor) == 0){
                            break;
                        }
                        else{
                            *area = *area + 1;
                        }
                    }
                }
            }
        }
        
       
    }
    
}

void arccombocount(char Board[ROW][COLUMN][20], char puzzle[PUZNUM][PUZRC][PUZRC][20], int *returncombo, int pattern[PUZNUM], String color, String color2, int arc_r, int arc_c, int *predicttime){
    *predicttime = *predicttime + 1;
   
    if(*predicttime == 2){
         
        return;
    }
    int i, j, m, l, h, e, s, p;
    int n;
    int ini_r, ini_c, end_r, end_c;
    bool notpass;
    bool place_able;
    int k[14] = {0};
    int t[14] = {0};
    int pattern_temp[PUZNUM];
    char Board_temp[ROW][COLUMN][20];
    char puzzle_temp[PUZNUM][PUZRC][PUZRC][20];
    bool create;
    bool elmin;
    bool oppo;
    bool isoppo = false;
    int oppoarcnum;
    int createnum;
    int combonum;
    int elmnum;
    int oppedgenum;
    int dest;
    
    
    int opparc_r[8] = {0};
    int opparc_c[8] = {0};
    int elmarc_r[8] = {0};
    int elmarc_c[8] = {0};
    int createarc_r[8] = {0};
    int createarc_c[8] = {0};
    int comboarc_r[8] = {0};
    int comboarc_c[8] = {0};

    int predict_temp = *predicttime;
    
    
    
    int roundedge;
   
    
   
    int arccombo = 0;
    int mostarccombo = 0;
   /*for(m = 0; m < 21; m++){
        printf("\n\n");
        for(i = 0; i < 5; i++){
             printf("\n");
            for(j = 0; j < 5; j++){
                 printf("%s", puzzle[m][i][j]);
            }
        }
    }*/
    
   

    

    notpass = false;
    
   
    for(m = 0; m < 21; m++){
        if(pattern[m] == 1){
           
                for(j = 0; j < 2; j++){
                    for(l = 0; l < 4; l++){
                        
                        
                        ini_end(puzzle[m], &ini_r, &ini_c, &end_r, &end_c, color);
                        
                        int q = end_r - ini_r + 1;
                        int w = end_c - ini_c + 1;
                        
                        for(h = -(q - 1); h < q; h++){
                            
                            for(e = -(w - 1) ; e < w; e++){
                                
                                place_able = false;
                                if((arc_r + h < 0) || (arc_c + e < 0) || (arc_r + h > 13) || (arc_c + e > 13)) {
                                    
                                }
                                else{
                                    
                                    place_able = placeable(puzzle[m], Board, arc_r + h, arc_c + e, &ini_r, &end_r, &ini_c, &end_c, color);
                                    notpass = notpass | place_able;   
                                    if(place_able){
                                        
                                        arccombo++;
                                        oppoarcnum = 0;
                                        createnum = 0;
                                        combonum = 0;
                                        elmnum = 0;
                                        oppedgenum = 0;
                                        dest = 0;
                                        create = false;
                                        elmin = false;
                                        oppo = false;
                                        
                                        
                                        roundedge = 0;
                                        

                                        arcinfo(puzzle[m], Board, arc_r + h, arc_c + e, ini_r, end_r, ini_c, end_c, opparc_r, opparc_c, elmarc_r, elmarc_c,
                                                        createarc_r, createarc_c, &oppoarcnum, &elmnum, &createnum, &oppedgenum, &dest, &create, &elmin , &oppo, color, color2);

                                        //printf("\ncrearenum = %d, elmnum = %d, opnum = %d\n", createnum, elmnum, oppoarcnum);
                                        
                                        
                                        if(create){
                                            
                                            for(s = 0; s < createnum; s++){
                                                roundedge = 0;
                                                 
                                                arcroundedge(Board, createarc_r[s], createarc_c[s], &roundedge, color2);
                                                
                                                if(roundedge != 0){
                                                    
                                                    
                                                    
                                                    
                                                    comboarc_r[combonum] = createarc_r[s];
                                                    comboarc_c[combonum] = createarc_c[s];
                                                    combonum++;
            
                                                }
                                                //printf("carc_r = %d, carc_c = %d, carea = %d\n", createarc_r[s], createarc_c[s], createarea);
                                                
                                            }
                                            
                                        }
                                        if(combonum != 0){
                                            for(n = 0; n < 14; n++){
                                                for(s = 0; s < 14; s++){
                                                    strcpy(Board_temp[n][s], Board[n][s]);
                                                }
                                            }
                                            for(n = 0; n < PUZNUM; n++){
                                                pattern_temp[n] = pattern[n];
                                            }
                                            for(n = 0; n < PUZNUM; n++){
                                                for(s = 0; s < PUZRC; s++){
                                                    for(p = 0; p < PUZRC; p++){
                                                        strcpy(puzzle_temp[n][s][p], puzzle[n][s][p]);
                                                    }
                                                }
                                            }
                                            place(arc_r + h, arc_c + e, &ini_r, &end_r, &ini_c, &end_c, Board_temp, puzzle[m]);
                                            pattern_temp[m] = 0;
                                            for(n = 0; n < combonum; n++){
                                                *predicttime = predict_temp;
                                                
                                                arccombocount(Board_temp, puzzle_temp, &arccombo, pattern_temp, color, color2, comboarc_r[n], comboarc_c[n], predicttime);
                                            }
                                        }
                                        
                                        
                                        
                                        
                                    }
                                }
                                
                                
                            }
                            
                        }
                        
                            
                        rotate(puzzle[m]);
                        
                    }
                    
                    flip(puzzle[m]);

                }

                
            
            
        }
        
        
    }
   
    if(!notpass){
        
        

    }
    else{
        *returncombo = *returncombo + arccombo;
       
        
    }
     
}
void selfarea_1(char (*puzzle)[PUZRC][PUZRC][20], int *area, int ini_r, int ini_c, int end_r, int end_c, String color){
    int i, j;
    *area = 0;
    for(i = ini_r; i < end_r + 1; i++){
        for(j = ini_c; j < end_c + 1; j++){
            if(strcmp((*puzzle)[PUZRC][PUZRC], color) == 0){
                *area = *area + 1;
            }
        }
    }
}
void selfarea_2(int *area, int ini_r, int ini_c, int end_r, int end_c){
    *area = (end_r-ini_r+1)*(end_c-ini_c+1);
}
int main(int argc, char *argv[]){
    int i, j, m, l, h, e, s, p, z;
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
		
	
    if(firstplace(Board, color)){
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
        int pattern_temp[PUZNUM];
        char Board_temp[ROW][COLUMN][20];
        char puzzle_temp[PUZNUM][PUZRC][PUZRC][20];
        bool create;
        bool elmin;
        bool oppo;
        bool isoppo = false;
        int oppoarcnum;
        int createnum;
        int elmnum;
        int oppedgenum;
        int combonum;
        int dest;
        int totalarea;
        int totalcreatearea;
        int totalelmarea;
        int totaloppoarea;
        int opparc_r[8] = {0};
        int opparc_c[8] = {0};
        int elmarc_r[8] = {0};
        int elmarc_c[8] = {0};
        int createarc_r[8] = {0};
        int createarc_c[8] = {0};
        int comboarc_r[8] = {0};
        int comboarc_c[8] = {0};
        int roundedge;
        int mostoppedge = 0;
        int mosttotalarea = -10000;
        int mosttotaloppoarea = 0;
        int mostselfarea1 = 0;
        int moseselfarea2 = 0;
        int mostarccombo = 0;
        int mostoppedgeopp = 0;
        int mosttotalareaopp = -10000;
        int mostselfarea1opp = 0;
        int moseselfarea2opp = 0;
        int mostarccomboopp = 0;
        int placepattern, placeflip, placerotate, place_r, place_c, placeini_r, placeini_c, placeend_r, placeend_c;

        int predicttime = 0;
        int predict_temp = predicttime;
        int opparea;
        int createarea;
        int arccombo;
        int elmarea;

        int selfarea1;
        int selfarea2;
    
        notpass = false;
        n = 0;
        findarc(Board, k, t, &n, color);
        
        for(m = 0; m < 21; m++){
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
                                            oppoarcnum = 0;
                                            createnum = 0;
                                            elmnum = 0;
                                            oppedgenum = 0;
                                            dest = 0;
                                            create = false;
                                            elmin = false;
                                            oppo = false;
                                            totalcreatearea = 0;
                                            totalelmarea = 0;
                                            totaloppoarea = 0;
                                            opparea = 0;
                                            createarea = 0;
                                            elmarea = 0;
                                            totalarea = 0;
                                            selfarea1 = 0;
                                            selfarea2 = 0;
                                            arccombo = 0;
                                            combonum = 0;
                                            
                                              
                                            arcinfo(puzzle[m], Board, k[i] + h, t[i] + e, ini_r, end_r, ini_c, end_c, opparc_r, opparc_c, elmarc_r, elmarc_c,
                                                            createarc_r, createarc_c, &oppoarcnum, &elmnum, &createnum, &oppedgenum, &dest, &create, &elmin , &oppo, color, color2);
                                            //printf("\ncrearenum = %d, elmnum = %d, opnum = %d\n", createnum, elmnum, oppoarcnum);
                                            selfarea_1(&puzzle[m], &selfarea1, ini_r, ini_c, end_r, end_c, color);
                                            selfarea_2(&selfarea2, ini_r, ini_c, end_r, end_c);
                                            
                                            
                                            if(create){
                                                for(s = 0; s < createnum; s++){
                                                    roundedge = 0;
                                                    arcarea2(Board, dest, createarc_r[s], createarc_c[s], &createarea, color, color2);
                                                    arcroundedge(Board, createarc_r[s], createarc_c[s], &roundedge, color2);
                                                    if(roundedge != 0){
                                                        comboarc_r[combonum] = createarc_r[s];
                                                        comboarc_c[combonum] = createarc_c[s];
                                                        combonum++;
                                                    }
                                                    
                                                    //printf("carc_r = %d, carc_c = %d, carea = %d\n", createarc_r[s], createarc_c[s], createarea);
                                                    totalcreatearea = createarea + totalcreatearea;
                                                }
                                                
                                            }
                                            if(combonum != 0){
                                                for(z = 0; z < 14; z++){
                                                    for(s = 0; s < 14; s++){
                                                        strcpy(Board_temp[z][s], Board[z][s]);
                                                    }
                                                }
                                                for(z = 0; z < PUZNUM; z++){
                                                    pattern_temp[z] = pattern[z];
                                                }
                                                for(z = 0; z < PUZNUM; z++){
                                                    
                                                    for(s = 0; s < PUZRC; s++){
                                                        
                                                        for(p = 0; p < PUZRC; p++){
                                                            strcpy(puzzle_temp[z][s][p], puzzle[z][s][p]);
                                                           
                                                        }
                                                    }
                                                }
                                                place(k[i] + h, t[i] + e, &ini_r, &end_r, &ini_c, &end_c, Board_temp, puzzle[m]);
                                                pattern_temp[m] = 0;
                                                for(z = 0; z < combonum; z++){
                                                    predicttime = predict_temp;
                                                   
                                                   
                                                    arccombocount(Board_temp, puzzle_temp, &arccombo, pattern_temp, color, color2, comboarc_r[z], comboarc_c[z], &predicttime);
                                                 
                                                }
                                                
                                            }
                                            if(elmin){
                                                for(s = 0; s < elmnum; s++){
                                                    arcarea(Board, elmarc_r[s], elmarc_c[s], &elmarea, color, color2);
                                                    //printf("earc_r = %d, earc_c = %d, earea = %d\n", elmarc_r[s], elmarc_c[s], elmarea);
                                                    totalelmarea = totalelmarea + elmarea;
                                                }
                                                
                                            }
                                            
                                            if(oppo){
                                                isoppo = true;
                                                for(s = 0; s < oppoarcnum; s++){
                                                    arcarea(Board, opparc_r[s], opparc_c[s], &opparea, color2, color);
                                                    //printf("oarc_r = %d, oarc_c = %d, oarea = %d\n", opparc_r[s], opparc_c[s], opparea);
                                                    totaloppoarea = totaloppoarea + opparea;
                                                }

                                                totalarea = totaloppoarea + totalcreatearea - totalelmarea;
                                                 
                                                
                                                if(totaloppoarea > mosttotaloppoarea){
                                                    mosttotaloppoarea = totaloppoarea;
                                                    place_r = k[i] + h;
                                                    place_c = t[i] + e;
                                                    placeini_r = ini_r;
                                                    placeini_c = ini_c;
                                                    placeend_r = end_r;
                                                    placeend_c = end_c;
                                                    placepattern = m;
                                                    placeflip = j;
                                                    placerotate = l;
                                                    mostarccomboopp = arccombo;
                                                }
                                                
                                                else if(totaloppoarea == mosttotaloppoarea){
                                                    if(arccombo > mostarccomboopp){
                                                
                                                        mostarccomboopp = arccombo;
                                                        place_r = k[i] + h;
                                                        place_c = t[i] + e;
                                                        placeini_r = ini_r;
                                                        placeini_c = ini_c;
                                                        placeend_r = end_r;
                                                        placeend_c = end_c;
                                                        placepattern = m;
                                                        placeflip = j;
                                                        placerotate = l;
                                                        moseselfarea2opp = selfarea2;
                                                    }
                                                    else if(arccombo == mostarccomboopp){
                                                        
                                                        if(selfarea2 > moseselfarea2opp){
                                                            moseselfarea2opp = selfarea2;
                                                            place_r = k[i] + h;
                                                            place_c = t[i] + e;
                                                            placeini_r = ini_r;
                                                            placeini_c = ini_c;
                                                            placeend_r = end_r;
                                                            placeend_c = end_c;
                                                            placepattern = m;
                                                            placeflip = j;
                                                            placerotate = l;
                                                            mostselfarea1opp = selfarea1;
                            
                                                        }
                                                        else if(selfarea2 == moseselfarea2opp){
                                                            if(selfarea1 > mostselfarea1opp){
                                                                mostselfarea1opp = selfarea1;
                                                                place_r = k[i] + h;
                                                                place_c = t[i] + e;
                                                                placeini_r = ini_r;
                                                                placeini_c = ini_c;
                                                                placeend_r = end_r;
                                                                placeend_c = end_c;
                                                                placepattern = m;
                                                                placeflip = j;
                                                                placerotate = l;
                                                                mosttotalareaopp = totalarea;
                                                            }
                                                            else if(selfarea1 == mostselfarea1opp){
                                                                
                                                                if(totalarea > mosttotalareaopp){
                                                                    mosttotalareaopp = totalarea;
                                                                    place_r = k[i] + h;
                                                                    place_c = t[i] + e;
                                                                    placeini_r = ini_r;
                                                                    placeini_c = ini_c;
                                                                    placeend_r = end_r;
                                                                    placeend_c = end_c;
                                                                    placepattern = m;
                                                                    placeflip = j;
                                                                    placerotate = l;
                                                                    mostoppedgeopp = oppedgenum;
                                                                    

                                                                }
                                                                else if(totalarea == mosttotalareaopp){    
                                                                    if(oppedgenum > mostoppedgeopp){
                                                                        mostoppedgeopp = oppedgenum;
                                                                        place_r = k[i] + h;
                                                                        place_c = t[i] + e;
                                                                        placeini_r = ini_r;
                                                                        placeini_c = ini_c;
                                                                        placeend_r = end_r;
                                                                        placeend_c = end_c;
                                                                        placepattern = m;
                                                                        placeflip = j;
                                                                        placerotate = l;

                                                                    }
                                                                    
                                                                
                                                                }    
                                                            }
                                                            
                                                        }
                                                        
                                                    }
                                                }
                                            
                                            
                                            
                                            }  
                                            
                                            
                                            
                                            
                                        
                                        
                                            else if(!isoppo){
                                                
                                                totalarea = totalcreatearea - totalelmarea;
                                                
                                                    
                                                if(selfarea2 > moseselfarea2){
                                            
                                                    moseselfarea2 = selfarea2;
                                                    place_r = k[i] + h;
                                                    place_c = t[i] + e;
                                                    placeini_r = ini_r;
                                                    placeini_c = ini_c;
                                                    placeend_r = end_r;
                                                    placeend_c = end_c;
                                                    placepattern = m;
                                                    placeflip = j;
                                                    placerotate = l;
                                                    mostselfarea1 = selfarea1;
                                                
                                                }
                                                else if(selfarea2 == moseselfarea2){
                                                    
                                                    if(selfarea1 > mostselfarea1){
                                                        mostselfarea1 = selfarea1;
                                                        place_r = k[i] + h;
                                                        place_c = t[i] + e;
                                                        placeini_r = ini_r;
                                                        placeini_c = ini_c;
                                                        placeend_r = end_r;
                                                        placeend_c = end_c;
                                                        placepattern = m;
                                                        placeflip = j;
                                                        placerotate = l;
                                                        mostarccombo = arccombo;
                                                        
                                                    }

                                                    else if(selfarea1 == mostselfarea1){
                                                        if(arccombo > mostarccombo){
                                            
                                                            mostarccombo = arccombo;
                                                            place_r = k[i] + h;
                                                            place_c = t[i] + e;
                                                            placeini_r = ini_r;
                                                            placeini_c = ini_c;
                                                            placeend_r = end_r;
                                                            placeend_c = end_c;
                                                            placepattern = m;
                                                            placeflip = j;
                                                            placerotate = l;
                                                            mostoppedge = oppedgenum;
                                                        }
                                                        else if(arccombo == mostarccombo){
                                                            if(oppedgenum > mostoppedge){
                                                                mostoppedge = oppedgenum;
                                                                place_r = k[i] + h;
                                                                place_c = t[i] + e;
                                                                placeini_r = ini_r;
                                                                placeini_c = ini_c;
                                                                placeend_r = end_r;
                                                                placeend_c = end_c;
                                                                placepattern = m;
                                                                placeflip = j;
                                                                placerotate = l;
                                                                mosttotalarea = totalarea;
                                                            }
                                                            else if(oppedgenum == mostoppedge){
                                                                if(totalarea > mosttotalarea){
                                                                    mosttotalarea = totalarea;
                                                                    place_r = k[i] + h;
                                                                    place_c = t[i] + e;
                                                                    placeini_r = ini_r;
                                                                    placeini_c = ini_c;
                                                                    placeend_r = end_r;
                                                                    placeend_c = end_c;
                                                                    placepattern = m;
                                                                    placeflip = j;
                                                                    placerotate = l;
                                                                    

                                                                }
                                                            }
                                                            
                                                        }    
                                                        
                                                    }
                                                }
                                                    
                                                
                                                    
                                                    
                                            }
                                            if(m==2 && j==0 && l==0 && (k[i]+h==5) && (t[i]+e==10)){
                                                printf(" %d,%d ", oppoarcnum ,totaloppoarea);
                                            }            
                                        }
                                    }
                                    
                                    
                                }
                                
                            }
                            
                             
                            rotate(puzzle[m]);
                            
                        }
                        
                        flip(puzzle[m]);
                        
                    }
                    
                
                }
            }
         
           
        }
         
        if(!notpass){
           
            return 1;
        }
        else{
           
            for(i = 0; i < placeflip; i++){
                flip(puzzle[placepattern]);
            }
            for(j = 0; j < placerotate; j++){
                rotate(puzzle[placepattern]);
            }
             
            place(place_r, place_c, &placeini_r, &placeend_r, &placeini_c, &placeend_c, Board, puzzle[placepattern]);
            pattern[placepattern] = 0;
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

