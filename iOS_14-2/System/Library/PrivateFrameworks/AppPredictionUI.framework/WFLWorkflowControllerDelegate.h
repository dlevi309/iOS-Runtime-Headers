/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/


@protocol WFLWorkflowControllerDelegate <NSObject>
@optional
-(void)workflowController:(id)arg1 didRunAction:(id)arg2;
-(void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
-(id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2;
-(void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
-(void)workflowControllerWillRun:(id)arg1;
-(void)workflowController:(id)arg1 willRunAction:(id)arg2 withInput:(id)arg3 proceedHandler:(/*^block*/id)arg4;

@end

