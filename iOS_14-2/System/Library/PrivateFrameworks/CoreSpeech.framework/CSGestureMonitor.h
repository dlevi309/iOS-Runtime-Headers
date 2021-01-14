/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

