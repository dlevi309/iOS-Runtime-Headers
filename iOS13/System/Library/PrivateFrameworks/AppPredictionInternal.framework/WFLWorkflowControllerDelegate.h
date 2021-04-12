/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol WFLWorkflowControllerDelegate <NSObject>
@optional
-(void)workflowControllerWillRun:(id)arg1;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2;
-(id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2;
-(void)workflowController:(id)arg1 willRunAction:(id)arg2 withInput:(id)arg3 proceedHandler:(/*^block*/id)arg4;
-(void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
-(void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;

@end

