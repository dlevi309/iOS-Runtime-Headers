/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, HDRestorableAlarm, NSObject, NSDate, NSDateComponents;

@interface HDTinkerPrivacyAlertCoordinator : NSObject {

	HDProfile* _profile;
	HDRestorableAlarm* _scheduler;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* __unitTest_currentDate;
	NSDateComponents* __unitTest_scheduledBirthdayTransparencyAlertComponents;

}

@property (nonatomic,copy) NSDate * _unitTest_currentDate;                                                             //@synthesize _unitTest_currentDate=__unitTest_currentDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * _unitTest_scheduledBirthdayTransparencyAlertComponents;              //@synthesize _unitTest_scheduledBirthdayTransparencyAlertComponents=__unitTest_scheduledBirthdayTransparencyAlertComponents - In the implementation block
-(NSDate *)_unitTest_currentDate;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_unitTest_scheduleTransparencyAlertIfRequiredForBirthdate:(id)arg1 error:(id*)arg2 ;
-(id)allScheduledDueDates:(id*)arg1 ;
-(BOOL)_shouldEnableTransparencyAlertsWithError:(id*)arg1 ;
-(void)_userCharacteristicsDidChangeNotification:(id)arg1 ;
-(BOOL)_unitTest_didReceiveDueEvents:(id)arg1 ;
-(BOOL)_shouldScheduleTransparencyAlertsWithError:(id*)arg1 ;
-(BOOL)_queue_showAlertIfRequiredForDueEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2 ;
-(BOOL)scheduleEventIfRequiredForDateComponents:(id)arg1 eventIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)allScheduledEvents:(id*)arg1 ;
-(NSDateComponents *)_unitTest_scheduledBirthdayTransparencyAlertComponents;
-(BOOL)_queue_scheduleEventIfRequiredForDateComponents:(id)arg1 eventIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllEventsWithError:(id*)arg1 ;
-(BOOL)_queue_scheduleTransparencyAlertIfRequiredForBirthdate:(id)arg1 error:(id*)arg2 ;
-(void)_queue_clearDueEvents:(id)arg1 ;
-(void)set_unitTest_currentDate:(NSDate *)arg1 ;
@end

