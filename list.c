#include <stdio.h>
#include <stdlib.h>
#include "list.h"

 List * newList(){
fprintf(stderr,"In constructor:: LIST\n");
List *ptr = malloc(sizeof(List));
ptr->head=NULL;
ptr->tail=NULL;
ptr->insert=insert_imp_list;
ptr->read=read_imp_list;
return ptr;
}

void insert_imp_list(struct LList * l,int index, Data d){

}

Data * read_imp_list(struct LList * l,int index){

}
void remove_imp_list(struct LList* l,int index){


}

void delete_imp_list(struct LList* l){

}

