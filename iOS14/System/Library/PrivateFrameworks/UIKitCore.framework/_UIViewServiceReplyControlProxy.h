/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewServiceProxy_ReplyControl.h>

@class _UIViewServiceReplyControlTrampoline, _UIViewServiceReplyAwaitingTrampoline, NSLock;

@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl> {

	id _target;
	_UIViewServiceReplyControlTrampoline* _controlTrampoline;
	_UIViewServiceReplyAwaitingTrampoline* _awaitingTrampoline;
	NSLock* _lock;

}
+(id)proxyWithTarget:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)_awaitingReply;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_deliveringRepliesAsynchronously;
-(id)methodSignatureForSelector:(SEL)arg1 ;
@end

