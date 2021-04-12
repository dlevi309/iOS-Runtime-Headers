/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@protocol HFServiceLikeItem;
@class HFStaticItem, HFItem, HUTriggerConditionEditorItemModule, HUCameraSmartDetectionSettingsModule, HFUserNotificationServiceSettings;

@interface HUStatusAndNotificationsItemManager : HFItemManager {

	BOOL _showStatusSection;
	BOOL _showsCameraSnapshotSection;
	BOOL _showsMotionNotificationSection;
	BOOL _showsCameraSmartNotificationSection;
	BOOL _showsTriggerConditionSection;
	BOOL _showsDoorbellSection;
	BOOL _showsSmartActivitySection;
	BOOL _showsCameraStatusChangeSection;
	BOOL _serviceItemBelongsToCamera;
	HFStaticItem* _includeInStatusItem;
	HFStaticItem* _allowNotificationsItem;
	HFStaticItem* _allowMotionNotificationsItem;
	HFStaticItem* _allowCameraSnapshotsItem;
	HFStaticItem* _allowDoorbellNotificationsItem;
	HFStaticItem* _allowActivityNotificationsItem;
	HFStaticItem* _allowCameraStatusChangesItem;
	HFItem*<HFServiceLikeItem> _serviceItem;
	HUTriggerConditionEditorItemModule* _conditionModule;
	HUCameraSmartDetectionSettingsModule* _cameraSmartDetectionSettingsModule;

}

