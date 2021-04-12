/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMHome;

@interface HUAddTriggerItem : HFItem {

	HMHome* _home;
	unsigned long long _mode;

}

@property (nonatomic,retain) HMHome * home;                        //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)_itemisHidden;
-(id)initWithHome:(id)arg1 mode:(unsigned long long)arg2 ;
@end

