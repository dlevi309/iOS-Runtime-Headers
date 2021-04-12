/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HMHome, HFUserNotificationServiceTopic, HUUserNotificationTopicServiceListModuleController;

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController {

	HMHome* _home;
	HFUserNotificationServiceTopic* _topic;
	HUUserNotificationTopicServiceListModuleController* _moduleController;

}

@property (nonatomic,retain) HUUserNotificationTopicServiceListModuleController * moduleController;              //@synthesize moduleController=_moduleController - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserNotificationServiceTopic * topic;                                           //@synthesize topic=_topic - In the implementation block
-(HFUserNotificationServiceTopic *)topic;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 topic:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(void)setModuleController:(HUUserNotificationTopicServiceListModuleController *)arg1 ;
-(HUUserNotificationTopicServiceListModuleController *)moduleController;
-(id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(BOOL)arg2 ;
@end

