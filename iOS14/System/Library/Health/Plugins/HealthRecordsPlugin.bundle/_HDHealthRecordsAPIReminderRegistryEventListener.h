/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@interface _HDHealthRecordsAPIReminderRegistryEventListener : NSObject {

	/*^block*/id _handledApplicationsUninstalledHandler;
	/*^block*/id _displayedAlertHandler;
	/*^block*/id _droppedReminderHandler;
	/*^block*/id _finishedProcessingReminderHandler;
	/*^block*/id _launchedClinicalSourceSettingsHandler;
	/*^block*/id _startedListeningForHomescreenUnlockedNotificationsHandler;
	/*^block*/id _receivedHomescreenUnlockedAtHomescreenNotificationHandler;
	/*^block*/id _stoppedListeningForHomescreenUnlockedNotificationsHandler;

}

@property (nonatomic,copy) id handledApplicationsUninstalledHandler;                                  //@synthesize handledApplicationsUninstalledHandler=_handledApplicationsUninstalledHandler - In the implementation block
@property (nonatomic,copy) id displayedAlertHandler;                                                  //@synthesize displayedAlertHandler=_displayedAlertHandler - In the implementation block
@property (nonatomic,copy) id droppedReminderHandler;                                                 //@synthesize droppedReminderHandler=_droppedReminderHandler - In the implementation block
@property (nonatomic,copy) id finishedProcessingReminderHandler;                                      //@synthesize finishedProcessingReminderHandler=_finishedProcessingReminderHandler - In the implementation block
@property (nonatomic,copy) id launchedClinicalSourceSettingsHandler;                                  //@synthesize launchedClinicalSourceSettingsHandler=_launchedClinicalSourceSettingsHandler - In the implementation block
@property (nonatomic,copy) id startedListeningForHomescreenUnlockedNotificationsHandler;              //@synthesize startedListeningForHomescreenUnlockedNotificationsHandler=_startedListeningForHomescreenUnlockedNotificationsHandler - In the implementation block
@property (nonatomic,copy) id receivedHomescreenUnlockedAtHomescreenNotificationHandler;              //@synthesize receivedHomescreenUnlockedAtHomescreenNotificationHandler=_receivedHomescreenUnlockedAtHomescreenNotificationHandler - In the implementation block
@property (nonatomic,copy) id stoppedListeningForHomescreenUnlockedNotificationsHandler;              //@synthesize stoppedListeningForHomescreenUnlockedNotificationsHandler=_stoppedListeningForHomescreenUnlockedNotificationsHandler - In the implementation block
-(void)droppedReminder:(id)arg1 ;
-(void)displayedAlertForPendingReminderID:(id)arg1 ;
-(void)launchedClinicalSettingsForSource:(id)arg1 ;
-(void)didFinishProcessingPendingReminderID:(id)arg1 ;
-(void)handledApplicationsUninstalled;
-(void)startedListeningForHomescreenUnlockedNotifications;
-(void)stoppedListeningForHomescreenUnlockedNotifications;
-(void)receivedHomescreenUnlockedAtHomescreenNotification;
-(id)handledApplicationsUninstalledHandler;
-(id)displayedAlertHandler;
-(id)finishedProcessingReminderHandler;
-(id)droppedReminderHandler;
-(id)launchedClinicalSourceSettingsHandler;
-(id)startedListeningForHomescreenUnlockedNotificationsHandler;
-(id)receivedHomescreenUnlockedAtHomescreenNotificationHandler;
-(id)stoppedListeningForHomescreenUnlockedNotificationsHandler;
-(void)setHandledApplicationsUninstalledHandler:(id)arg1 ;
-(void)setDisplayedAlertHandler:(id)arg1 ;
-(void)setDroppedReminderHandler:(id)arg1 ;
-(void)setFinishedProcessingReminderHandler:(id)arg1 ;
-(void)setLaunchedClinicalSourceSettingsHandler:(id)arg1 ;
-(void)setStartedListeningForHomescreenUnlockedNotificationsHandler:(id)arg1 ;
-(void)setReceivedHomescreenUnlockedAtHomescreenNotificationHandler:(id)arg1 ;
-(void)setStoppedListeningForHomescreenUnlockedNotificationsHandler:(id)arg1 ;
@end

