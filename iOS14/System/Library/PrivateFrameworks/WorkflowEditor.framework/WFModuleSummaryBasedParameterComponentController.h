/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/CKComponentController.h>
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
-(void)setCurrentEditor:(WFModuleSummaryEditor *)arg1 ;
-(WFModuleSummaryEditor *)currentEditor;
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3 ;
-(void)parameterLayoutTapped:(id)arg1 ;
@end

