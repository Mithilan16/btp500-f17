template <typename T>
class SList{
	struct Node{
		T data_;
		Node* next_;
		Node(const T& data=T{},Node* next=nullptr){
			data_=data;
			next_=next;
		}
	};
	Node* front_;
	Node* back_;
public:
	SList(){
		front_=nullptr;
		back_=nullptr;
	}
	void push_front(const T& data);
	void push_back(const T& data);
	void pop_front(const T& data);
	void pop_back(const T& data);
	void print() const;
	~SList();
};
void SList::push_front(const T& data){

}
void SList::push_back(const T& data){

}
void SList::pop_front(const T& data){

}
void SList::pop_back(const T& data){

}
void SList::print() const{
	Node* curr=front_;
	while(curr){
		std::cout << curr_->data_ << " ";
		curr=curr->next_;
	}
	std::cout << std::endl;
}
SList::~SList(){
	Node* curr=front_;
	while(curr){
		Node* rm=curr;
		curr=curr->next_;
		delete rm;
	}
}

template <typename T>
class Sentinel{
	struct Node{
		T data_;
		Node* next_;
		Node* prev_;
		Node(const T& data=T{},Node* next=nullptr, Node* prev=nullptr){
			data_=data;
			next_=next;
			prev_=prev;
		}
	};
	Node* front_;
	Node* back_;
public:
	Sentinel(){
		front_=new Node();
		back_=new Node();
		front_->next_=back_;
		back_->prev_=front_;
	}
	void push_front(const T& data);
	void push_back(const T& data);
	void pop_front(const T& data);
	void pop_back(const T& data);
	void print() const;
	~Sentinel();
};


void Sentinel::push_front(const T& data){

}
void Sentinel::push_back(const T& data){

}
void Sentinel::pop_front(const T& data){

}
void Sentinel::pop_back(const T& data){

}
void Sentinel::print() const{
	Node* curr=front_->next_;
	while(curr!=back_){
		std::cout << curr_->data_ << " ";
		curr=curr->next_;
	}
	std::cout << std::endl;
}
void Sentinel::reversePrint() const{
	Node* curr=back_->prev_;
	while(curr!=front_){
		std::cout << curr_->data_ << " ";
		curr=curr->prev_;
	}
	std::cout << std::endl;
}
Sentinel::~Sentinel(){
	Node* curr=front_;
	while(curr){
		Node* rm=curr;
		curr=curr->next_;
		delete rm;
	}
}
