/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol OS_dispatch_semaphore;
@class CNUnfairLock, NSObject;

@interface CNCountdownLatch : NSObject {

	unsigned long long _count;
	CNUnfairLock* _lock;
	NSObject*<OS_dispatch_semaphore> _latchedSemaphore;

}
-(void)await;
-(id)init;
-(id)description;
-(void)countDown;
-(BOOL)hasLatched;
-(id)initWithStartingCount:(unsigned long long)arg1 ;
-(BOOL)awaitWithTimeout:(double)arg1 ;
-(BOOL)awaitWithTimeout:(double)arg1 strategy:(unsigned long long)arg2 ;
-(BOOL)awaitImmediate;
-(BOOL)awaitOnSemaphoreWithTimeout:(double)arg1 ;
-(BOOL)awaitWhileSpinningRunloopWithTimeout:(double)arg1 ;
@end

