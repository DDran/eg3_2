#include <stdio.h>
#include "lianBiao.h"

//PrintLots例程时间复杂度:(arr_2的长度为n) O(n)
int main() {
	PtoNode P = creatList();
	PtoNode L = creatList();
	//一下两个数组定义需注意 arr_1中最大元素不可以大于arr_2的长度 
	ElementType arr_1[4] = {3,6,7,9};
	ElementType arr_2[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int j = 0;
	//printf("开始给链表1添加元素\n");
	while (i<4) {
		addElement(P,arr_1[i]);
		i++;
	}
	//printf("开始给链表2添加元素\n");
	while (j<10) {
		addElement(L,arr_2[j]);
		j++;
	}
	PrintLots(L,P);
	return 0;
}