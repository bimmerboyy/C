// 11.11. Саставити програм који учита матрицу целих бројева А димензија mxn, а затим исписује
// матрицу у облику таблице и врши замену места двема колонама на основу унета два цела броја који
// представљају редне бројеве колона. 

#include<stdio.h>

int main(){
    int n,m,i,j;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[m][n];
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            
            printf("%d ",matrix[i][j]);
        }
       
        printf("|\t");
    }
        

    return 0;
}