/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSThread, CADisplayLink, NSTimer;

@interface _UIScrollViewGestureSimulator : NSObject {

	CFRunLoopSourceRef _mainThreadRunLoopSource;
	NSMutableArray* _simulatedGestures;
	NSThread* _workThread;
	CADisplayLink* _displayLink;
	NSTimer* _timer;
	BOOL _hasSimulatedGestures;
	double _lastWakeUpTime;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_update;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)_threadMain;
-(void)_setHasSimulatedGestures:(id)arg1 ;
-(void)_signalMainThreadIfNecessary;
-(void)simulateGestureWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
@end

