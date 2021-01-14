/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startObserving;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(id)init;
@end

