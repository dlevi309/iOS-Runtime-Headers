/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface HKRetryableOperation : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	long long _retryCount;
	NSMutableArray* _pendingOperations;

}

@property (nonatomic,copy,readonly) NSMutableArray * pendingOperations; 
-(NSMutableArray *)pendingOperations;
-(id)initWithQueue:(id)arg1 retryCount:(int)arg2 ;
-(void)_queue_performRetryableOperation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_performPendingOperation:(id)arg1 ;
@end

