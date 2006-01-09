/**********************************************************************
 It is a simple main function that uses signed char ifs
**********************************************************************/

/* The file begin.h is included if compiler flag -DBEGINCODE is used */
#ifdef BEGINCODE
#include "begin.h"
#endif

int main() {
  
  signed char a,b;
  unsigned char c_active_else,c_inactive_else;
  unsigned char c_active_then,c_inactive_then;

  c_active_then=0;
  c_active_else=0;
  c_inactive_then=0;
  c_inactive_else=0;

  a=0x00;
  b=0xFF;
  if(a > b) {
    c_active_then++; /* $=OK! */
  }
  else {
    c_inactive_else++; /* $=FAILED! */
  }
  if(a < b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a == b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a >= b) {
    c_active_then++; /* $=OK! */
  }
  else {
    c_inactive_else++; /* $=FAILED! */
  }
  if(a <= b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  /* Before, c_active_then must be 2 */ c_active_then=0;
  /* Before, c_active_else must be 3 */ c_active_else=0;
  /* Before, c_inactive_then must be 0 */ c_inactive_then=0;
  /* Before, c_inactive_else must be 0 */ c_inactive_else=0;


  a=0xFF;
  b=0xFE;
  if(a > b) {
    c_active_then++; /* $=OK! */
  }
  else {
    c_inactive_else++; /* $=FAILED! */    
  }
  if(a < b) {
    c_inactive_then++; /* $=FAILED! */    
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a == b) {
    c_inactive_then++; /* $=FAILED! */    
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a >= b) {
   c_active_then++; /* $=OK! */
  }
  else {
    c_inactive_else++; /* $=FAILED! */    
  }
  if(a <= b) {
    c_inactive_then++; /* $=FAILED! */    
  }
  else {
    c_active_else++; /* $=OK! */
  }
  /* Before, c_active_then must be 2 */ c_active_then=0;
  /* Before, c_active_else must be 3 */ c_active_else=0;
  /* Before, c_inactive_then must be 0 */ c_inactive_then=0;
  /* Before, c_inactive_else must be 0 */ c_inactive_else=0;


  a=0x01;
  b=0x02;
  if(a > b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a < b) {
    c_active_then++; /* $=OK! */
  }
  else {
    c_inactive_else++; /* $=FAILED! */
  }
  if(a == b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a >= b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a <= b) {
    c_active_then++; /* $=OK! */
  }
  else {
   c_inactive_else++; /* $=FAILED! */
  }
  /* Before, c_active_then must be 2 */ c_active_then=0;
  /* Before, c_active_else must be 3 */ c_active_else=0;
  /* Before, c_inactive_then must be 0 */ c_inactive_then=0;
  /* Before, c_inactive_else must be 0 */ c_inactive_else=0;

  a=0x0F;
  b=0x0F;
  if(a > b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a < b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a == b) {
    c_active_then++; /* $=OK! */
  }
  else {
   c_inactive_else++; /* $=FAILED! */
  }
  if(a >= b) {
    c_active_then++; /* $=OK! */
  }
  else {
    c_inactive_else++; /* $=FAILED! */   
  }
  if(a <= b) {
    c_active_then++; /* $=OK! */
  }
  else {
   c_inactive_else++; /* $=FAILED! */
  }
  /* Before, c_active_then must be 3 */ c_active_then=0;
  /* Before, c_active_else must be 2 */ c_active_else=0;
  /* Before, c_inactive_then must be 0 */ c_inactive_then=0;
  /* Before, c_inactive_else must be 0 */ c_inactive_else=0;


  a=0x01;
  b=0xFF;
  if(a > b) {
    c_active_then++; /* $=OK! */
  }
  else {
    c_inactive_else++; /* $=FAILED! */
  }
  if(a < b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a == b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  if(a >= b) {
    c_active_then++; /* $=OK! */
  }
  else {
    c_inactive_else++; /* $=FAILED! */
  }
  if(a <= b) {
    c_inactive_then++; /* $=FAILED! */
  }
  else {
    c_active_else++; /* $=OK! */
  }
  /* Before, c_active_then must be 2 */ c_active_then=0;
  /* Before, c_active_else must be 3 */ c_active_else=0;
  /* Before, c_inactive_then must be 0 */ c_inactive_then=0;
  /* Before, c_inactive_else must be 0 */ c_inactive_else=0;


  return 0; 
  /* Return 0 only */
}

/* The file end.h is included if compiler flag -DENDCODE is used */
#ifdef ENDCODE
#include "end.h"
#endif
