/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class HMHome, HFUserNotificationServiceTopic, HFTransformItemProvider;

@interface HUUserNotificationTopicServiceListModule : HFItemModule {

	HMHome* _home;
	HFUserNotificationServiceTopic* _topic;
	HFTransformItemProvider* _transformServiceItemProvider;
	HFTransformItemProvider* _transformCameraItemProvider;

}

@property (nonatomic,readonly) HFTransformItemProvider * transformServiceItemProvider;              //@synthesize transformServiceItemProvider=_transformServiceItemProvider - In the implementation block
@property (nonatomic,readonly) HFTransformItemProvider * transformCameraItemProvider;               //@synthesize transformCameraItemProvider=_transformCameraItemProvider - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserNotificationServiceTopic * topic;                              //@synthesize topic=_topic - In the implementation block
+(id)_createTransformItemForItem:(id)arg1 notificationSettingsProvider:(id)arg2 ;
-(HFUserNotificationServiceTopic *)topic;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMHome *)home;
-(void)_buildItemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 topic:(id)arg3 ;
-(HFTransformItemProvider *)transformServiceItemProvider;
-(HFTransformItemProvider *)transformCameraItemProvider;
-(id)serviceLikeItemForItem:(id)arg1 ;
@end

