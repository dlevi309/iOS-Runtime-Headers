/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBAssertionManagerQueueDelegate <NSObject>
@required
-(double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2;
-(void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2;
-(void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2;
-(double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2;
-(void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3;

@end

