/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPGoodMorningAlertObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepEventProvider.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPSleepActionObserver.h>
#import <libobjc.A.dylib/HDSPSleepNotificationPublisher.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>

@protocol HDSPSleepEventDelegate;
@class HDSPEnvironment, NSArray, NSString;

@interface HDSPSleepNotificationManager : NSObject <HDSPGoodMorningAlertObserver, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepActionObserver, HDSPSleepNotificationPublisher, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver> {

	HDSPEnvironment* _environment;
	id<HDSPSleepEventDelegate> _sleepEventDelegate;
	NSArray* _notificationPublishers;

}

@property (nonatomic,readonly) NSArray * notificationPublishers;                                //@synthesize notificationPublishers=_notificationPublishers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (assign,nonatomic,__weak) id<HDSPSleepEventDelegate> sleepEventDelegate;              //@synthesize sleepEventDelegate=_sleepEventDelegate - In the implementation block
-(id)eventIdentifiers;
-(id<HDSPSleepEventDelegate>)sleepEventDelegate;
-(id)_sleepScheduleModel;
-(void)sleepEventIsDue:(id)arg1 ;
-(id)upcomingEventsDueAfterDate:(id)arg1 ;
-(NSString *)providerIdentifier;
-(void)presentAlertForGoodMorning;
-(void)setSleepEventDelegate:(id<HDSPSleepEventDelegate>)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)dismissAlertForGoodMorning;
-(void)goodMorningWasDismissed:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(void)_tearDownWakeDetectionNotification;
-(void)tearDownNotificationForEventIdentifier:(id)arg1 ;
-(void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2 ;
-(void)wakeNotificationWasConfirmed:(id)arg1 ;
-(void)_tearDownMorningNotification;
-(void)_tearDownWindDownReminder;
-(void)bedtimeReminderWasConfirmed;
-(void)tearDownNotifications;
-(void)windDownWasSkipped:(id)arg1 ;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)_tearDownChargingReminder;
-(id)initWithEnvironment:(id)arg1 ;
-(void)_bedtimeOrWindDownNotificationEventIsDue:(id)arg1 ;
-(void)_rescheduleEvents;
-(id)_windDownNotificationEventAfterDate:(id)arg1 ;
-(void)wakeNotificationWasDismissed;
-(BOOL)_bedtimeOrWindDownNotificationsEnabled;
-(id)_bedtimeNotificationEventAfterDate:(id)arg1 ;
-(void)_tearDownBedtimeReminder;
-(HDSPEnvironment *)environment;
-(NSArray *)notificationPublishers;
-(void)bedtimeReminderWasDismissed;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSchedule:(id)arg3 ;
-(id)initWithEnvironment:(id)arg1 notificationPublishers:(id)arg2 ;
-(void)bedtimeWasDelayed:(id)arg1 ;
@end

