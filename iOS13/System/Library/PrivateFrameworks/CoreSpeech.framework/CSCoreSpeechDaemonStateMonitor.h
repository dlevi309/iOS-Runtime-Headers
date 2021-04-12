/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveDaemonStateChanged:(unsigned long long)arg1 ;
-(void)_notifyObserver:(id)arg1 withDaemonState:(unsigned long long)arg2 ;
-(void)notifyDaemonStateChanged:(unsigned long long)arg1 ;
@end

