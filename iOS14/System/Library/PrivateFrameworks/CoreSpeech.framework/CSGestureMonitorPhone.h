/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSGestureMonitor.h>
#import <libobjc.A.dylib/CMWakeGestureDelegate.h>

@class CMWakeGestureManager, NSString;

@interface CSGestureMonitorPhone : CSGestureMonitor <CMWakeGestureDelegate> {

	CMWakeGestureManager* _gestureManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_stopMonitoring;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveWakeGesture;
-(void)_didReceiveSleepGesture;
@end

