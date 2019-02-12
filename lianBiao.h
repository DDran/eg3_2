#pragma once
#include <stdio.h>

struct Node;
typedef struct Node* List;
typedef struct Node* PtoNode;
typedef int ElementType;
List creatList();
void PrintLots(List L,List P);
void addElement(List L,ElementType element);

struct Node {
	ElementType element;
	PtoNode next;
};

List creatList() {
	PtoNode p = (PtoNode)malloc(sizeof(struct Node));
	if (p==NULL) {
		printf("��������ʱ�����ڴ治��\n");
		exit();
	}
	p->next = NULL;//�ܹؼ�
	return p;
}

PtoNode Tail(List L) {
	PtoNode p = L;
	//printf("����Tail:%p\n",p);
	while (p->next!=NULL) {
		//printf("Tail��ѭ��1:%p\n", p);
		p = p->next;
		//printf("Tail��ѭ��2:%p\n",p);
	}
	return p;
}

void addElement(List L, ElementType element) {
	PtoNode p = Tail(L);
	PtoNode p2 = (PtoNode)malloc(sizeof(struct Node));
	if (p2==NULL) {
		printf("������ĩβ���Ԫ��ʱ�����ڴ�ʧ��!");
		exit(0);
	}
	p2->element = element;
	p2->next = NULL;
	p->next = p2;
}

//��ӡL����P��ָ����λ���ϵ�Ԫ��
void PrintLots(List L, List P) {
	int i = 1;
	PtoNode LL = L->next;
	PtoNode PP = P->next;
	while (PP!=NULL) {
		if (PP->element==i) {
			printf("�����%d��Ԫ��Ϊ:%d\n",i,LL->element);
			PP = PP->next;
		}
		LL = LL->next;
		i++;
	}
}