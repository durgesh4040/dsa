class Solution {
  public:
    // Function to rotate a linked list.
    
  Node *solve(Node *head1,int dist){
     

     int c=1;
     while(c<dist){
   
         c++;
         head1=head1->next;
     }

   
   return head1;
     
    }
    Node* rotate(Node* head, int k) {
        // Your code here
      
      if(head==NULL) return head;
      int len=1;
      Node *tail =head;
      while(tail->next!=NULL){
          len++;
          tail=tail->next;
      }
      tail->next=head;

   Node *temp=  solve(head,k);
     
        head=temp->next;
        temp->next=NULL;
      return head;
      
    }
        
};
