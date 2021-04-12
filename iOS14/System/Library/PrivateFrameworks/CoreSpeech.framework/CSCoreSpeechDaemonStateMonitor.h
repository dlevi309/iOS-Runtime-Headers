/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveDaemonStateChanged:(unsigned long long)arg1 ;
-(void)notifyDaemonStateChanged:(unsigned long long)arg1 ;
-(void)_notifyObserver:(id)arg1 withDaemonState:(unsigned long long)arg2 ;
@end

