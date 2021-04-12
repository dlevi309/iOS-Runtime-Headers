/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFModuleSummaryEditorDelegate <NSObject>
@optional
-(void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2;
-(void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2;

@required
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
-(void)summaryEditorDidRequestTextEntry:(id)arg1;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3;

@end

