/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/

#import <AppSupport/InvocationTrampoline.h>

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {

	NSOperationQueue* _queue;
	long long _priority;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3 ;
@end

