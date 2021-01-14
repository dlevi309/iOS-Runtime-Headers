/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 alarmIsFiringState:(long long)arg2 ;
-(void)_alarmIsFiring:(id)arg1 ;
-(void)_alarmDismissed:(id)arg1 ;
-(void)_alarmStateReset:(id)arg1 ;
-(void)initializeAlarmState;
-(long long)alarmState;
@end

