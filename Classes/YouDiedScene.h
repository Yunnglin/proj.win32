
#ifndef __YOUDIED_SCENE_H__
#define __YOUDIED_SCENE_H__

#include "SimpleAudioEngine.h"
#include "cocostudio/CocoStudio.h"
#include "ui\CocosGUI.h"
#include "editor-support\cocostudio\CCSGUIReader.h"

using namespace cocos2d::ui;
using cocos2d::ui::SEL_TouchEvent;
using namespace cocostudio;
USING_NS_CC;
#include "cocos2d.h"
class YouDiedScene : public Layer
{
public:
	static Scene* createScene();
	virtual bool init();
	void onClick1(Ref*, TouchEventType type);
	void onClick2(Ref*, TouchEventType type);
	


	// implement the "static create()" method manually
	CREATE_FUNC(YouDiedScene);
};



#endif 

