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

	//쓰레드를 사용해보자
	CreateThread(
		NULL,				//스레드의 보안속성(자식윈도우가 존재할때)
		NULL,				//스레드의 스택크기(NULL로 두면 메인쓰레드 크기와 동일)
		threadFunction,		//스레드 사용할 함수 명
		this,				//스레드 매개변수(this로 두면 본 클래스)
		NULL,				//스레드의 특성(기다릴지, 바로 실행(NULL이면 요게 해당))
		NULL				//스레드 생성 후 스레드의 ID 넘겨줌 보통은 NULL로 둔다
	);

	return S_OK;
}

void loadingScene::release()
{
}

void loadingScene::update()
{
	//로딩이 다 되면
	if (_currentCount == LOADINGMAX)
	{
		SCENEMANAGER->changeScene("게임씬");
	}
}

void loadingScene::render()
{
	
}

DWORD CALLBACK threadFunction(LPVOID lpParameter)
{
	//여기에다가
	//이미지매니저나, 사운드 매니저 써서
	//add 해주면 된다.

	loadingScene* loadingHelper = (loadingScene*)lpParameter;

	while (loadingHelper->_currentCount != LOADINGMAX)
	{
		IMAGEMANAGER->addImage("인게임", "시작화면.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
		//여기에 와일문 돌리지말고 이미지랑 사운드 등 리소스 파일 추가해라

		//CPU 잠깐 정지거는건데
		//이거 안걸면 너무 빨라가지고 눈 깜빡이면 넘어가버림 (1000개여도)
		Sleep(1);

		loadingHelper->_currentCount++;
	}


	return 0;
}
