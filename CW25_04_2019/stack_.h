#pragma once
#include<iostream>

using namespace std;
class stack_
{
private:
	char* arr;
	int maxSize;
	int curPos;
public:
	stack_(int size);
	
	void push(char val);
	void pop();
	char top()const;
	bool emty() const;
	int size()const;
	int maxSize()const; 
	stack_ operator=(const stack_& obj);
	stack_(const stack_&obj);
	stack_& operator=(stack_&&obj);
	stack_(stack_&&obj);
	~stack_();
};

