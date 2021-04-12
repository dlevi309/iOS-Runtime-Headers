/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCTargetSelector.h>

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {

	CFRunLoopTimerRef _timer;
	id _key;
	BOOL _isCanceled;
	BOOL _isPending;
	id _object;
	NSLock* _lock;
	BOOL _createdTimer;
	/*^block*/id _block;

}
+(void)initialize;
+(void)_runThread;
+(void)_assignThreadPriority;
-(void)dealloc;
-(void)invalidate;
-(void)cancel;
-(BOOL)isCancelled;
-(BOOL)isPending;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)isCanceled;
-(BOOL)_createdTimer;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3 ;
-(void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2 ;
-(void)dispatchAfterDelay:(double)arg1 ;
-(id)_initWithTarget:(id)arg1 selector:(SEL)arg2 threadKeyOrThread:(id)arg3 ;
-(void)_dispatchThreadHelper:(/*^block*/id)arg1 ;
-(void)_runTimerBlock:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 thread:(id)arg3 ;
-(void)dispatchAfterDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)threadKey;
-(void)_dispatch;
-(void)_dispatchMainThread;
-(void)_dispatchSCRCThread;
@end

