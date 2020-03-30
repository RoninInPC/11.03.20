#include<windows.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include"functions.h"
float MakeRandomFloat(int i) {
    srand((i+1)*time(NULL));
    int k = rand() % 19+1;
    float ans = 0;
    for (int i = 0; i < k; i++) {
        ans += rand() % 10 / pow(10, i);
    }
    return ans;
}
void ListPushRandNumber(List* head,int i) {
    List* tmp = (List*)malloc(sizeof(List));
    srand(i);
    tmp->value = MakeRandomFloat(i);
    tmp->next = NULL;
    List* p = head;
    while (p->next != NULL)
        p = p->next;
    p->next = tmp;
    head = p;
}
List* MakeList() {
    List* ans=(List*)malloc(sizeof(List));
    ans->value = MakeRandomFloat(0);
    ans->next = NULL;
    return ans;
}
void Make(List* head, int n) {
    for (int i = 1; i < n; i++) { 
        ListPushRandNumber(head, i);
    }
}
void PrintListFloat(List* head) {
    while (head != NULL) {
        printf("%f ", head->value);
        head = head->next;
    }
    printf("\n");
}
void PushBeforeThisNumber(List* head, float number){
    int f = 0;
    List* head2 = head;
    int n = 0;
    while (head2 != NULL) {
        if ((int)head2->value == (int)number) {
            f = 1;
            break;
        }
        n++;
        head2 = head2->next;
    }
    if (f == 0) {
        printf("this number is left\n");
    }
    else {
        int n1 = 0;
        while (head != NULL) {
            if (n1 == n-1) {
                List* tmp= (List*)malloc(sizeof(List));
                tmp->value = MakeRandomFloat(n1);
                tmp->next = head->next;
                head->next = tmp;
                break;
            }
            n1++;
            head = head->next;
        }
    }
}