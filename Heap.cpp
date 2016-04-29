#include"Heap.h"

void TestHeap()
{
	int array[] = { 21, 5, 4, 6, 9, 3, 8, 13, 0, 7 };
	Heap<int> hp(array,10);
	hp.PrintHeap();
	hp.Push(2);
	hp.PrintHeap();
	hp.Push(1);
	hp.PrintHeap();
	Heap<int> hp1;
	hp1.Push(3);

}

int main()
{
	TestHeap();
	system("pause");
	return 0;
}