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

    printf("���� ���ϰ� ������ 1��, ����� ���ϰ� ������ 2��, ��ݷ��� ���ϰ� ������ 3�� �Է��ϼ���: ");
    scanf("%d", &num1);

    if (num1 == 1)
        {
        printf("���ϰ� ���� ���� ���� ������ ���ӵ��� ���� �Է��ϼ���:\n");
        scanf("%d %d", &fm, &fa);

        ff = fm * fa;

        printf("���ϰ� ���� ���� %d �Դϴ�.", ff);
        }

    else if (num1 == 2)
        {
        printf("���ϰ� ���� ����� ���� ������ �ӵ��� ���� �Է��ϼ���: \n");
        scanf("%d %d", &pm, &pv);

        pp = pm * pv;

        printf("���ϰ� ���� ����� %d �Դϴ�.", pp);
        }

    else
        {
        printf("���ϰ� ���� ��ݷ��� ���� ������ �ӵ��� ���� �Է��ϼ���: \n");
        scanf("%d %d", &if1, &it);

        ii = if1 * it;

        printf("���ϰ� ���� ��ݷ��� %d �Դϴ�.", ii);

        }
    return 0;
}
