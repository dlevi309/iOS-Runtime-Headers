/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCancellationBlock:(/*^block*/id)arg1 ;
-(long long)operationId;
-(void)_startWork;
-(id)initWithOperationId:(long long)arg1 invocation:(id)arg2 ;
-(void)beginAsyncWork;
-(void)endAsyncWork;
-(void)enqueueOnQueue:(id)arg1 ;
-(id)operationCanceledError:(BOOL)arg1 ;
@end

