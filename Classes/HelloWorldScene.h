#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init() override;
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    void onEnterTransitionDidFinish() override;
    
    cocos2d::FiniteTimeAction* myActionA();
    cocos2d::FiniteTimeAction* myActionB();
    
    int callCountA = 0;
    int callCountB = 0;
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
