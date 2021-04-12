/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/WFVariableTypingContext.h>
#import <libobjc.A.dylib/WFVariableUIDelegate.h>

@class WFVariableStringParameterState, WFVariableInputCoordinator, NSTextAttachment, NSString, NSArray;

@interface WFTextInputParameterSummaryEditor : WFModuleSummaryEditor <WFVariableTypingContext, WFVariableUIDelegate> {

	BOOL _hasChangedText;
	BOOL _isPickingMagicVariable;
	WFVariableStringParameterState* _stagedState;
	WFVariableInputCoordinator* _variableCoordinator;
	NSTextAttachment* _textAttachmentToEdit;

}

@property (nonatomic,retain) WFVariableInputCoordinator * variableCoordinator;              //@synthesize variableCoordinator=_variableCoordinator - In the implementation block
@property (nonatomic,retain) NSTextAttachment * textAttachmentToEdit;                       //@synthesize textAttachmentToEdit=_textAttachmentToEdit - In the implementation block
@property (assign,nonatomic) BOOL isPickingMagicVariable;                                   //@synthesize isPickingMagicVariable=_isPickingMagicVariable - In the implementation block
@property (nonatomic,readonly) BOOL hasChangedText;                                         //@synthesize hasChangedText=_hasChangedText - In the implementation block
@property (nonatomic,readonly) WFVariableStringParameterState * stagedState;                //@synthesize stagedState=_stagedState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * currentVariables; 
-(NSRange)selectedRange;
-(void)setVariableProvider:(id)arg1 ;
-(NSArray *)currentVariables;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL*)arg2 ;
-(void)textEntryTextDidChange:(id)arg1 ;
-(void)textEntryDidFinish;
-(WFVariableStringParameterState *)stagedState;
-(BOOL)hasChangedText;
-(void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(/*^block*/id)arg3 goBackHandler:(/*^block*/id)arg4 scrolledAwayHandler:(/*^block*/id)arg5 ;
-(void)setVariableUIDelegate:(id)arg1 ;
-(WFVariableInputCoordinator *)variableCoordinator;
-(void)setVariableCoordinator:(WFVariableInputCoordinator *)arg1 ;
-(void)textEntryDidCutWithOriginalBlock:(/*^block*/id)arg1 ;
-(void)textEntryDidCopyWithOriginalBlock:(/*^block*/id)arg1 ;
-(void)textEntryDidPasteWithOriginalBlock:(/*^block*/id)arg1 ;
-(void)sourceViewTintColorDidChange;
-(BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1 ;
-(id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2 ;
-(void)insertVariable:(id)arg1 ;
-(BOOL)isPickingMagicVariable;
-(void)setIsPickingMagicVariable:(BOOL)arg1 ;
-(BOOL)doneButtonNeededForInputTraits:(id)arg1 allowMultipleLines:(BOOL)arg2 ;
-(void)copyVariableString;
-(void)configureVariableAttachmentForInsertion:(id)arg1 ;
-(NSTextAttachment *)textAttachmentToEdit;
-(void)setTextAttachmentToEdit:(NSTextAttachment *)arg1 ;
@end

