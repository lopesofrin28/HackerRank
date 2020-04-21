// 1D ARRAYS IN C
// USING MALLOC
// SUM OF ARRAY ELEMENTS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,sum=0;
    scanf("%d",&n);

// SOLUTION 1
  /*  int arr[n];
    for(int i=0;i<n;i++){
        int x=0;
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    */

// SOLUTION 2
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        int x=0;
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
