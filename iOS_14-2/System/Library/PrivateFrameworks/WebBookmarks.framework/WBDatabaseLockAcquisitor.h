/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<WBDatabaseLockAcquisitorDelegate>)delegate;
-(void)_startTimerWithTimeout:(double)arg1 retryInterval:(double)arg2 ;
-(void)setDelegate:(id<WBDatabaseLockAcquisitorDelegate>)arg1 ;
-(id)initWithWebBookmarkCollectionClass:(Class)arg1 ;
-(void)acquireLockWithTimeout:(double)arg1 ;
-(void)_stopTimer;
-(void)releaseLock;
-(BOOL)_attemptToLockSyncAndNotifyDelegateOnFailure:(BOOL)arg1 ;
-(void)acquireLockWithTimeout:(double)arg1 retryInterval:(double)arg2 ;
-(void)_retryTimerFired:(id)arg1 ;
-(void)dealloc;
@end

