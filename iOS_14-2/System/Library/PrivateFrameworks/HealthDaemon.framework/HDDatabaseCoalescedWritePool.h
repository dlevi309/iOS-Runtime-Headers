/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_performPendingWriteRecords:(id)arg1 transaction:(id)arg2 accessibilityError:(id)arg3 error:(id*)arg4 ;
-(void)performWriteWithMaximumLatency:(double)arg1 block:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)flushPendingWriteQueueWithCompletion:(/*^block*/id)arg1 ;
-(HDProfile *)profile;
-(BOOL)_queue_performPendingWriteOperationsWithError:(id*)arg1 ;
-(void)_queue_performDelayedOperation;
-(id)initWithProfile:(id)arg1 name:(id)arg2 loggingCategory:(id)arg3 ;
@end

