#include <stdio.h>
#include "lianBiao.h"

//PrintLots����ʱ�临�Ӷ�:(arr_2�ĳ���Ϊn) O(n)
int main() {
	PtoNode P = creatList();
	PtoNode L = creatList();
	//һ���������鶨����ע�� arr_1�����Ԫ�ز����Դ���arr_2�ĳ��� 
	ElementType arr_1[4] = {3,6,7,9};
	ElementType arr_2[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int j = 0;
	//printf("��ʼ������1���Ԫ��\n");
	while (i<4) {
		addElement(P,arr_1[i]);
		i++;
	}
	//printf("��ʼ������2���Ԫ��\n");
	while (j<10) {
		addElement(L,arr_2[j]);
		j++;
	}
	PrintLots(L,P);
	return 0;
}