/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSString, NSObject, _HKDelayedOperation, NSLock, NSMutableArray, HDProfile;

@interface HDDatabaseCoalescedWritePool : NSObject {

	NSString* _name;
	NSObject*<OS_os_log> _loggingCategory;
	NSObject*<OS_dispatch_queue> _writeQueue;
	_HKDelayedOperation* _pendingWriteOperation;
	NSLock* _pendingWriteLock;
	NSMutableArray* _pendingWriteQueue;
	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(id)init;
-(HDProfile *)profile;
-(void)_queue_performDelayedOperation;
-(BOOL)_queue_performPendingWriteOperationsWithError:(id*)arg1 ;
-(BOOL)_performPendingWriteRecords:(id)arg1 transaction:(id)arg2 accessibilityError:(id)arg3 error:(id*)arg4 ;
-(id)initWithProfile:(id)arg1 name:(id)arg2 loggingCategory:(id)arg3 ;
-(void)performWriteWithMaximumLatency:(double)arg1 block:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)flushPendingWriteQueueWithCompletion:(/*^block*/id)arg1 ;
@end

