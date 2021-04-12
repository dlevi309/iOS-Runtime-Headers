/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFRunWorkflowViewControllerDelegate <NSObject>
@optional
-(void)workflowViewControllerRequestsActionDrawer:(id)arg1;
-(BOOL)isDrawerAvailableForWorkflowViewController:(id)arg1;
-(void)workflowViewControllerRequestsDismissal:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)workflowViewControllerWillRun:(id)arg1 continueHandler:(/*^block*/id)arg2;
-(void)workflowViewControllerDidRun:(id)arg1 withOutput:(id)arg2 error:(id)arg3 cancelled:(BOOL)arg4 continueHandler:(/*^block*/id)arg5;
-(BOOL)workflowViewController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)workflowViewController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)runWorkflowToolbarForWorkflowViewController:(id)arg1;

@end

