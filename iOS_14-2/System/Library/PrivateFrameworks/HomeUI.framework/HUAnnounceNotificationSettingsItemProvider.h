/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@class NSMutableSet, HMHome, HMUser;

@interface HUAnnounceNotificationSettingsItemProvider : HFItemProvider {

	NSMutableSet* _items;
	HMHome* _home;

}

@property (nonatomic,readonly) NSMutableSet * items;              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) HMHome * home;                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMUser * user; 
-(id)init;
-(NSMutableSet *)items;
-(id)initWithHome:(id)arg1 ;
-(HMUser *)user;
-(id)reloadItems;
-(id)invalidationReasons;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id)_notificationModes;
@end

