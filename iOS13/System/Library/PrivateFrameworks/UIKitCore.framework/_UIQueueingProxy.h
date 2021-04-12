/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITargetedProxy.h>

@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy {

	os_unfair_lock_s _lock;
	unsigned long long _suspensionCount;
	NSMutableArray* _queuedInvocations;
	/*^block*/id _shouldSuspendInvocationBlock;

}
+(id)proxyWithTarget:(id)arg1 ;
+(id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(/*^block*/id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(void)forwardInvocation:(id)arg1 ;
-(void)resume;
-(void)suspend;
-(void)_dispatchSuspendedMessages;
-(void)removeAllEnqueuedInvocations;
@end

