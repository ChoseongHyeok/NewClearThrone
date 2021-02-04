#include "stdafx.h"
#include "loadingScene.h"

loadingScene::loadingScene()
{
}


loadingScene::~loadingScene()
{
}

HRESULT loadingScene::init()
{
	_currentCount = 0;

	//�����带 ����غ���
	CreateThread(
		NULL,				//�������� ���ȼӼ�(�ڽ������찡 �����Ҷ�)
		NULL,				//�������� ����ũ��(NULL�� �θ� ���ξ����� ũ��� ����)
		threadFunction,		//������ ����� �Լ� ��
		this,				//������ �Ű�����(this�� �θ� �� Ŭ����)
		NULL,				//�������� Ư��(��ٸ���, �ٷ� ����(NULL�̸� ��� �ش�))
		NULL				//������ ���� �� �������� ID �Ѱ��� ������ NULL�� �д�
	);

	return S_OK;
}

void loadingScene::release()
{
}

void loadingScene::update()
{
	//�ε��� �� �Ǹ�
	if (_currentCount == LOADINGMAX)
	{
		SCENEMANAGER->changeScene("���Ӿ�");
	}
}

void loadingScene::render()
{
	
}

DWORD CALLBACK threadFunction(LPVOID lpParameter)
{
	//���⿡�ٰ�
	//�̹����Ŵ�����, ���� �Ŵ��� �Ἥ
	//add ���ָ� �ȴ�.

	loadingScene* loadingHelper = (loadingScene*)lpParameter;

	while (loadingHelper->_currentCount != LOADINGMAX)
	{
		IMAGEMANAGER->addImage("�ΰ���", "����ȭ��.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
		//���⿡ ���Ϲ� ���������� �̹����� ���� �� ���ҽ� ���� �߰��ض�

		//CPU ��� �����Ŵ°ǵ�
		//�̰� �Ȱɸ� �ʹ� �������� �� �����̸� �Ѿ���� (1000������)
		Sleep(1);

		loadingHelper->_currentCount++;
	}


	return 0;
}
