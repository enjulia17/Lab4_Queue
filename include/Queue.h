#pragma once
#include "Stack.h"

template<class T2>
class Queue :public Stack<T2>
{
public:
	Queue() :Stack<T2>(){}
	Queue(Queue& lhs) :Stack<T2>(lhs){}
	Queue(int _size) :Stack<T2>(_size){}
	~Queue(){}
	
	const T2& pop() override
	{
		if (this->IsEmpty()) throw logic_error("Queue is empty");
		if (Array == 0) throw logic_error("");
		const T2* tmp = this->Array[this->first];
		this->Array[this->first] = 0;
		this->first++;
		this->DataCount--;
		return (*tmp);
	}

};