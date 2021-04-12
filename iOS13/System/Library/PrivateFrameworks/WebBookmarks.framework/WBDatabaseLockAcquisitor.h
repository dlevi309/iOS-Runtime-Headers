/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@protocol WBDatabaseLockAcquisitorDelegate;
@class NSTimer;

@interface WBDatabaseLockAcquisitor : NSObject {

	NSTimer* _timer;
	Class _webBookmarkCollectionClass;
	BOOL _lockAcquired;
	long long _maxRetryCount;
	long long _retryCount;
	id<WBDatabaseLockAcquisitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBDatabaseLockAcquisitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<WBDatabaseLockAcquisitorDelegate>)delegate;
-(void)setDelegate:(id<WBDatabaseLockAcquisitorDelegate>)arg1 ;
-(void)_stopTimer;
-(void)releaseLock;
-(id)initWithWebBookmarkCollectionClass:(Class)arg1 ;
-(void)acquireLockWithTimeout:(double)arg1 ;
-(void)acquireLockWithTimeout:(double)arg1 retryInterval:(double)arg2 ;
-(BOOL)_attemptToLockSyncAndNotifyDelegateOnFailure:(BOOL)arg1 ;
-(void)_startTimerWithTimeout:(double)arg1 retryInterval:(double)arg2 ;
-(void)_retryTimerFired:(id)arg1 ;
@end

