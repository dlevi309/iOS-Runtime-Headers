/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFModuleSummaryEditorDelegate <NSObject>
@required
-(void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2;
-(void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2;
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
-(void)summaryEditorDidRequestTextEntry:(id)arg1;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3;

@end

