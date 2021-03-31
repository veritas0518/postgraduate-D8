//#define MAXLEN 100
//#include<stdio.h>
//typedef  struct {
//	int  data[MAXLEN];
//	int  last;
//} SeqList;
//int main() {
//	SeqList x, y;
//	int a, b, i;
//	scanf("%d", &a);
//	x.last = a;
//	for (i = 0; i <= x.last; i++) {
//		scanf("%d", &x.data[i]);
//	}
//	scanf("%d", &b);
//	y.last = b;
//	for (i = 0; i <= y.last; i++) {
//		scanf("%d", &y.data[i]);
//	}
//	if (x.last >= y.last) {
//		int temp = x.last - y.last, num = 0, t = 0;
//		for (i = 0; i <= y.last; i++) {
//			x.data[i + temp] += y.data[i];
//		}
//		for (i = 0; i <= x.last; i++) {
//			if (x.data[i] != 0) {
//				if (i == x.last) {
//					printf("%d", x.data[i]);
//					num++;
//				}
//				else if (i == x.last - 1) {
//					if (x.data[i] == 1) {
//						printf("x");
//					}
//					else if (x.data[i] == -1) {
//						printf("-x");
//					}
//					else
//						printf("%dx", x.data[i]);
//					if (x.data[i + 1] > 0) {
//						printf("+");
//					}
//					num++;
//				}
//				else {
//					if (x.data[i] == 1)
//						printf("x^%d", x.last - i);
//					else if (x.data[i] == -1)
//						printf("-x^%d", x.last - i);
//					else
//						printf("%dx^%d", x.data[i], x.last - i);
//					num++;
//					for (t = i + 1; t <= x.last; t++) {
//						if (x.data[t] > 0) {
//							printf("+");
//							break;
//						}
//						else if (x.data[t] < 0)
//							break;
//					}
//				}
//			}
//		}
//		if (num == 0) {
//			printf("0");
//		}
//	}
//	if (x.last < y.last) {
//		int temp = y.last - x.last, num = 0, t = 0;
//		for (i = 0; i <= x.last; i++) {
//			y.data[i + temp] += x.data[i];
//		}
//		for (i = 0; i <= y.last; i++) {
//			if (y.data[i] != 0) {
//				if (i == y.last) {
//					printf("%d", y.data[i]);
//					num++;
//				}
//				else if (i == y.last - 1) {
//					if (y.data[i] == 1) {
//						printf("x");
//					}
//					else if (y.data[i] == -1) {
//						printf("-x");
//					}
//					else
//						printf("%dx", y.data[i]);
//					if (y.data[i + 1] > 0) {
//						printf("+");
//					}
//					num++;
//				}
//				else {
//					if (y.data[i] == 1)
//						printf("x^%d", y.last - i);
//					else if (y.data[i] == -1)
//						printf("-x^%d", y.last - i);
//					else
//						printf("%dx^%d", y.data[i], y.last - i);
//					num++;
//					for (t = i + 1; t <= y.last; t++) {
//						if (y.data[t] > 0) {
//							printf("+");
//							break;
//						}
//						else if (y.data[t] < 0)
//							break;
//					}
//				}
//			}
//		}
//		if (num == 0) {
//			printf("0");
//		}
//	}
//}
//
