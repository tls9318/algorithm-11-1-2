/* ȸ�� ������ member(���) */
#ifndef ___Member
3define ___Member

/*--- ȸ�� ������ ---*/
typedef struct {
	int no;
	char name[20];
}Member;

#define MEMBER_NO 1
#define MEMBER_NO 2
/* ȸ�� ��ȣ �� �Լ�*/
int MemberNoCmp(const Member* x, const Member* y);

/* ȸ�� �̸� �� �Լ�*/
int MemberNameCnp(const Member* x, const Member* y);

/*ȸ�� �����͸� ���(�� �ٲ� ����)*/
void PrintMember(const Member* x);

/*ȸ�� �����͸� ���(�ٹٲ� ����)*/
void PrintLnMember(const Member* x);

/* ȸ�� �����͸� �о� ����*/
Member ScanMember(const char* message, int sw);
#endif

/*ȸ�������� Member(�ҽ�)*/
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"

/*ȸ�� ��ȣ �� �Լ�*/
int MemberNoCmp(const Member* x, const Member* y)
{
	return x->no < y->no ? -1  x->no > y->no ? 1 : 0;
}

/*ȸ�� �̸� �� �Լ�*/
int MemberNameCmpp(const member* x, const Member* y)
{
	return strcmp(x->name, y->name);
}

/*ȸ�� ������(��ȣ�� �̸�)�� ���(�ٹٲ޾���)*/
void PrintMember(cosnt Member* x)
{
	printf("%d %s", x->no, x->name);
}

/*ȸ�� ������(��ȭ�� �̸�)�� ���(�ٹٲ� ����)*/
void PrintLnMember(const Member* x)
{
	printf("%d %s\n", x->no, x->name);
}

/*ȸ�� ������(��ȣ�� �̸�)�� �о�帲*/
Member ScanMember(const char* message, int sw)
{
	Member temp;
	printf("%s�ϴ� �����͸� �Է��ϼ��� \n", message);
	if (sw & MEMBER_NO) { printf("��ȣ : "); scanf_s("%d", &temp.no); }
	if (sw & MEBBER_NAME) { printf("(�̸�: "); scanf_s("%s", temp.name); }
	return temp;
}