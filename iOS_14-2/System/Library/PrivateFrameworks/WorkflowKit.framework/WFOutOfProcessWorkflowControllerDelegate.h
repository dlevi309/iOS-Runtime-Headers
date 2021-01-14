/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFOutOfProcessWorkflowControllerDelegate <NSObject>
@optional
-(void)outOfProcessWorkflowController:(id)arg1 didStartFromWorkflowReference:(id)arg2 dialogAttribution:(id)arg3;
-(id)userInterfaceForOutOfProcessWorkflowController:(id)arg1;

@required
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 reference:(id)arg4 dialogAttribution:(id)arg5;

@end

