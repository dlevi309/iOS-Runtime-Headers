/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol WFWorkflowControllerDelegate <NSObject>
@optional
-(void)workflowControllerWillRun:(id)arg1;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3;
-(void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2;
-(void)workflowController:(id)arg1 actionDidRequestWorkflowExit:(id)arg2;
-(BOOL)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
-(id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;

@end

