#include <iostream>
#include <cmath>

using namespace std;

//��֪�뾶�͸ߣ�����һ��Բ��������
int main()
{
    float radius = 2.5f; //Բ����뾶
    float height = 4.0f; //Բ�����

    float volume = 3.14 * pow(radius , 2) * height;
    cout << "Բ���������ǣ�" << volume << endl;
    return 0;
}