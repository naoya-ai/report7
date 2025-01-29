#include <stdio.h>

void print_array(int array[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]); 
    }
    printf("\n"); 
}

void sort_array(int array[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(){
    const int SIZE = 5; 
    int scores[5] = {100, 60, 70, 100, 90};

    printf("scores = ");
    print_array(scores, SIZE);

    sort_array(scores, SIZE);

    printf("result = ");
    print_array(scores, SIZE);
    return 0;
}