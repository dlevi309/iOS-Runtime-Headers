/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBAssertionManagerDelegate <NSObject>
@required
-(void)assertionManager:(id)arg1 didRemoveProcess:(id)arg2 withState:(id)arg3;
-(void)assertionManager:(id)arg1 willInvalidateAssertion:(id)arg2;
-(void)assertionManager:(id)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didUpdateProcessStates:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assertionManager:(id)arg1 willExpireAssertionsSoonForProcess:(id)arg2 expirationTime:(double)arg3;
-(void)assertionManager:(id)arg1 didAddProcess:(id)arg2 withState:(id)arg3;
-(void)assertionManager:(id)arg1 didEndTrackingStateForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didInvalidateAssertions:(id)arg2;
-(void)assertionManager:(id)arg1 didBeginTrackingStateForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didResolveSystemState:(id)arg2;
-(void)assertionManager:(id)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)arg2;

@end

