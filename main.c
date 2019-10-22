#define _CRT_SECURE_NO_WARRINGS
#include <stdio.h>

int main()
{
    int num1;
    int fm, fa;
    int ff;
    int pm, pv;
    int pp;
    int if1, it;
    int ii;

    printf("힘을 구하고 싶으면 1을, 운동량을 구하고 싶으면 2를, 충격량을 구하고 싶으면 3을 입력하세요: ");
    scanf("%d", &num1);

    if (num1 == 1)
        {
        printf("구하고 싶은 힘에 대한 질량과 가속도를 각각 입력하세요:\n");
        scanf("%d %d", &fm, &fa);

        ff = fm * fa;

        printf("구하고 싶은 힘은 %d 입니다.", ff);
        }

    else if (num1 == 2)
        {
        printf("구하고 싶은 운동량에 대한 질량과 속도를 각각 입력하세요: \n");
        scanf("%d %d", &pm, &pv);

        pp = pm * pv;

        printf("구하고 싶은 운동량은 %d 입니다.", pp);
        }

    else
        {
        printf("구하고 싶은 충격량에 대한 질량과 속도를 각각 입력하세요: \n");
        scanf("%d %d", &if1, &it);

        ii = if1 * it;

        printf("구하고 싶은 충격량은 %d 입니다.", ii);

        }
    return 0;
}
