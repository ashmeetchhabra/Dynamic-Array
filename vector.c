#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

Vector * newVector(){
    fprintf(stderr,"In constructor\n");
    Vector* ptr = malloc(sizeof(Vector));
    ptr->max_size=0;
    ptr->current_size=0;
    ptr->data=malloc(sizeof(Data)*ptr->max_size);
    ptr->insert=insert_imp;
    ptr->remove=remove_imp;
    ptr->delete=delete_imp;
    ptr->read=read_imp;
    return ptr;
}

void insert_imp(struct vector * vec, int index, Data d)
{
    if((index<=vec->current_size)&& index>=0){
        vec->data[index]=d;
        vec->current_size++;
        fprintf(stderr,"Data Inserted::%d\n",d.value);
    }
}

Data * read_imp(struct vector * vec,int index)
{
    if(index>=vec->current_size || index < 0){
    vec->data->value=0;
        return 0;
    }
    return &vec->data[index];
}

void remove_imp(struct vector * vec , int index){

if(index>vec->current_size || index<0){
    fprintf(stderr,"Index out of bound");
    exit(1);
}
for(int i=0; i<index; i++){
    vec->data[index+i]=vec->data[index+i+1];
}
vec->current_size=vec->current_size-1;
}

void delete_imp(struct vector * vec)
{
    free(vec->data);
    free(vec);
    fprintf(stderr,"Vectot Removed\n");
}
