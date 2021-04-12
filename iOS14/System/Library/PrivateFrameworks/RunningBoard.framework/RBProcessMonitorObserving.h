/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBProcessMonitorObserving <NSObject,RBStateCapturing>
@required
-(void)didObserveProcessExit:(id)arg1;
-(void)processMonitor:(id)arg1 didChangeProcessStates:(id)arg2;
-(void)didResolvePreventLaunchPredicates:(id)arg1;

@end

