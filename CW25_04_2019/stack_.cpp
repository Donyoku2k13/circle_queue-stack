#include "stack_.h"







void stack_::push(char val)
{
	if (this->curPos == this->maxSize) {
		cout << "Stack overflow\n";
		return;
	}
	else
	{
		this->arr[this->curPos] = val;
		this->curPos++;
	}
}

void stack_::pop()
{
	if (curPos == 0)
	{
		cout << "Stack is empty";
		return;
	}
	this->curPos--;
}

char stack_::top() const
{
	{
		return this->arr[this->curPos - 1];
	}
}

bool stack_::emty() const
{
	return this->curPos == 0;
}

int stack_::size() const
{
	return this->curPos;
}

int stack_::maxSize() const
{
	 return this->maxSize; 
}

stack_ stack_::operator=(const stack_ & obj)
{
	if (this==&obj)
	{return *this;}
	if (obj.arr==nullptr)
	{
		this->~stack_();
		return *this;
	}
}

stack_::stack_(const stack_ & obj)
{
	char *tmp = new char[obj.maxSize];
	for (size_t i = 0; i < obj.curPos; i++)
	{
		this->arr[i] = obj.arr[i];
	}
	this->maxSize = obj.maxSize;
	this->curPos = obj.curPos;
}

stack_ & stack_::operator=(stack_ && obj)
{
	swap(this->arr, obj.arr);
	swap(this->curPos, obj.curPos);
	swap(this->maxSize, obj.maxSize);
	return *this;
}

stack_::stack_(stack_ && obj)
{
	swap(this->arr, obj.arr);
	swap(this->curPos, obj.curPos);
	swap(this->maxSize, obj.maxSize);
	obj.arr = nullptr;
}

stack_::~stack_()
{
	delete[]this->arr;
	this->curPos = 0;
	this->maxSize = 0;
}