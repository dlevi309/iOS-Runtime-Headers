/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSleepNotificationPublisher.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, UNUserNotificationCenter, NSString;

@interface HDSPUserNotificationCenter : NSObject <HDSPSleepNotificationPublisher, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	UNUserNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                       //@synthesize environment=_environment - In the implementation block
+(id)_generateUniqueIdentifierForNotificationIdentifierPrefix:(id)arg1 eventDate:(id)arg2 ;
+(id)_stringForEventDate:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)_contentByAddingCommonUserInfoTo:(id)arg1 ;
-(id)_notificationRequestForEvent:(id)arg1 userInfo:(id)arg2 ;
-(id)_notificationRequestIdentifierForEvent:(id)arg1 ;
-(UNUserNotificationCenter *)notificationCenter;
-(id)_wakeUpResultsContentWithUserInfo:(id)arg1 ;
-(void)tearDownNotificationForEventIdentifier:(id)arg1 ;
-(id)_wakeDetectionContentWithUserInfo:(id)arg1 ;
-(void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2 ;
-(id)_oneDayCoachingContentWithCategory:(id)arg1 userInfo:(id)arg2 ;
-(id)_wakeDetectionAlertTitleForAlarmEnabled:(BOOL)arg1 sleepModeOn:(BOOL)arg2 ;
-(id)_chargingReminderContentWithUserInfo:(id)arg1 ;
-(void)tearDownNotifications;
-(id)initWithEnvironment:(id)arg1 ;
-(id)_bedtimeReminderContent;
-(id)_localizedBedtimeOrWindDownReminderBodyWithKey:(id)arg1 embeddingTimeForEvent:(id)arg2 ;
-(id)_baseWakeUpResultsContentWithCategoryID:(id)arg1 body:(id)arg2 userInfo:(id)arg3 ;
-(void)_publishNotificationRequest:(id)arg1 ;
-(id)_wakeDetectionAlertBodyForAlarmEnabled:(BOOL)arg1 sleepModeOn:(BOOL)arg2 ;
-(HDSPEnvironment *)environment;
-(id)_windDownReminderBodyContent;
-(id)_chargingReminderBodyForAlarmEnabled:(BOOL)arg1 sleepTrackingEnabled:(BOOL)arg2 ;
-(id)initWithEnvironment:(id)arg1 notificationCenter:(id)arg2 ;
-(id)_notificationContentForEventIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)_windDownReminderContent;
-(id)_notificationIdentifierPrefixForEventIdentifier:(id)arg1 ;
-(id)_weeklyCoachingContentWithCategory:(id)arg1 userInfo:(id)arg2 ;
@end

