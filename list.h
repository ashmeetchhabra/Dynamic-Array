#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED


//typedef struct data_node{
//	int data;
//}Data;

typedef struct node{
      		Data data;
       		struct node * next, *prev;
}Node;

typedef struct LList{
	Node * head, * tail;
	void(*insert) (struct LList* l,int index, Data d);
	Data *(*read) (struct LList* l,int index);
	//void(*insert) (struct List* l,int index, Data d);
void(*delete) (struct LList* l);
void(*remove) (struct LList* l,int index);
//Data  (*read) (struct vector* vec,int index);
}List;

 List * newList();

void insert_imp_list(struct LList* l, int index,Data d);
Data * read_imp_list(struct LList* l, int index);
void remove_imp_list(struct LList* l,int index);
void delete_imp_list(struct LList* l);




//Vector * newVector();




#endif // LIST_H_INCLUDED
