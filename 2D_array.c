#include<stdio.h>
int main()
{

    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];

  

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    } 
    int spscipic_col ;
    scanf("%d",&spscipic_col);

    // for(int i = 0;i <c; i++){
    //     printf("%d ",arr[spscipic_row][i]);
    // }

    for(int i = 0; i<r; i++){
        printf("%d ",arr[i][spscipic_col]);
    }



   
  
//  for(int i = 0; i < r; i++){
//         for(int j = 0; j < c; j++){
//             printf("%d ", arr[i][j]);
//         }
//          printf("\n");
//     }










    // int a;
    // scanf("%d",&a);
    // int arr[a];
    // for(int i = 0;i<a; i++){
    //     scanf("%d", &arr[i]);
    // }
    // for(int i = 0;i<a; i++){
    //     printf("%d ", arr[i]);
    // }
    
   
   return 0;
}