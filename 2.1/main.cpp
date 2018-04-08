#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
private:
    char fname[30],lname[30];
    int age,s1,s2,s3,s4;
    long long number;
    double avg;
public:
    void input() {
        scanf("%s",fname);
        getchar();
        for (int i=0;;i++)    {
            scanf("%c",&lname[i]);
            if (lname[i]==',')  {
                lname[i]='\0';
                break;
            }
        }
        scanf("%d,%lld,%d,%d,%d,%d",&age,&number,&s1,&s2,&s3,&s4);
    }
    double calculate() {
        avg=1.0*(s1+s2+s3+s4)/4;
        return avg;
    }
    void output()    {
        printf("%s ",fname);
        printf("%s,",lname);
        if ((int)(avg*10)%10==0)
            printf("%d,%lld,%.0lf\n",age,number,avg);
        else
            printf("%d,%lld,%.0lf\n",age,number,avg);
    }
};
int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}
