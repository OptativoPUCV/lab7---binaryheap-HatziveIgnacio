#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq)
{
  if( pq == NULL || pq->size == 0) return NULL;
  
  return pq->heapArray[0].data;
}



void heap_push(Heap* pq, void* data, int priority)
{
  if(pq == NULL) return;

  if( pq->size == pq->capac)
  {
    int nueva_capacidad = (2* pq->capac) + 1;
    pq->heapArray = realloc(pq->heapArray, nueva_capacidad * sizeof(heapElem));
    pq->capac = nueva_capacidad;
  }
  
}


void heap_pop(Heap* pq){

}

Heap* createHeap()
{
  Heap *dato = malloc(sizeof(Heap));
  dato->capac=3;
  dato->size=0;
  dato->heapArray = malloc(3 *sizeof(heapElem));
  return dato;
}
