/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol OS_dispatch_semaphore, OS_dispatch_group;
#import <TSReading/TSReading-Structs.h>
@class NSObject, TSKAccessController;

@interface TSDTilingBackgroundQueue : NSObject {

	NSObject*<OS_dispatch_semaphore> mCanEnqueueReaders;
	NSObject*<OS_dispatch_group> mInFlightReaders;
	os_unfair_lock_s mReaderSpinLock;
	unsigned long long mReaderCount;
	NSObject*<OS_dispatch_semaphore> mReadLockSignal;
	long long mShutdownToken;
	BOOL mShuttingDown;
	TSKAccessController* mAccessController;

}

@property (getter=isShuttingDown) BOOL shuttingDown; 
+(BOOL)isHoldingReadLockFromBackgroundQueue;
+(id)p_sharedLimitedQueue;
-(id)init;
-(void)dealloc;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)shutdown;
-(void)p_readUnlock;
-(void)p_readLock;
-(id)initWithAccessController:(id)arg1 ;
-(BOOL)isShuttingDown;
-(void)drainAndPerformSync:(/*^block*/id)arg1 ;
-(void)setShuttingDown:(BOOL)arg1 ;
@end

