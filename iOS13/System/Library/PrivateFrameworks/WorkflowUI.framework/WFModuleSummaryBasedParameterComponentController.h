/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKComponentController.h>
#import <libobjc.A.dylib/WFModuleSummaryEditorDelegate.h>

@class WFModuleSummaryEditor, NSString;

@interface WFModuleSummaryBasedParameterComponentController : CKComponentController <WFModuleSummaryEditorDelegate> {

	WFModuleSummaryEditor* _currentEditor;

}

@property (nonatomic,retain) WFModuleSummaryEditor * currentEditor;              //@synthesize currentEditor=_currentEditor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped:(id)arg1 ;
-(WFModuleSummaryEditor *)currentEditor;
-(void)setCurrentEditor:(WFModuleSummaryEditor *)arg1 ;
-(void)parameterLayoutTapped:(id)arg1 ;
-(void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2 ;
-(void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2 ;
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3 ;
@end

