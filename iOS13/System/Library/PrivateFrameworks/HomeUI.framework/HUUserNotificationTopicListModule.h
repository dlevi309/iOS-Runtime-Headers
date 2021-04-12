/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMHome *)home;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(void)_buildItemProviders;
-(HFUserNotificationServiceTopicItemProvider *)notificationTopicItemProvider;
-(id)topicForItem:(id)arg1 ;
@end

