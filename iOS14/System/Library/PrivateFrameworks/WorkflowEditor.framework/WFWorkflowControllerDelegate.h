/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol WFWorkflowControllerDelegate <NSObject>
@optional
-(void)workflowController:(id)arg1 didRunAction:(id)arg2;
-(void)workflowControllerWillRun:(id)arg1;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3;
-(void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)workflowController:(id)arg1 actionDidRequestWorkflowExit:(id)arg2;
-(BOOL)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
-(id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;

@end

