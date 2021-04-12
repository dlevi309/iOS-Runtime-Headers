/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol OS_dispatch_semaphore;
@class CNUnfairLock, NSObject;

@interface CNCountdownLatch : NSObject {

	unsigned long long _count;
	CNUnfairLock* _lock;
	NSObject*<OS_dispatch_semaphore> _latchedSemaphore;

}
-(id)init;
-(id)description;
-(id)initWithStartingCount:(unsigned long long)arg1 ;
-(BOOL)awaitWithTimeout:(double)arg1 ;
-(BOOL)awaitWithTimeout:(double)arg1 strategy:(unsigned long long)arg2 ;
-(BOOL)awaitImmediate;
-(BOOL)awaitOnSemaphoreWithTimeout:(double)arg1 ;
-(BOOL)awaitWhileSpinningRunloopWithTimeout:(double)arg1 ;
-(BOOL)hasLatched;
-(void)countDown;
-(void)await;
@end

