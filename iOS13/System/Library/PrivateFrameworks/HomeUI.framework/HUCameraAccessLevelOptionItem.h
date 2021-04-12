/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMUser, HMHome;

@interface HUCameraAccessLevelOptionItem : HFItem {

	HMUser* _user;
	HMHome* _home;
	unsigned long long _accessLevel;

}

@property (nonatomic,readonly) HMUser * user;                               //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) HMHome * home;                               //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long accessLevel;              //@synthesize accessLevel=_accessLevel - In the implementation block
-(HMUser *)user;
-(HMHome *)home;
-(unsigned long long)accessLevel;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithUser:(id)arg1 home:(id)arg2 accessLevel:(unsigned long long)arg3 ;
@end

