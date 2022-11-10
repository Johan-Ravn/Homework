#include <stdio.h>
#include <stdlib.h>

void Merge(int L[], int start, int end, int mid);
void MergeSort(int L[], int start, int end);
void printList(int L[], int size);

int main(void){
  int L[] = { 5, 3, 8, 1, 6, 10, 7, 2, 4, 9 };
  int L_size = sizeof(L) / sizeof(L[0]);

  printf("Given list \n");
  printList(L, L_size);

  MergeSort(L, 0, L_size - 1);

  printf("The sorted list \n");
  printList(L, L_size);
  return 0;
}

void Merge(int *L, int start, int end, int mid){
    int n1  = mid - start + 1,
        n2 = end - mid;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++){
        left[i] = L[start + 1];
    }
    for (int i = 0; i < n2; i++){
        right[i] = L[mid + 1 + i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2){
        if (left[i] <= right[j]){
            L[k] = left[i];
            i++;
        }
        else {
            L[k] = right[j];
            j++;
        }
    }
}

void MergeSort(int *L, int start, int end){
    if (start < end){
        int m = (start + end)/2;
        MergeSort(L, start, m);
        MergeSort(L, m + 1, end);
        Merge(L, start, m, end);
    }
}

void printList(int L[], int size){
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", L[i]);
  printf("\n");
}
