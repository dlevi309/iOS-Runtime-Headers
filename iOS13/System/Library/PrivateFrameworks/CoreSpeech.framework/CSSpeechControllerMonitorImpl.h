/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSSpeechControllerMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSSpeechControllerMonitorImpl : CSSpeechControllerMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _pendingRecordingStopUUID;

}
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 ;
-(void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 withContext:(id)arg3 ;
-(void)setRecordState:(unsigned long long)arg1 ;
-(void)_notifyObserver:(id)arg1 withSpeechControllerRecordState:(unsigned long long)arg2 withEventUUID:(id)arg3 withContext:(id)arg4 ;
-(void)_notifyObserver:(id)arg1 withSpeechControllerRecordState:(unsigned long long)arg2 ;
@end

