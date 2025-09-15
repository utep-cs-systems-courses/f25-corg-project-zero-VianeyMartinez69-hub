#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow that is triangle and a center rectangle
void print_arrow(int leftCol, int size){
  int width = 3;
  int height = size;
  int center = leftCol + size; // Triangle's center
  int recleftCol = center - (width/2); 
  print_triangle(leftCol, size); // Head
  print_rectangle(recleftCol, width, height); // Body
}

// Prints a rectangle
void print_rectangle(int recleftCol, int  width, int height){
  for (int row = 0; row < height; row++){
    int col;
    for (col = 0; col < recleftCol; col++) putchar(' ');
    for (       ; col < recleftCol + width; col++) putchar('*');
    putchar('\n');
  }
}
