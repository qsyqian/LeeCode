#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define BOOL char
#define TRUE 0
#define FALSE 1

// 练习一维数组的定义和操作
int singleArrays()
{
    int i;
    int numbers[10];
    for (i = 0; i < 10; i ++) {
        numbers[i] = i;
    }

    for (i = 0; i < 10; i ++) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}

// 练习二维数组的定义和操作
int multiArrays()
{
    int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int i = 0;
    int j = 0;

    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 4; j ++) {
            printf("a[%d][%d] is %d\n", i, j, a[i][j]);
        }
    }
    return 0;
}

// 练习字符串数组的定义和访问
int stringExercise()
{
    char * address = "Henan Jiaozuo";
    char * name  = "qianshuangyang";
    char * email  = "qianshuangyang@kingsoft.com";

    printf("address is %s, and address's length is %lu\n", address, strlen(address));
    printf("name is %s, and name's length is %lu\n", name, strlen(name));
    printf("email is %s, and email's length is %lu\n", email, strlen(email));
    return 0;
}

// 练习static关键字用法
int runner()
{
    static int count = 0;
    count ++;
    return count;
}

// 练习指针用法
int pointer()
{
    int a = 25;
    int * pointer_to_a = &a;

    printf("a is %d\n", a);
    printf("a is %d\n", *pointer_to_a);
    printf("a+1 is %d\n", a + 1);
    printf("a+1 is %d\n", *pointer_to_a + 1);
    printf("a's pointer is %p\n", &a);
    printf("a's pointer is %p\n", pointer_to_a);
    printf("a's pointer next address is %d\n", *(pointer_to_a + 1));
    return 0;
}

typedef struct {
    char * name;
    int age;
} person;

// 练习函数参数--传值
void birthday(person p)
{
    p.age ++;
}

// 练习函数参数--传指针
void birthdayP(person * p)
{
    p->age++;
}

// 练习函数参数为结构体
void struct_exercise()
{
    person p;
    p.name = "John";
    p.age = 18;
    birthday(p);
    printf("age is %d\n", p.age);
    birthdayP(&p);
    printf("age is %d\n", p.age);
}

// 练习内存分配
void mem_allocate()
{
    person * p = (person *) malloc(sizeof(person));
    p -> name = "Jhon";
    p -> age = 18;
    printf("name is %s, age is %d.\n", p->name, p->age);
    free(p);
}

// 练习数组指针
void array_pointer()
{
    int yuanyin[] = {1, 2, 3, 4, 5};
    int * pointer_to_yuanyin = &yuanyin;
    int i;

    // 打印地址
    for (i = 0; i < 5; i ++) {
        printf("&yuanyin[%d]: %p, pointer_to_yuanyin + %d: %p, yuanyin + %d: %p\n", i, &yuanyin[i], i, pointer_to_yuanyin + i, i, yuanyin + i);
    }
    for (i = 0; i < 5; i ++) {
        printf("yuanyin[%d]: %d, *(pointer_to_yuanyin + %d): %d, *(yuanyin + %d): %d\n", i, yuanyin[i], i, *(pointer_to_yuanyin + i), i, *(yuanyin + i));
    }
}

// 练习到
// https://www.learn-c.org/en/Arrays_and_Pointers

int main(int argc, char const *argv[])
{
    array_pointer();
    return 0;
}

