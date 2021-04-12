/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSGestureMonitor : CSEventMonitor {

	unsigned long long _wakeGestureTimestamp;
	unsigned long long _dismissalTimestamp;

}

@property (assign,nonatomic) unsigned long long wakeGestureTimestamp;              //@synthesize wakeGestureTimestamp=_wakeGestureTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalTimestamp;                //@synthesize dismissalTimestamp=_dismissalTimestamp - In the implementation block
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned long long)wakeGestureTimestamp;
-(unsigned long long)dismissalTimestamp;
-(BOOL)isTriggerHandheld;
-(void)setWakeGestureTimestamp:(unsigned long long)arg1 ;
-(void)setDismissalTimestamp:(unsigned long long)arg1 ;
@end

