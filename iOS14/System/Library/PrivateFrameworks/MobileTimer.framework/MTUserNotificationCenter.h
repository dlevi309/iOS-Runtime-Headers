/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTNotificationCenter.h>

@class NSDictionary, MTUserNotificationActionDispatcher, NSString;

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter> {

	NSDictionary* _notificationCenters;
	MTUserNotificationActionDispatcher* _actionHandler;

}

@property (nonatomic,retain) NSDictionary * notificationCenters;                              //@synthesize notificationCenters=_notificationCenters - In the implementation block
@property (nonatomic,retain) MTUserNotificationActionDispatcher * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_timeFormatter;
+(id)_allIdentifiersForAlarm:(id)arg1 ;
+(void)_setSpecificContent:(id)arg1 forNormalScheduledAlarm:(id)arg2 ;
+(id)categoryForScheduledTimer:(id)arg1 ;
+(id)_durationComponentsFormatter;
+(void)_setSpecificContent:(id)arg1 forSnoozeCountdownNotification:(id)arg2 ;
+(id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 ;
+(id)_mutableContentForScheduledAlarmWithCommonSettings:(id)arg1 ;
+(id)launchURLForScheme:(id)arg1 ;
+(id)_wakeUpAlarmStringForAlarm:(id)arg1 ;
+(id)_goToBedIdentifier:(id)arg1 ;
+(void)_setSnoozeCountdownTitleAndBody:(id)arg1 forSnoozeCountdownNotification:(id)arg2 ;
+(id)notificationPrefixes;
+(id)_snoozeCountdownIdentifier:(id)arg1 ;
+(id)userInfoForTimer:(id)arg1 ;
+(id)contentForScheduledTimer:(id)arg1 ;
+(id)requestIdentifierForScheduledAlarm:(id)arg1 ;
+(id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 includeSnooze:(BOOL)arg3 ;
+(id)contentForScheduledAlarm:(id)arg1 ;
+(id)userInfoForAlarm:(id)arg1 ;
+(void)_setSpecificContent:(id)arg1 forScheduledAlarm:(id)arg2 ;
+(void)_setSpecificContent:(id)arg1 forGoToBedNotification:(id)arg2 ;
+(void)_setGoToBedTitleAndBody:(id)arg1 forGoToBedNotification:(id)arg2 ;
+(id)categoryForScheduledAlarm:(id)arg1 ;
-(id)alarmCategories;
-(void)postBedtimeNotificationForAlarm:(id)arg1 date:(id)arg2 ;
-(void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 ;
-(id)init;
-(void)setNotificationCenters:(NSDictionary *)arg1 ;
-(MTUserNotificationActionDispatcher *)actionHandler;
-(void)dismissNotificationsForAlarm:(id)arg1 includeSnooze:(BOOL)arg2 ;
-(void)tearDownNotificationsForEventIdentifiers:(id)arg1 ;
-(void)setActionHandler:(MTUserNotificationActionDispatcher *)arg1 ;
-(void)dismissNotificationsForTimer:(id)arg1 ;
-(id)_notificationCenterForScheduledTimer;
-(NSDictionary *)notificationCenters;
-(void)dismissNotificationsForAlarm:(id)arg1 ;
-(void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1 ;
-(void)setupNotificationCenter;
-(id)notificationCategories;
-(id)bedtimeCategories;
-(void)removeAllDeliveredNotifications;
-(void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 includeSnooze:(BOOL)arg3 ;
-(void)interruptAudioAndLockDeviceWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)postNotificationForScheduledAlarm:(id)arg1 content:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)registerActionHandler:(id)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2 ;
-(void)dismissNotificationsWithIdentifiers:(id)arg1 ;
-(id)timerCategories;
-(void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_notificationCenterForScheduledAlarm:(id)arg1 ;
@end

