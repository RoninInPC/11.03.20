#ifndef H_FUNCTIONS
#define H_FUNCTIONS
struct list {
	float value;
	float* next;
	float* back;
};
typedef struct list List;
List* MakeList();
void Make(List** head, int n);
void PrintListFloat(List* head);
void PushBeforeThisNumber(List* head, float number);
#endif