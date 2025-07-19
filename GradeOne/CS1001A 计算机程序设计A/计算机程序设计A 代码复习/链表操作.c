#include <stdio.h>
#include <stdlib.h>
struct node {
	int num;
	struct node *next;
};
struct node *CreatHead() {
	struct node *head, *p;
	int num;
	head = NULL;
	printf("Input a integer:");
	scanf("%d", &num);
	while (num) {
		p = (struct node*)malloc(sizeof(struct node));
		p->num = num;
		p->next = head;
		head = p;
		printf("Input a integer:");
		scanf("%d", &num);
	}
	return head;
}
struct node *CreatRear() {
	struct node *head, *p, *rear;
	int num;
	head = NULL;
	printf("Input a integer:");
	scanf("%d", &num);
	while (num) {
		p = (struct node*)malloc(sizeof(struct node));
		p->num = num;
		p->next = NULL;
		if (!head)
			head = p;
		else
			rear->next = p;
		rear = p;
		printf("Input a integer:");
		scanf("%d", &num);
	}
	return head;
}
void PrintList(struct node *head) {
	struct node *p = head;
	while (p) {
		printf("%d", p->num);
		p = p->next;
	}
}
struct node *Insert(struct node *head, struct node *q) {
	struct node *p;
	if (!head) {
		head = q;
		return head;
	}
	if (head->num > q->num) {
		q->next = head;
		head = q;
		return head;
	}
	p = head;
	while (p->next && p->num > q->num)
		p = p->next;
	q->next = p->next;
	p->next = q;
	return head;
}
struct node *Delete(struct node *head, int num) {
	struct node *p, *q;
	if (head && head->num == num) {
		p = head;
		head = p->next;
		free(p);
		return head;
	}
	q = p = head;
	while (p && p->num != num) {
		q = p;
		p = p->next;
	}
	q->next = p;
	if (p) {
		q->next = p->next;
		free(p);
		return head;
	}
	printf("Not Found!");
	return head;
}
int main() {
	struct node *head, *ps;
	int num;
	printf("Creat List:\n");
	head = CreatHead();
	printf("Print List:\n");
	PrintList(head);
	ps = (struct node*)malloc(sizeof(struct node));
	printf("Insert a integer:\n");
	scanf("%d", &ps->num);
	head = Insert(head, ps);
	printf("Delete a integer:\n");
	scanf("%d", &num);
	head = Delete(head, num);
	printf("Print List:\n");
	PrintList(head);
	return 0;
}

