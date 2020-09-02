#include <stdio.h>
void swap (int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void bubble_sort(int n, int a[]){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
int main(){

    int a[10] = {10, 6, 7, 1, 2, 8, 4, 3, 5,9};
    bubble_sort(sizeof(a)/sizeof(int), a);
    for (int i = 0; i < sizeof(a)/sizeof(int); i++){
        printf("%d \n", a[i]);
    }

    return 0;
}