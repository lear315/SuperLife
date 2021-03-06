//
//  MissionUI.h
//  SuperLife
//
//  Created by wang haibo on 14-8-19.
//
//

#ifndef __SuperLife__MissionUI__
#define __SuperLife__MissionUI__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "IUIReader.h"
class BaseScene;
class ControlPanel;
class MissionUI : public cocos2d::ui::Layout, public IUIReader
{
public:
    // 构造函数
    MissionUI(BaseScene* owner);
    // 析构函数
    virtual ~MissionUI();
    // 加载文件
    void loadUI(const std::string& file);
public:
    // 更新处理
    void update(float delta);
    //设置UI颜色
    void setColor(const cocos2d::Color3B& color);
protected:
    void checkWin();
    // 点击开始按钮
    void pressStartBtn(Ref* p,TouchEventType eventType);
    // 点击下个任务按钮
    void pressNextLevelBtn(Ref* p,TouchEventType eventType);
    // 点击重试按钮
    void pressRetryBtn(Ref* p,TouchEventType eventType);
    // 点击返回按钮
    void pressBackBtn(Ref* p,TouchEventType eventType);
    
    void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event *unused_event);
private:
    BaseScene*                  m_pOwnerScene;
    cocos2d::Label*             m_pLabelMode;
    cocos2d::Label*             m_pLabelMissionName;
    cocos2d::Label*             m_pLabelMissionGoal;
    cocos2d::Label*             m_pLabelStarerLifeNum;
    cocos2d::Label*             m_pLabelLifeNum;
    cocos2d::Label*             m_pLabeGenerationNum;
    cocos2d::Sprite*            m_pPanel1;
    ControlPanel*               m_pControlPanel;
    cocos2d::ui::Button*        m_pStartBtn;
    cocos2d::ui::Button*        m_pNextLevelBtn;
    cocos2d::ui::Button*        m_pRetryBtn;
    cocos2d::ui::Button*        m_pBackBtn;
    
    int                         m_nGoalCellNum;
    int                         m_nGoalCellGeneration;
    int                         m_nStartLifeNum;
    int                         m_nLastTotalLifeNum;
    int                         m_nCurrentLevel;
    int                         m_nLevelType;
};

#endif /* defined(__SuperLife__MissionUI__) */
