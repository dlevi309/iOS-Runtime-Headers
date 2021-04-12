/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
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
+(id)_snoozeCountdownIdentifier:(id)arg1 ;
+(id)contentForScheduledAlarm:(id)arg1 ;
+(id)requestIdentifierForScheduledAlarm:(id)arg1 ;
+(id)_goToBedIdentifier:(id)arg1 ;
+(id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 ;
+(id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 includeSnooze:(BOOL)arg3 ;
+(id)_allIdentifiersForAlarm:(id)arg1 ;
+(id)contentForScheduledTimer:(id)arg1 ;
+(id)_mutableContentForScheduledAlarmWithCommonSettings:(id)arg1 ;
+(void)_setSpecificContent:(id)arg1 forScheduledAlarm:(id)arg2 ;
+(id)categoryForScheduledAlarm:(id)arg1 ;
+(id)launchURLForScheme:(id)arg1 ;
+(id)userInfoForAlarm:(id)arg1 ;
+(void)_setSpecificContent:(id)arg1 forGoToBedNotification:(id)arg2 ;
+(void)_setSpecificContent:(id)arg1 forSnoozeCountdownNotification:(id)arg2 ;
+(void)_setSpecificContent:(id)arg1 forNormalScheduledAlarm:(id)arg2 ;
+(void)_setGoToBedTitleAndBody:(id)arg1 forGoToBedNotification:(id)arg2 ;
+(void)_setSnoozeCountdownTitleAndBody:(id)arg1 forSnoozeCountdownNotification:(id)arg2 ;
+(id)_wakeUpAlarmStringForAlarm:(id)arg1 bundle:(CFBundleRef)arg2 ;
+(id)categoryForScheduledTimer:(id)arg1 ;
+(id)userInfoForTimer:(id)arg1 ;
+(id)notificationPrefixes;
+(id)_durationComponentsFormatter;
-(id)init;
-(void)setActionHandler:(MTUserNotificationActionDispatcher *)arg1 ;
-(MTUserNotificationActionDispatcher *)actionHandler;
-(id)notificationCategories;
-(void)removeAllDeliveredNotifications;
-(void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1 ;
-(void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissNotificationsWithIdentifiers:(id)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg1 includeSnooze:(BOOL)arg2 ;
-(void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2 ;
-(void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissNotificationsForTimer:(id)arg1 ;
-(id)alarmCategories;
-(id)timerCategories;
-(id)bedtimeCategories;
-(void)postNotificationForScheduledAlarm:(id)arg1 content:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_notificationCenterForScheduledAlarm:(id)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 ;
-(void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 includeSnooze:(BOOL)arg3 ;
-(void)interruptAudioAndLockDeviceWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_notificationCenterForScheduledTimer;
-(NSDictionary *)notificationCenters;
-(void)setupNotificationCenter;
-(void)registerActionHandler:(id)arg1 ;
-(void)postBedtimeNotificationForAlarm:(id)arg1 date:(id)arg2 ;
-(void)setNotificationCenters:(NSDictionary *)arg1 ;
@end

