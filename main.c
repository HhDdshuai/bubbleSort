#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elemType;
//交换函数
void swap(elemType *a,elemType *b){
    elemType temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//冒泡排序
void bubbleSort(elemType a[],int n){       //从小到大排序
    int flag = 0;                          //标记本趟冒泡是否发生交换
    for(int i = 0;i < n - 1;i++){          //只需比较n-1次
        flag = 0;
        for(int j = 0;j < n - i - 1;j++){
            if(a[j] > a[j + 1]){
                swap(&a[j],&a[j + 1]);
                flag = 1;
            }
        }
        if(!flag)
            return;
    }
}
int main()
{
    elemType a[] = {0,899,565,68,78,12,9,3,848,925,802,94,454,6465,756,
    5165,87,325,148,699,789,122,784,124,34,588,7,54,697,101,130};
    int len = sizeof(a)/sizeof(elemType);
    bubbleSort(a,len);
    for(int i = 0;i < len;i++)
        printf("%d ",a[i]);
    return 0;
}
