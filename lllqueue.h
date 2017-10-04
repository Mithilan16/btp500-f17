template <typename T>
class Queue{
	SList<T> theQueue_;
public:
	Queue(){}
	void enqueue(const T& data){
		theQueue_.push_back();
	}
	void dequeue(){
		theQueue_.pop_front();
	}
	T front() const{
		const_iterator it=theQueue_.begin();
		return *it;
	}
	bool empty() const{
		return theQueue_.empty();
	}
	~Queue(){}
};