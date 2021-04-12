/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTGestureMonitor.h>
#import <libobjc.A.dylib/CMWakeGestureDelegate.h>

@class CMWakeGestureManager, NSString;

@interface VTGestureMonitorPhone : VTGestureMonitor <CMWakeGestureDelegate> {

	CMWakeGestureManager* _gestureManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)startObserving;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
@end

