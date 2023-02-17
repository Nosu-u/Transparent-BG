#include <Geode/Geode.hpp>
#include <Geode/Modify.hpp>

USE_GEODE_NAMESPACE();

class $modify(CreatorLayer) {
        virtual bool init() {
            CreatorLayer::init();

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto bg = CCSprite::create("GJ_gradientBG.png");
	    auto bgSize = bg->getTextureRect().size;
	    bg->setAnchorPoint({ 0.0f, 0.0f });
	    bg->setScaleX((winSize.width + 10.0f) / bgSize.width);
	    bg->setScaleY((winSize.height + 10.0f) / bgSize.height);
        bg->setPosition({ -5.0f, -5.0f });
	    bg->setColor(ccc3(255, 255, 255));
	    
        this->addChild(bg, -2);

        return true;
    }
};

class $modify(LeaderboardsLayer) {
        bool init(LeaderboardState state) {
            LeaderboardsLayer::init(state);

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto bg = CCSprite::create("GJ_gradientBG.png");
	    auto bgSize = bg->getTextureRect().size;
	    bg->setAnchorPoint({ 0.0f, 0.0f });
	    bg->setScaleX((winSize.width + 10.0f) / bgSize.width);
	    bg->setScaleY((winSize.height + 10.0f) / bgSize.height);
        bg->setPosition({ -5.0f, -5.0f });
	    bg->setColor(ccc3(255, 255, 255));
	    
        this->addChild(bg, -2);

        return true;
    }
};

class $modify(LocalLevelManager) {
        bool init(GJGameLevel* le, int pq) {
            LocalLevelManager::init(le, pq);

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto bg = CCSprite::create("GJ_gradientBG.png");
	    auto bgSize = bg->getTextureRect().size;
	    bg->setAnchorPoint({ 0.0f, 0.0f });
	    bg->setScaleX((winSize.width + 10.0f) / bgSize.width);
	    bg->setScaleY((winSize.height + 10.0f) / bgSize.height);
        bg->setPosition({ -5.0f, -5.0f });
	    bg->setColor(ccc3(255, 255, 255));
	    
        this->addChild(bg, -2);

        return true;
    }
};

class $modify(LevelInfoLayer) {
    bool init(GJGameLevel* level) {
        LevelInfoLayer::init(level);
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();

        auto bg = CCSprite::create("GJ_gradientBG.png");
	    auto bgSize = bg->getTextureRect().size;
	    bg->setAnchorPoint({ 0.0f, 0.0f });
	    bg->setScaleX((winSize.width + 10.0f) / bgSize.width);
	    bg->setScaleY((winSize.height + 10.0f) / bgSize.height);
        bg->setPosition({ -5.0f, -5.0f });
	    bg->setColor(ccc3(255, 255, 255));
	    
        this->addChild(bg, -2);

        return true;
 
    }
};


class $modify(LevelSearchLayer) {
        bool init() {
            LevelSearchLayer::init();

        auto winSize = CCDirector::sharedDirector()->getWinSize();

        auto bg = CCSprite::create("GJ_gradientBG.png");
	    auto bgSize = bg->getTextureRect().size;
	    bg->setAnchorPoint({ 0.0f, 0.0f });
	    bg->setScaleX((winSize.width + 10.0f) / bgSize.width);
	    bg->setScaleY((winSize.height + 10.0f) / bgSize.height);
        bg->setPosition({ -5.0f, -5.0f });
	    bg->setColor(ccc3(255, 255, 255));
	    
        this->addChild(bg, -2);

        return true;
    }
};

class $modify(EditLevelLayer) {
        bool init(GJGameLevel* ed) {
            EditLevelLayer::init(ed);

        auto winSize = CCDirector::sharedDirector()->getWinSize();

        auto bg = CCSprite::create("GJ_gradientBG.png");
	    auto bgSize = bg->getTextureRect().size;
	    bg->setAnchorPoint({ 0.0f, 0.0f });
	    bg->setScaleX((winSize.width + 10.0f) / bgSize.width);
	    bg->setScaleY((winSize.height + 10.0f) / bgSize.height);
        bg->setPosition({ -5.0f, -5.0f });
	    bg->setColor(ccc3(255, 255, 255));
	    
        this->addChild(bg, -2);

        return true;
    }
};

class $modify(LevelBrowserLayer) {
        bool init(GJSearchObject* search) {
            LevelBrowserLayer::init(search);

        auto winSize = CCDirector::sharedDirector()->getWinSize();

        auto bg = CCSprite::create("GJ_gradientBG.png");
	    auto bgSize = bg->getTextureRect().size;
	    bg->setAnchorPoint({ 0.0f, 0.0f });
	    bg->setScaleX((winSize.width + 10.0f) / bgSize.width);
	    bg->setScaleY((winSize.height + 10.0f) / bgSize.height);
        bg->setPosition({ -5.0f, -5.0f });
	    bg->setColor(ccc3(255, 255, 255));
	    
        this->addChild(bg, -2);

        return true;
    }
};







