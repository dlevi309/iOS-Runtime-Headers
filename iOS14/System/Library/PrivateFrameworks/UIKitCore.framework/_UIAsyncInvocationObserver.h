/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_didCompleteInvocation;
-(void)whenCompleteDo:(/*^block*/id)arg1 ;
@end

