/*Problem Statement: Find a Node in Linked List
Problem Level: EASY
Problem Description:
You have been given a singly linked list of integers. Write a function that returns the index/position of an integer data denoted by 'N' (if it exists). Return -1 otherwise.
Note :
Assume that the Indexing for the singly linked list always starts from 0.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the singly linked list separated by a single space.

The second line contains the integer value 'N'. It denotes the data to be searched in the given singly linked list.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case/query, return the index/position of 'N' in the singly linked list. Return -1, otherwise.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where 'M' is the size of the singly linked list.

Time Limit: 1 sec

Sample Input 1 :
2
3 4 5 2 6 1 9 -1
5
10 20 30 40 50 60 70 -1
6

Sample Output 1 :
2
-1

Sample Input 2 :
1
3 4 5 2 6 1 9 -1
6

Sample Output 2 :
4

Explanation for Sample Input 2 :
For the given singly linked list, considering the indices starting from 0, progressing in a left to right manner with a jump of 1, then the N = 6 appears at position 4.

*/
#include<iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput()
{
    int data;
    cin>>data;
    Node* head = NULL;
    Node* prev =NULL;
    while(data != -1){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
            prev =n;
        }
        prev->next = n;
        prev = prev->next;
        

        cin>>data;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp  = temp->next;
    }
}

void find(Node* head,int x){
    int count = 0;
    while(head != NULL){
        if(head->data == x){
            cout<<count<<endl;
            return;
        }
        head = head->next;
        count++;
    }
    cout<<-1<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    Node* head = takeInput();
    int x;
    cin>>x;
    find(head,x);
    }

    return 0;
}