#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//�e���v���[�g�@�^���p�����[�^�ɂƂ��Ă��낢��Ȍ^�ɑΉ��ł���@�\
//              ���Ԑ��̈��

//2�̐����̂����傫���ق���Ԃ�
int myMax(int a, int b);
//2�̒P���x�����̂����傫���ق���Ԃ�
float myMax(float a, float b);
//2�̃o�C���x�����̂����傫���ق���Ԃ�
double myMax(double a, double b);


int myMax(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
//2�̒P���x����(float)�̂����傫���ق���Ԃ�

float myMax(float a, float b)
{
	if (a > b)
		return a;
	else
		return b;
}

double myMax(double a, double b)
{
	if (a > b)
		return a;
	else
		return b;
}

// �֐��e���v���[�g
template <typename T>
T tMax(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}

// �N���X�e���v���[�g
template <typename T>
class Vec2
{
public:
	T x;
	T y;
	T GetX() { return(x); }
	void SetX(T _x) { x = _x; }
	void PrintVec() { cout << "(x,y)= (" << x << "," << y << ")" << endl; }	


};

//�x�N�g���̒�����T�^�ŕԂ������o�֐������
//�x�N�g���̒����Ŕ�r����>���Z�q���I�[�o�[���[�h
//�x�N�g���̒������ׂĒ����ق��\�����Ė{���ɂ����Ă��邩�m�F(tMax�ɓ����)


int main() {
	//int var1 = 10;
	//int var2 = 20;
	//int res = tMax<int>(var1, var2);
	//cout << "myMax 10 20 : " << res << endl;
	//float var3 = 10.6;
	//float var4 = 2.1;
	//float res2 = tMax<float>(var3, var4);
	//cout << "myMax : " << res2 << endl;
	//double var5 = 0.000062;
	//double var6 = 1e-15; // 10�̃}�C�i�X15��
	//double res3 = tMax<double>(var5, var6);
	//cout << "myMax : " << res3 << endl;

	Vec2 <double> v;

	v.x = 2.2;
	v.y = 3.5;
	v.PrintVec();


	return 0;
}