/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_threadMain;
-(void)_setHasSimulatedGestures:(id)arg1 ;
-(void)_signalMainThreadIfNecessary;
-(void)simulateGestureWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)_update;
-(void)dealloc;
@end

