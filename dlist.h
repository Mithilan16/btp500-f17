template <typename T>
class DList{
	struct Node{
		T data_;
		Node* next_;
		Node* prev_;
		Node(const T& d=T{},Node* n=nullptr,Node* p=nullptr){
			data_=d;	
			next_ = n;
			prev_ = p;
		}
	};

	Node* front_;
	Node* back_;

public:
	DList();
	void push_front(const T& d);
	void push_back(const T& d);
	void pop_front();
	void pop_back();
	void print() const;
	~DList();
};












