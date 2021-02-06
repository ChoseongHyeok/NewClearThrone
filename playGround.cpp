#include "stdafx.h"
#include "playGround.h"

playGround::playGround()
{
}


playGround::~playGround()
{
}

HRESULT playGround::init()
{
	gameNode::init(true);  
	IMAGEMANAGER->addImage("mouse_aim","image/ui/mouse_aim.bmp",40,40,true,RGB(255,0,255));

	SCENEMANAGER->addScene("���۾�", new StartScene);
	SCENEMANAGER->addScene("���θ޴���", new mainmenuScene);
	SCENEMANAGER->addScene("���Ӿ�", new gameScene);
	SCENEMANAGER->addScene("Ŀ���Ҿ�", new customScene);
	SCENEMANAGER->addScene("������", new maptoolScene);
	SCENEMANAGER->addScene("���þ�", new settingScene);
	SCENEMANAGER->addScene("����Ʈ��", new selectScene);
	SCENEMANAGER->addScene("ī�弱�þ�", new cardselectScene);


	SOUNDMANAGER->addSound("���θ޴�", "sound/���/���θ޴�.mp3", true, true);
	SOUNDMANAGER->addSound("ĳ���ͼ���", "sound/���/ĳ���ͼ���.mp3", true, true);
	SOUNDMANAGER->addSound("��������1", "sound/���/��������1.mp3", true, true);
	SOUNDMANAGER->addSound("��������2", "sound/���/��������2.mp3", true, true);
	SOUNDMANAGER->addSound("��������3", "sound/���/��������3.mp3", true, true);

	SOUNDMANAGER->addSound("����������", "sound/�÷��̾� ���/����������.mp3", false, false);
	SOUNDMANAGER->addSound("������������", "sound/�÷��̾� ���/������������.mp3", false, false);
	SOUNDMANAGER->addSound("ũ����Ż������", "sound/�÷��̾� ���/ũ����Ż������.mp3", false, false);
	SOUNDMANAGER->addSound("�÷�Ʈ������", "sound/�÷��̾� ���/�÷�Ʈ������.mp3", false, false);
	SOUNDMANAGER->addSound("�ǽ�������", "sound/�÷��̾� ���/�ǽ�������.mp3", false, false);

	SOUNDMANAGER->addSound("������ ��ų", "sound/������ ��ų.mp3", false, false);
	SOUNDMANAGER->addSound("ũ����Ż ��ų", "sound/ũ����Ż��ų.mp3", false, false);
	SOUNDMANAGER->addSound("�÷�Ʈ ��ų", "sound/�÷��̾� ���/�÷�Ʈ ��ų.mp3", false, false);
	SOUNDMANAGER->addSound("�ǽ� ��ų", "sound/�÷��̾� ���/�ǽ� ��ų.mp3", false, false);

	SOUNDMANAGER->addSound("Ŭ���Ҹ�", "sound/ȿ����/Ŭ���Ҹ�.mp3", false, false);
	SOUNDMANAGER->addSound("���߻���", "sound/ȿ����/��������.mp3", false, false);
	
	SOUNDMANAGER->addSound("���� ����", "sound/ȿ����/ĳ���� ����/���� ����.mp3", false, false);
	SOUNDMANAGER->addSound("�÷�Ʈ����", "sound/ȿ����/ĳ���� ����/�÷�Ʈ ����.mp3", false, false);
	SOUNDMANAGER->addSound("�������", "sound/ȿ����/ĳ���� ����/������ ����.mp3", false, false);
	SOUNDMANAGER->addSound("ũ����Ż ����", "sound/ȿ����/ĳ���� ����/ũ����Ż����.mp3", false, false);
	SOUNDMANAGER->addSound("�ǽ� ����", "sound/ȿ����/ĳ���� ����/�ǽ� ����.mp3", false, false);

	SOUNDMANAGER->addSound("��� �¾�����", "sound/ȿ����/���ʹ�/���/��� �¾�����.mp3", false, false);
	SOUNDMANAGER->addSound("���1", "sound/ȿ����/���ʹ�/���/���1.mp3", false, false);
	SOUNDMANAGER->addSound("���2", "sound/ȿ����/���ʹ�/���/���2.mp3", false, false);
	
	SOUNDMANAGER->addSound("������ �һձ�", "sound/ȿ����/���ʹ�/������/�һձ�.mp3", false, true);
	
	SOUNDMANAGER->addSound("��� ������1", "sound/ȿ����/���ʹ�/���/���������1.mp3", false, false);
	SOUNDMANAGER->addSound("��� ������2", "sound/ȿ����/���ʹ�/���/���������2.mp3", false, false);

	SOUNDMANAGER->addSound("�򵶵��°�", "sound/ȿ����/���ʹ�/�򵶵��鼭�ѽ��.mp3", false, true);
	SOUNDMANAGER->addSound("�� ����", "sound/ȿ����/���ʹ�/�򵶵���.mp3", false, false);
	SOUNDMANAGER->addSound("���� ����", "sound/ȿ����/���ʹ�/��������1.mp3", false, false);
	
	SOUNDMANAGER->addSound("����", "sound/ȿ����/����/����.mp3", false, false);
	SOUNDMANAGER->addSound("�ܹ� ���", "sound/ȿ����/����/�ܹ� ���.mp3", false, false);
	SOUNDMANAGER->addSound("�б�", "sound/ȿ����/����/�б�.mp3", false, false);
	SOUNDMANAGER->addSound("������", "sound/ȿ����/����/������.mp3", false, false);
	SOUNDMANAGER->addSound("��ġ", "sound/ȿ����/����/��ġ.mp3", false, false);
	SOUNDMANAGER->addSound("��Ҹ�", "sound/ȿ����/����/��Ҹ�.mp3", false, false);
	SOUNDMANAGER->addSound("������", "sound/ȿ����/����/������.mp3", false, false);
	SOUNDMANAGER->addSound("������", "sound/ȿ����/����/������.mp3", false, false);
	SOUNDMANAGER->addSound("Į", "sound/ȿ����/����/Į.mp3", false, false);




	SCENEMANAGER->changeScene("���۾�");

	return S_OK;
}


void playGround::release()
{
	gameNode::release();
}

void playGround::update()
{
	gameNode::update();

	SCENEMANAGER->update();
}


void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, WHITENESS);
	//================ ���� �ǵ��� ���� ==============================

	SCENEMANAGER->render();

	if (KEYMANAGER->isToggleKey(VK_F1)) {
		TIMEMANAGER->render(getMemDC());
	}
	//================= �Ʒ��� �ǵ��� ���� ==============================
	_backBuffer->render(getHDC());
}