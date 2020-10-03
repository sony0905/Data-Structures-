#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *link;
};
Node *top=NULL;

Push(){
    Node *newNode= new Node();
    cout<<"Enter data to be inserted:\t";
    cin>>newNode->data;
    if(top==NULL){
        newNode->link= NULL;
    }
    else{
        newNode->link= top;
    }
    top= newNode;
}

Pop(){
    if(top==NULL){
        cout<<"\nStack underflow";
    }
    else{
        Node *temp= top;
        top= top->link;
        cout<<temp->data<<" deleted successfully\n";
        delete(temp);
    }
}

Peek(){
    if(top==NULL){
        cout<<"\nStack is empty ";
    }
    else{
    cout<<"\n Peek value is:" <<top->data;
    }
}

display(){
    Node *temp= top;
    do{
        cout<<temp->data<<"\t";
        temp=temp->link;
    }while(temp!=NULL);
}

int main(){
    int ch;
    do{
    cout<<"\nPress\n 0->Exit \n 1->Push() \n 2->Pop() \n 3->Peek() \n 4->display() \n";
    cin>>ch;
    switch(ch){
        case 0: break;
        case 1: Push();
                break;
        case 2: Pop();
                break;
        case 3: Peek();
                break;
        case 4: display();
                break;
        default: cout<<"Invalid choice\n";
    }
    }while(ch);
}

/*
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      6412

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
6412
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      63130

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
63130   6412
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      4557

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      863

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
863     4557    63130   6412
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
863 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
4557    63130   6412
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
3

Peek value is: 4557
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      87

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      989

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
989     87      4557    63130   6412
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
989 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
87      4557    63130   6412
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
87 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
4557 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
63130 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
6412
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
6412 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2

Stack underflow
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2

Stack underflow
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
0

*/
