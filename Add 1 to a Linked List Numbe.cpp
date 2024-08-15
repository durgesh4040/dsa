class Solution {
  public:
  
 Node * reverse(Node *head){
      Node *next=NULL;
      Node *prev=NULL;
    Node * curr=head;
     while(curr!=NULL){
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }

     
     return prev;
  }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding on0e
    
     head=reverse(head);
     Node *temp=head;

        int carry=1;
      
        while(temp!=NULL ){
         int sum=temp->data+carry;
         carry=sum/10;
          
          temp->data=sum%10;
          if(carry==0) break;
          if(temp->next==NULL &&carry!=0){
             temp->next=new Node(carry);
             carry=0;
          }
          temp=temp->next;
            
        }
        Node *t=reverse(head);
     
        return t;
    }
};
