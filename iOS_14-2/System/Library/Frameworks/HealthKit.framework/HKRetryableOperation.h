/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_queue_performPendingOperation:(id)arg1 ;
-(void)_queue_performRetryableOperation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 retryCount:(int)arg2 ;
@end

