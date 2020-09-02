#include <stdio.h>
void swap (int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}


int part(int l, int h, int a[]){
    int p = a[h];
    int k = l - 1;
    for (int i = l; i <= h - 1; i++){
        if (a[i] < p){
            k++;
            swap(&a[k], &a[i]);
        }
    }
    swap(&a[k + 1], &a[h]);
    return (k + 1);
}

void quicksort(int l, int h, int a[]){
    if (l < h){
        int c = part(l, h, a);
        quicksort(l, c - 1, a);
        quicksort(c + 1, h, a);
    }
}

void print_a(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%d \n", a[i]);
    }
}

int main(){
    int arr[10] = {10, 6, 7, 1, 2, 8, 4, 3, 5,9};
    quicksort(0, sizeof(arr)/sizeof(arr[0]), arr);
    int n = sizeof(arr)/sizeof(arr[0]);
    print_a(arr, n);

    return 0;
}