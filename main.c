#include <stdio.h>
#include <stdlib.h>

int main(){

int x, y, z;
  scanf("%d", &x);

    for (int i = 0; i < x; i++){
      scanf("%d%d", &y, &z);
         if(y == 0 && z == 0){
           printf("0\n");
                                       }
         else if(y == 1 && z == 1){
           printf("1\n");                   }

         else if (y == z){
           printf("%d\n", z + (y / 2) * 2);
                                                }

         else if(y - 2 == z){
           printf("%d\n", y + (z / 2) * 2);
                                                     }

         else{
           printf("-1\n");
                                                          }
                                                                }
return 0;
                                                                     }
