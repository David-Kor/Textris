#ifndef _RENDERER_CLASS
#define _RENDERER_CLASS
#include <Windows.h>

class Renderer
{
private:
	HANDLE mv_hBuffer[2];	//ȭ�� ���� �ڵ�
	int mv_nScreenIndex;	//���� ��µ� ����
	const short mv_sMAXLINE;
	const short mv_sMAXWORD;

public:
	Renderer(const short sMaxWord, const short sMaxline);
	~Renderer();

	void UpdateBuffer(const std::wstring *pwStr, const size_t &count);
	void Rendering();
	void ResetBuffer();
};

#endif