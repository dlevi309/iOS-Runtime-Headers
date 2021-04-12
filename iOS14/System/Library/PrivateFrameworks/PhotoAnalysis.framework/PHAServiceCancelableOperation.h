/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol OS_dispatch_group;
@class NSInvocation, NSObject;

@interface PHAServiceCancelableOperation : NSObject {

	NSInvocation* _invocation;
	long long _operationId;
	BOOL _cancelRequested;
	/*^block*/id _cancellationBlock;
	NSObject*<OS_dispatch_group> _completionGroup;

}
+(id)currentOperation;
+(id)operationNotFoundError:(long long)arg1 ;
-(void)beginAsyncWork;
-(long long)operationId;
-(void)enqueueOnQueue:(id)arg1 ;
-(id)description;
-(id)operationCanceledError:(BOOL)arg1 ;
-(id)initWithOperationId:(long long)arg1 invocation:(id)arg2 ;
-(void)endAsyncWork;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)_startWork;
-(BOOL)cancel;
-(void)setCancellationBlock:(/*^block*/id)arg1 ;
-(BOOL)isCancelled;
@end

