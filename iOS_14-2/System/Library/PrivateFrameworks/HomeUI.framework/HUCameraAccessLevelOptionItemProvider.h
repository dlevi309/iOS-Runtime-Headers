/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)items;
-(HMUser *)user;
-(id)reloadItems;
-(id)invalidationReasons;
-(HMHome *)home;
-(id)initWithUser:(id)arg1 home:(id)arg2 ;
@end

