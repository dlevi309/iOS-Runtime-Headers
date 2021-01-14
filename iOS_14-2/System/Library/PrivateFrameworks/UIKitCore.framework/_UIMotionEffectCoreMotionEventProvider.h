/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIMotionEffectEventProvider.h>

@class CMMotionManager, NSOperationQueue;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {

	CMMotionManager* _motionManager;
	NSOperationQueue* _motionEventQueue;

}
-(id)init;
-(void)stopGeneratingEvents;
-(double)slowUpdateIntervalForLogs;
-(id)currentEvent;
-(double)fastUpdateIntervalForLogs;
-(BOOL)shouldLogEvents;
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(void)startGeneratingEvents;
-(void)dealloc;
@end

