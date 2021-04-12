/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HUItemMapsToView.h>

@class HMHome;

@interface HUAddTriggerItem : HFItem <HUItemMapsToView> {

	HMHome* _home;
	unsigned long long _mode;

}

@property (nonatomic,retain) HMHome * home;                        //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
-(unsigned long long)mode;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(Class)mapsToViewClass;
-(id)initWithHome:(id)arg1 mode:(unsigned long long)arg2 ;
-(BOOL)_itemisHidden;
@end

