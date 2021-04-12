/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class NSString, NSMutableArray;

@interface ARRunLoop : NSObject {

	NSString* _name;
	CFRunLoopRef _runloop;
	CFRunLoopObserverRef _runLoopEnterObserver;
	CFRunLoopObserverRef _runLoopExitObserver;
	CFArrayRef _autoreleasePoolStack;
	NSMutableArray* _earlyRunloopBlocks;
	os_unfair_lock_s _lock;
	BOOL _started;
	BOOL _cancelled;

}

@property (assign) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(void)cancel;
-(void)start;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)_startThread;
-(void)_runloop_handleActivity:(unsigned long long)arg1 ;
-(void)runOnRunLoop:(/*^block*/id)arg1 ;
-(void)_runloop_pushAutoreleasePool;
-(void)_runloop_popAutoreleasePool;
@end

