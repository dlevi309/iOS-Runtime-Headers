/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class HMHome, HFUserNotificationServiceTopicItemProvider;

@interface HUUserNotificationTopicListModule : HFItemModule {

	HMHome* _home;
	HFUserNotificationServiceTopicItemProvider* _notificationTopicItemProvider;

}

@property (nonatomic,readonly) HFUserNotificationServiceTopicItemProvider * notificationTopicItemProvider;              //@synthesize notificationTopicItemProvider=_notificationTopicItemProvider - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                           //@synthesize home=_home - In the implementation block
+(id)sectionID;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMHome *)home;
-(void)_buildItemProviders;
-(HFUserNotificationServiceTopicItemProvider *)notificationTopicItemProvider;
-(id)topicForItem:(id)arg1 ;
@end

