/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFEditWorkflowViewControllerDelegate <WFRunWorkflowViewControllerDelegate>
@optional
-(void)workflowViewControllerDidAddAction:(id)arg1;
-(void)workflowViewControllerInvalidatedSuggestions:(id)arg1;
-(void)workflowViewControllerDidRemoveAction:(id)arg1;
-(void)workflowViewControllerRequestsContentClassesEditor:(id)arg1 sender:(id)arg2;
-(void)workflowViewControllerRequestsTutorial:(id)arg1;
-(void)workflowViewControllerRequestsShareWorkflow:(id)arg1 sender:(id)arg2;
-(void)workflowViewControllerRequestsDocumentation:(id)arg1 action:(id)arg2 sender:(id)arg3;
-(BOOL)workflowViewControllerCanRemoveActions:(id)arg1;

@end

