/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(/*^block*/id)arg2 ;
+(id)proxyWithTarget:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)suspend;
-(void)_dispatchSuspendedMessages;
-(id)description;
-(void)resume;
-(void)removeAllEnqueuedInvocations;
-(void)forwardInvocation:(id)arg1 ;
@end