@property (nonatomic,retain) HFStaticItem * includeInStatusItem;                                                         //@synthesize includeInStatusItem=_includeInStatusItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowNotificationsItem;                                                      //@synthesize allowNotificationsItem=_allowNotificationsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowMotionNotificationsItem;                                                //@synthesize allowMotionNotificationsItem=_allowMotionNotificationsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowCameraSnapshotsItem;                                                    //@synthesize allowCameraSnapshotsItem=_allowCameraSnapshotsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowDoorbellNotificationsItem;                                              //@synthesize allowDoorbellNotificationsItem=_allowDoorbellNotificationsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowActivityNotificationsItem;                                              //@synthesize allowActivityNotificationsItem=_allowActivityNotificationsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowCameraStatusChangesItem;                                                //@synthesize allowCameraStatusChangesItem=_allowCameraStatusChangesItem - In the implementation block
@property (assign,nonatomic) BOOL showsCameraSnapshotSection;                                                            //@synthesize showsCameraSnapshotSection=_showsCameraSnapshotSection - In the implementation block
@property (assign,nonatomic) BOOL showsMotionNotificationSection;                                                        //@synthesize showsMotionNotificationSection=_showsMotionNotificationSection - In the implementation block
@property (assign,nonatomic) BOOL showsCameraSmartNotificationSection;                                                   //@synthesize showsCameraSmartNotificationSection=_showsCameraSmartNotificationSection - In the implementation block
@property (assign,nonatomic) BOOL showsTriggerConditionSection;                                                          //@synthesize showsTriggerConditionSection=_showsTriggerConditionSection - In the implementation block
@property (assign,nonatomic) BOOL showsDoorbellSection;                                                                  //@synthesize showsDoorbellSection=_showsDoorbellSection - In the implementation block
@property (assign,nonatomic) BOOL showsSmartActivitySection;                                                             //@synthesize showsSmartActivitySection=_showsSmartActivitySection - In the implementation block
@property (assign,nonatomic) BOOL showsCameraStatusChangeSection;                                                        //@synthesize showsCameraStatusChangeSection=_showsCameraStatusChangeSection - In the implementation block
@property (assign,nonatomic) BOOL serviceItemBelongsToCamera;                                                            //@synthesize serviceItemBelongsToCamera=_serviceItemBelongsToCamera - In the implementation block
@property (nonatomic,readonly) id<HFUserNotificationServiceSettingsProviding> notificationSettingsProvider; 
@property (nonatomic,readonly) HFUserNotificationServiceSettings * notificationSettings; 
@property (assign,nonatomic) BOOL showStatusSection;                                                                     //@synthesize showStatusSection=_showStatusSection - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> serviceItem;                                                   //@synthesize serviceItem=_serviceItem - In the implementation block
@property (nonatomic,readonly) HUTriggerConditionEditorItemModule * conditionModule;                                     //@synthesize conditionModule=_conditionModule - In the implementation block
@property (nonatomic,readonly) HUCameraSmartDetectionSettingsModule * cameraSmartDetectionSettingsModule;                //@synthesize cameraSmartDetectionSettingsModule=_cameraSmartDetectionSettingsModule - In the implementation block
-(HFUserNotificationServiceSettings *)notificationSettings;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceItem;
-(id)initWithServiceItem:(id)arg1 delegate:(id)arg2 home:(id)arg3 ;
-(id)homeStatusVisibleObject;
-(BOOL)showsDoorbellSection;
-(BOOL)showsSmartActivitySection;
-(BOOL)serviceItemBelongsToCamera;
-(void)setIncludeInStatusItem:(HFStaticItem *)arg1 ;
-(void)setAllowCameraSnapshotsItem:(HFStaticItem *)arg1 ;
-(BOOL)showsCameraStatusChangeSection;
-(void)setAllowNotificationsItem:(HFStaticItem *)arg1 ;
-(void)setAllowMotionNotificationsItem:(HFStaticItem *)arg1 ;
-(void)setAllowDoorbellNotificationsItem:(HFStaticItem *)arg1 ;
-(void)setAllowCameraStatusChangesItem:(HFStaticItem *)arg1 ;
-(void)setAllowActivityNotificationsItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)includeInStatusItem;
-(HFStaticItem *)allowCameraSnapshotsItem;
-(HFStaticItem *)allowCameraStatusChangesItem;
-(HFStaticItem *)allowNotificationsItem;
-(HFStaticItem *)allowMotionNotificationsItem;
-(HFStaticItem *)allowDoorbellNotificationsItem;
-(HFStaticItem *)allowActivityNotificationsItem;
-(HUTriggerConditionEditorItemModule *)conditionModule;
-(HUCameraSmartDetectionSettingsModule *)cameraSmartDetectionSettingsModule;
-(BOOL)showStatusSection;
-(BOOL)showsCameraSnapshotSection;
-(BOOL)showsTriggerConditionSection;
-(BOOL)showsMotionNotificationSection;
-(BOOL)showsCameraSmartNotificationSection;
-(id)_updateNotificationSettings:(id)arg1 ;
-(id<HFUserNotificationServiceSettingsProviding>)notificationSettingsProvider;
-(void)setShowStatusSection:(BOOL)arg1 ;
-(id)updateAllowNotifications:(BOOL)arg1 ;
-(id)updateAllowMotionNotifications:(BOOL)arg1 ;
-(id)updateAllowDoorbellNotifications:(BOOL)arg1 ;
-(id)updateAllowSnapshotsInNotifications:(BOOL)arg1 ;
-(id)updateAllowSmartActivityNotifications:(BOOL)arg1 ;
-(id)updateAllowCameraStatusChangeNotifications:(BOOL)arg1 ;
-(id)updateNotificationCondition:(id)arg1 ;
-(id)updateCameraSmartNotificationCondition:(id)arg1 ;
-(void)setShowsCameraSnapshotSection:(BOOL)arg1 ;
-(void)setShowsMotionNotificationSection:(BOOL)arg1 ;
-(void)setShowsCameraSmartNotificationSection:(BOOL)arg1 ;
-(void)setShowsTriggerConditionSection:(BOOL)arg1 ;
-(void)setShowsDoorbellSection:(BOOL)arg1 ;
-(void)setShowsSmartActivitySection:(BOOL)arg1 ;
-(void)setShowsCameraStatusChangeSection:(BOOL)arg1 ;
-(void)setServiceItemBelongsToCamera:(BOOL)arg1 ;
@end

