#include<iostream>
using namespace std;
#define MAX 10

int front=-1;
int rear=-1;
int Queue[MAX];

Enqueue(){
    int data;
    cout<<"\nEnter data to be inserted:\t";
    cin>>data;
    if(rear== MAX-1){
        cout<<"\nQueue overflow\n";
    }
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        Queue[rear]= data;
    }
    else{
        rear++;
        Queue[rear]=data;
    }
}

Dequeue(){
    int del;
    if(front==-1){
        cout<<"\nQueue overflow\n";
    }
    else if(front==rear){
        del= Queue[front];
        front=-1;
        rear=-1;
        cout<<"\n"<<del<<" deleted successfully\n";
    }
    else{
        del= Queue[front];
        front++;
        cout<<"\n"<<del<<" deleted successfully\n";
    }
}


Peek(){
    if(front==-1){
        cout<<"\nQueue is empty ";
    }
    else{
    cout<<"\n Peek value is:" <<Queue[front];
    }
}

display(){
    int temp=front;
    while(temp<=rear){
        cout<<Queue[temp]<<"\t";
        temp++;
    }
}

int main(){
    int ch;
    do{
    cout<<"\nPress\n 0->Exit \n 1->Enqueue() \n 2->Dequeue() \n 3->Peek() \n 4->display() \n";
    cin>>ch;
    switch(ch){
        case 0: display();
                break;
        case 1: Enqueue();
                break;
        case 2: Dequeue();
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
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      545

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      78451

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      84521

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
545     78451   84521
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

545 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
78451   84521
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
3

 Peek value is:78451
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      8784

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      96300

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
78451   84521   8784    96300
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

78451 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
84521   8784    96300
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
0
84521   8784    96300
*/
