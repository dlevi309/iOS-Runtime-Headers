/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HMHome, HFUserNotificationServiceTopic, HUUserNotificationTopicServiceListModuleController, HUAnnounceSettingsItemModuleController, HUFaceRecognitionItemModuleController;

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController {

	HMHome* _home;
	HFUserNotificationServiceTopic* _topic;
	HUUserNotificationTopicServiceListModuleController* _moduleController;
	HUAnnounceSettingsItemModuleController* _announceSettingsModuleController;
	HUFaceRecognitionItemModuleController* _faceRecognitionModuleController;

}

@property (nonatomic,retain) HUUserNotificationTopicServiceListModuleController * moduleController;                  //@synthesize moduleController=_moduleController - In the implementation block
@property (nonatomic,retain) HUAnnounceSettingsItemModuleController * announceSettingsModuleController;              //@synthesize announceSettingsModuleController=_announceSettingsModuleController - In the implementation block
@property (nonatomic,retain) HUFaceRecognitionItemModuleController * faceRecognitionModuleController;                //@synthesize faceRecognitionModuleController=_faceRecognitionModuleController - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                        //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserNotificationServiceTopic * topic;                                               //@synthesize topic=_topic - In the implementation block
-(HFUserNotificationServiceTopic *)topic;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)initWithHome:(id)arg1 topic:(id)arg2 ;
-(HMHome *)home;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(BOOL)_shouldShowFaceRecognition;
-(void)setFaceRecognitionModuleController:(HUFaceRecognitionItemModuleController *)arg1 ;
-(HUFaceRecognitionItemModuleController *)faceRecognitionModuleController;
-(void)setAnnounceSettingsModuleController:(HUAnnounceSettingsItemModuleController *)arg1 ;
-(HUAnnounceSettingsItemModuleController *)announceSettingsModuleController;
-(void)setModuleController:(HUUserNotificationTopicServiceListModuleController *)arg1 ;
-(HUUserNotificationTopicServiceListModuleController *)moduleController;
-(id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(BOOL)arg3 ;
-(id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg1 animated:(BOOL)arg2 ;
-(id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(BOOL)arg2 ;
@end

