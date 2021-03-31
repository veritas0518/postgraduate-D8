#include<stdio.h>
#include<stdlib.h>
typedef struct linknode

{

	int xs;  //系数
	int zs;  //指数
	struct linknode* next;  //next 指针

} Node;
Node* input() {
	int i, n;
	n = 5;
	Node* p1, * p2, * p3;
	p1 = p2 = p3 = (Node*)malloc(sizeof(Node));
	for (i = 0; i < n; i++) {
		printf("请输入第%d向", i + 1);
		scanf_s("%d,%d", &p1->xs, &p1->zs);
		if (i != n - 1) {
			p3 = (Node*)malloc(sizeof(Node));
			p2->next = p3;
			p2 = p3;
		}
		else {
			p2->next = NULL;
		}
	}
	return p1;
}
void output(Node* head) {
	int n = 0;
	while (head != NULL) {
		if (head->xs < 0) {
			if (head->zs == 0) {
				printf("%d", head->xs);
			}

			else {
				printf("%dx^%d", head->xs, head->zs);
			}
			n++;
		}
		else if (head->xs > 0) {
			if (n != 0) {
				printf("+");
			}
			if (head->zs == 0) {
				printf("%d", head->xs);
			}
			else {
				printf("%dx^%d", head->xs, head->zs);
			}
			n++;
		}
		head = head->next;
	}
	if (n == 0) {
		printf("0");
	}
}
Node* add(Node* p1, Node* p2) {
	Node* p3, * p4, * p5, * p6;
	p3 = p4 = p5 =p6= (Node*)malloc(sizeof(Node));
	while (p1 != NULL || p2 != NULL) {
		if (p1 == NULL) {
			p3->xs = p2->xs;
			p3->zs = p2->zs;
			p2 = p2->next;

		}
		else if (p2 == NULL) {
			p3->xs = p1->xs;
			p3->zs = p1->zs;
			p1= p1->next;
		}
		else {
			if (p1->zs > p2->zs) {
				p3->zs = p1->zs;
				p3->xs = p1->xs;
				p1 = p1->next;
			}
			else if(p1->zs < p2->zs){
				p3->xs = p2->xs;
				p3->zs = p2->zs;
				p2 = p2->next;
			}
			else if (p1->zs == p2->zs) {
				p3->zs = p2->zs;
				p3->xs = p2->xs + p1->xs;
				p1 = p1->next;
				p2 = p2->next;
			}
		}
		p6 = p3;
		p5 = (Node*)malloc(sizeof(Node));
		p3->next = p5;
		p3 = p5;
	}
	p6->next = NULL;
	free(p5);
	return p4;

}
int main() {
	Node* p1, * p2, * p3;
	p1 = input();
	p2 = input();
	p3 = add(p1, p2);
	output(p3);
	
	return 0;
}