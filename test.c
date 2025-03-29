
#include <stdio.h>
#include<string.h>

struct Stu
{
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};//模板
void print(struct Stu* ps)
{
    //printf("%s %d %s %s", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);方法一

    printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
    struct Stu s = { "zhangsan",20,"nan","114514" };//创建一个具体的对象
    //printf("%s %d %s %s", s.name, s.age, s.sex, s.tele);
    print(&s);
    return 0;
}


