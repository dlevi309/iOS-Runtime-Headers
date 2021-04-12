/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)_stopMonitoring;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveWakeGesture;
-(void)_didReceiveSleepGesture;
@end

