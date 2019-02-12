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
		printf("创建链表时分配内存不足\n");
		exit();
	}
	p->next = NULL;//很关键
	return p;
}

PtoNode Tail(List L) {
	PtoNode p = L;
	//printf("运行Tail:%p\n",p);
	while (p->next!=NULL) {
		//printf("Tail内循环1:%p\n", p);
		p = p->next;
		//printf("Tail内循环2:%p\n",p);
	}
	return p;
}

void addElement(List L, ElementType element) {
	PtoNode p = Tail(L);
	PtoNode p2 = (PtoNode)malloc(sizeof(struct Node));
	if (p2==NULL) {
		printf("给链表末尾添加元素时分配内存失败!");
		exit(0);
	}
	p2->element = element;
	p2->next = NULL;
	p->next = p2;
}

//打印L中由P所指定的位置上的元素
void PrintLots(List L, List P) {
	int i = 1;
	PtoNode LL = L->next;
	PtoNode PP = P->next;
	while (PP!=NULL) {
		if (PP->element==i) {
			printf("链表第%d个元素为:%d\n",i,LL->element);
			PP = PP->next;
		}
		LL = LL->next;
		i++;
	}
}