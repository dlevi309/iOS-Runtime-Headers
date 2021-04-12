/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBAssertionManaging, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface RBResourceViolationHandler : NSObject {

	id<RBAssertionManaging> _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;

}
+(id)sharedInstance;
-(void)handleCPUViolationMessage:(id)arg1 fromConnection:(id)arg2 ;
-(void)handleMessage:(id)arg1 fromConnection:(id)arg2 ;
-(void)startWithAssertionManager:(id)arg1 ;
@end

