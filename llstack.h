#include "lab3.h"
template <typename T>
class Stack{
	SList<T> theStack_;
public:
	Stack(){}
	void push(const T& data){
		theStack_.push_front(data);
	}
	void pop(){
		theStack_.pop_front();
	}
	T top() const{
		const_iterator it=theStack_.begin();
		return *it;
	}
	bool empty() const{
		return theStack_.empty();
	}
	~Stack(){}
};