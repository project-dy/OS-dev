#pragma once

void kprintf(char*, int, int); // str : 출력할 스트링 주소 , int : 몇 번째 줄에 출력할 것인지, int : 몇 번째 행에 출력할 것인지
void kprintf_line_clear(int, int);
void kprintf_clear_all();

int kstrcmp(char*, char*);
int kstrlen(char*);