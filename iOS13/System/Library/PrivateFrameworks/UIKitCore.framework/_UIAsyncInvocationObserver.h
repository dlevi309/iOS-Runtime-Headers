/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIAsyncInvocationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _postCompletionQueue;
	NSObject*<OS_dispatch_queue> _completionQueueManagementQueue;
	BOOL _suspendedPostCompletionQueue;
	BOOL _resumedPostCompletionQueue;

}
+(void)whenInvocationsCompleteForObservers:(id)arg1 do:(/*^block*/id)arg2 ;
-(id)init;
-(void)whenCompleteDo:(/*^block*/id)arg1 ;
-(void)_didCompleteInvocation;
@end

