
#include <stdio.h>
#include<string.h>

struct Stu
{
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};//ģ��
void print(struct Stu* ps)
{
    //printf("%s %d %s %s", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);����һ

    printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
    struct Stu s = { "zhangsan",20,"nan","114514" };//����һ������Ķ���
    //printf("%s %d %s %s", s.name, s.age, s.sex, s.tele);
    print(&s);
    return 0;
}


