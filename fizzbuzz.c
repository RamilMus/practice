#include <unistd.h>

// fizz = 3
// buzz = 5
// fizzbuzz = 15

int fizz(int a)
{
    if (a % 3 > 0)
        return(0);
    return (1);
}

int buzz(int a)
{
    if (a % 5 > 0)
        return(0);
    return (1);
}

int fizzbuzz(int a)
{
    if (a % 15 > 0)
        return(0);
    return (1);
}

int main(void)
{
    int i;
    i = 0;

    char a;
    char b;
    int c;
    int d;

    while(i++ < 101)
    {
        if (fizz(i) && !buzz(i))
            write(1, "fizz\n", 5);
        if (buzz(i) && !fizz(i))
            write(1, "buzz\n", 5);
        if (fizzbuzz(i))
            write(1, "fizzbuzz\n", 9);
        if (!fizz(i) && !buzz(i))
        {
            if (i > 9 && i < 100)
            {
                d = i;
                c = d % 10;
                d = i / 10;
                a = d + '0';
                write(1, &a, 1);
                b = c + '0';
                write(1, &b, 1);
                write(1, "\n", 1);
            }
            if (i < 10)
            {
                a = i + '0';
                write(1, &a, 1);
                write(1, "\n", 1);
            }
        }
    }
}

