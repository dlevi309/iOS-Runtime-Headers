/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
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
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(id)init;
-(void)start;
-(void)_runloop_handleActivity:(unsigned long long)arg1 ;
-(void)_runloop_pushAutoreleasePool;
-(void)_runloop_popAutoreleasePool;
-(id)initWithName:(id)arg1 ;
-(void)_startThread;
-(void)cancel;
-(void)runOnRunLoop:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

