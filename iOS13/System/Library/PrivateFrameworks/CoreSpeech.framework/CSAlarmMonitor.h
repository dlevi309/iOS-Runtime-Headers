/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject, MTAlarmManager;

@interface CSAlarmMonitor : CSEventMonitor {

	long long _alarmFiringState;
	NSObject*<OS_dispatch_queue> _queue;
	MTAlarmManager* _alarmManager;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(long long)alarmState;
-(void)_notifyObserver:(id)arg1 alarmIsFiringState:(long long)arg2 ;
-(void)_alarmIsFiring:(id)arg1 ;
-(void)_alarmDismissed:(id)arg1 ;
-(void)_alarmStateReset:(id)arg1 ;
-(void)initializeAlarmState;
@end

