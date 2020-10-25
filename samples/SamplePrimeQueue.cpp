
#include <iomanip>
#include "Queue.h"
#include <stack>

#ifndef USE_QUEUE
#define USE_QUEUE



int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Работа очереди на примере массива из 10 чисел" << "\n";
	int a1[10];
	Queue<int>queue(10);
	for (int i = 0; i < 10; i++)
	{
		a1[i] = i;
		queue.push(a1[i]);
	}
	for (int i = queue.GetFirst(); i < queue.GetSize(); i++)
	{
		cout << queue.pop() << "\n";
	}
}

#endif