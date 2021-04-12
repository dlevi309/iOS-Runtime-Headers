/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSJarvisTriggerModeMonitor : CSEventMonitor {

	long long _triggerMode;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(long long)getTriggerMode;
-(void)setTriggerMode:(long long)arg1 ;
-(long long)_fetchTriggerMode;
-(void)_notifyObserver:(id)arg1 withJarvisTriggerMode:(long long)arg2 ;
-(void)_notifyJarvisTriggerModeDidChanged;
@end

