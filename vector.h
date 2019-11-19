#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct{
int value;
}Data;

typedef struct vector{
int max_size;
int current_size;
Data* data;
void(*insert) (struct vector* vec,int index, Data d);
void(*delete) (struct vector* vec);
void(*remove) (struct vector* vec,int index);
Data * (*read) (struct vector* vec,int index);
}Vector;


Vector * newVector();

void insert_imp(struct vector* vec,int index, Data d);
void remove_imp(struct vector* vec,int index);
Data * read_imp(struct vector* vec,int index);
void delete_imp(struct vector* vec);



#endif // VECTOR_H_INCLUDED
