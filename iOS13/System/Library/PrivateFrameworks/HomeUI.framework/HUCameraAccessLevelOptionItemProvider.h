/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@class NSMutableSet, HMUser, HMHome;

@interface HUCameraAccessLevelOptionItemProvider : HFItemProvider {

	NSMutableSet* _items;
	HMUser* _user;
	HMHome* _home;

}

@property (nonatomic,readonly) NSMutableSet * items;              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) HMUser * user;                     //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) HMHome * home;                     //@synthesize home=_home - In the implementation block
-(id)init;
-(HMUser *)user;
-(HMHome *)home;
-(NSMutableSet *)items;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithUser:(id)arg1 home:(id)arg2 ;
@end

