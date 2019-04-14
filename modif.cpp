#include <iostream>
#define MAX_STACK_SIZE 10
using namespace std;

struct Element{
    int data;
    Element *next;
};

class MyStack {
    private:
	Element *head=NULL;


    public:
    bool isEmpty(){
        if(head==NULL){
        	return true;}
        	else return false;
		}

    void push(int databaru){
			Element *baru=new Element;
	    	baru->data=databaru;
	        baru->next=head;
	        head=baru;
	        cout<<"Data Masuk\n"<<endl;
    }
    void pop(){
    	if(isEmpty()==false){
    		Element *baru=new Element;
    		baru=head;
			head=head->next;
			delete baru;
			cout<<"Data dipop\n"<<endl;
        } else {
            cout<<"Stack Kosong"<<endl;
        }
    }
    void printStackList(){
    	Element *bantu;
    	bantu=head;

        if (isEmpty()==false){
            while(bantu!=NULL){
            	cout<<bantu->data<<endl;
            	bantu=bantu->next;
			}
        } else {
            cout<<"Stack Kosong"<<endl;
        }
    }
    int getTop(){
    	Element *top=head;
        return top->data;
    }
};

int main()
{
    MyStack s;
    int pil;
	int databaru;
	do{
		cout<<"linked List on Stack"<<endl;
		cout<<"-----------"<<endl<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Top Stack"<<endl;
		cout<<"4.Tampilkan Stack"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"pilihan anda : ";
		cin>>pil;
		switch(pil){
			case 1:cout<<endl;
			cout<<"data: ";
			cin>>databaru;
			cout<<endl;
			s.push(databaru);break;

			case 2:
			cout<<endl;
			s.pop();
			break;

			case 3:
			cout<<endl;
			if(s.isEmpty()==false){
			cout<<s.getTop()<<endl;
			}else{
				cout<<"Stack kosong";
				}
			cout<<endl;break;

			case 4:
			cout<<endl;
			s.printStackList();
			break;

			default:cout<<"\tselesai";break;

		}
	}
	while (pil!=5);
}
