#include<iostream>
using namespace std;
#define MAX 10

int Stack[MAX];
int top=-1;

Push(){
    if(top==MAX-1){
        cout<<"Stack Overflow\n";
    }
    else{
        int data;
        cout<<"Enter data to be inserted:\t";
        cin>>data;
        top++;
        Stack[top]= data;
    }
}

Pop(){
    if(top==-1){
        cout<<"Stack Underflow\n";
    }
    else{
        int temp=Stack[top];
        top--;
        cout<<temp<<" deleted successfully\n";
    }
}

Peek(){
    if(top==-1){
        cout<<"\nStack is empty ";
    }
    else{
    cout<<"\n Peek value is:" <<Stack[top];
    }
}

display(){
    int temp=top;
    while(temp>=0){
        cout<<Stack[temp]<<"\t";
        temp--;
    }
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
Enter data to be inserted:      451

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      413

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
413     451
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
413 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      9798

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
9798    451
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      9889

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
9889    9798    451
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
3

 Peek value is:9889
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
1
Enter data to be inserted:      47897

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
47897 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
9889 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
9798 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4
451
Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
451 deleted successfully

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
4

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
2
Stack Underflow

Press
 0->Exit
 1->Push()
 2->Pop()
 3->Peek()
 4->display()
0
*/
