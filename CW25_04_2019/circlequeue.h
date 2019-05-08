#pragma once
#include<vector>
template<class T>
class cqueue
{
	vector<T>q;
public:
	void push(const T & obj) {
		q.push_back(obj);
	}
	void push(T&&obj) {
		q.push_back(obj);
	}
	void pop(bool remove) {
		if (!remove) 		 
			/*T tmp = q[0];  with 2 useless copying 
			q.erase(begin(q));
			q.push_back(q[0]);*/
			q.push_back(move(q[0]));
			
		
		q.erase(begin(q));
	}
	const T& front()const {
		return q[0];
	}
	const T& back()const {
		return q[q.size()-1]
	}
	int size()const {
		return 0;
	}
};