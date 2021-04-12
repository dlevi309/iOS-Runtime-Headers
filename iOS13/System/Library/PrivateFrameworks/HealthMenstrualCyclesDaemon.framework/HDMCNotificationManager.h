/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <libobjc.A.dylib/HDMCAnalysisManagerObserver.h>
#import <libobjc.A.dylib/HKMCSettingsManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDMCAnalysisManager, HKMCSettingsManager, NSObject, HKMCAnalysis, HDRestorableAlarm, NSString;

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver> {

	HDProfile* _profile;
	HDMCAnalysisManager* _analysisManager;
	HKMCSettingsManager* _settingsManager;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _observingAnalysisUpdates;
	HKMCAnalysis* _lastAnalysis;
	HDRestorableAlarm* _scheduler;

}

@property (nonatomic,readonly) HDRestorableAlarm * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)start;
-(HDRestorableAlarm *)scheduler;
-(void)settingsManagerDidUpdateNotificationSettings:(id)arg1 ;
-(void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(BOOL)_isAlgorithmsVersionSameOnPairedDevice;
-(void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2 ;
-(void)_queue_rescheduleNotificationsForAnalysis:(id)arg1 ;
-(void)_queue_removeAllScheduledNotifications;
-(id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3 ;
-(id)scheduledNotificationsWithError:(id*)arg1 ;
@end

