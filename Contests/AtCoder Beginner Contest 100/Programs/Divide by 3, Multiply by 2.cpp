#include <cstdio>

int main()
{
    int no_of_elements;
    scanf("%d", &no_of_elements);

    int sums_of_2_exponents = 0;
    while(no_of_elements--)
    {
        int element;
        scanf("%d", &element);

        while(element%2 == 0)
        {
            sums_of_2_exponents++;
            element /= 2;
        }
    }

    printf("%d\n", sums_of_2_exponents);
    return 0;
}
