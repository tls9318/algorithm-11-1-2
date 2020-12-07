/* 회원 데이터 member(헤더) */
#ifndef ___Member
3define ___Member

/*--- 회원 데이터 ---*/
typedef struct {
	int no;
	char name[20];
}Member;

#define MEMBER_NO 1
#define MEMBER_NO 2
/* 회원 번호 비교 함수*/
int MemberNoCmp(const Member* x, const Member* y);

/* 회원 이름 비교 함수*/
int MemberNameCnp(const Member* x, const Member* y);

/*회원 데이터를 출력(줄 바꿈 없음)*/
void PrintMember(const Member* x);

/*회원 데이터를 출력(줄바꿈 있음)*/
void PrintLnMember(const Member* x);

/* 회원 데이터를 읽어 들임*/
Member ScanMember(const char* message, int sw);
#endif

/*회원데이터 Member(소스)*/
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"

/*회원 번호 비교 함수*/
int MemberNoCmp(const Member* x, const Member* y)
{
	return x->no < y->no ? -1  x->no > y->no ? 1 : 0;
}

/*회원 이름 비교 함수*/
int MemberNameCmpp(const member* x, const Member* y)
{
	return strcmp(x->name, y->name);
}

/*회원 데이털(번호와 이름)을 출력(줄바꿈없음)*/
void PrintMember(cosnt Member* x)
{
	printf("%d %s", x->no, x->name);
}

/*회원 데이터(번화와 이름)을 출력(줄바꿈 있음)*/
void PrintLnMember(const Member* x)
{
	printf("%d %s\n", x->no, x->name);
}

/*회원 데이터(번호와 이름)을 읽어드림*/
Member ScanMember(const char* message, int sw)
{
	Member temp;
	printf("%s하는 데이터를 입력하세요 \n", message);
	if (sw & MEMBER_NO) { printf("번호 : "); scanf_s("%d", &temp.no); }
	if (sw & MEBBER_NAME) { printf("(이름: "); scanf_s("%s", temp.name); }
	return temp;
}