/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBAssertionManagerQueueDelegate <NSObject>
@required
-(double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2;
-(void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2;
-(double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2;
-(void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3;
-(void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2;

@end

