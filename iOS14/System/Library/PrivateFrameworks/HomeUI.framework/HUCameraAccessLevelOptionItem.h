/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)accessLevel;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMUser *)user;
-(HMHome *)home;
-(id)initWithUser:(id)arg1 home:(id)arg2 accessLevel:(unsigned long long)arg3 ;
@end

