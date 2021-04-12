/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/WFVariableConfigurationResponderDelegate.h>

@protocol WFModuleSummarySupporting, WFParameterState, WFModuleSummaryEditorDelegate, WFVariableProvider, WFVariableUIDelegate, WFSlotTemplateTextEntry;
@class WFParameter, WFMultipleValueParameterState, UIView, WFTextTokenChooser, WFVariableAttachment, WFVariableConfigurationResponder, NSString;

@interface WFModuleSummaryEditor : NSObject <WFVariableConfigurationResponderDelegate> {

	BOOL _processing;
	BOOL _variableResponderSuspended;
	BOOL _returnToKeyboardOnComplete;
	WFParameter*<WFModuleSummarySupporting> _parameter;
	id<WFParameterState> _initialState;
	WFMultipleValueParameterState* _initialArrayState;
	unsigned long long _arrayIndex;
	id<WFModuleSummaryEditorDelegate> _delegate;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	UIView*<WFSlotTemplateTextEntry> _textEntry;
	WFTextTokenChooser* _variableChooser;
	WFVariableAttachment* _editingVariableAttachment;
	WFVariableConfigurationResponder* _variableResponder;

}

@property (nonatomic,retain) WFTextTokenChooser * variableChooser;                              //@synthesize variableChooser=_variableChooser - In the implementation block
@property (nonatomic,retain) WFVariableAttachment * editingVariableAttachment;                  //@synthesize editingVariableAttachment=_editingVariableAttachment - In the implementation block
@property (nonatomic,retain) WFVariableConfigurationResponder * variableResponder;              //@synthesize variableResponder=_variableResponder - In the implementation block
@property (assign,nonatomic) BOOL variableResponderSuspended;                                   //@synthesize variableResponderSuspended=_variableResponderSuspended - In the implementation block
@property (assign,nonatomic) BOOL returnToKeyboardOnComplete;                                   //@synthesize returnToKeyboardOnComplete=_returnToKeyboardOnComplete - In the implementation block
@property (nonatomic,readonly) WFParameter*<WFModuleSummarySupporting> parameter;               //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> initialState;                               //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,readonly) WFMultipleValueParameterState * initialArrayState;               //@synthesize initialArrayState=_initialArrayState - In the implementation block
@property (nonatomic,readonly) unsigned long long arrayIndex;                                   //@synthesize arrayIndex=_arrayIndex - In the implementation block
@property (getter=isProcessing,nonatomic,readonly) BOOL processing;                             //@synthesize processing=_processing - In the implementation block
@property (assign,nonatomic,__weak) id<WFModuleSummaryEditorDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                    //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) UIView*<WFSlotTemplateTextEntry> textEntry;               //@synthesize textEntry=_textEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)variableResultTypeForParameter:(id)arg1 ;
+(BOOL)supportsEditingTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2 ;
-(id<WFModuleSummaryEditorDelegate>)delegate;
-(void)setDelegate:(id<WFModuleSummaryEditorDelegate>)arg1 ;
-(id<WFParameterState>)initialState;
-(unsigned long long)arrayIndex;
-(WFParameter*<WFModuleSummarySupporting>)parameter;
-(BOOL)isProcessing;
-(id<WFVariableProvider>)variableProvider;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL*)arg2 ;
-(void)textEntryTextDidChange:(id)arg1 ;
-(void)textEntryDidFinish;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)variableResponderDidEndEditing:(id)arg1 ;
-(void)variableResponderDidReturnToKeyboard:(id)arg1 ;
-(BOOL)variableResponderHasText:(id)arg1 ;
-(void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2 ;
-(void)variableResponderDidRevealAction:(id)arg1 ;
-(void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2 ;
-(void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(/*^block*/id)arg4 commitHandler:(/*^block*/id)arg5 ;
-(WFVariableConfigurationResponder *)variableResponder;
-(void)setVariableResponder:(WFVariableConfigurationResponder *)arg1 ;
-(id)initWithParameter:(id)arg1 initialState:(id)arg2 initialArrayState:(id)arg3 arrayIndex:(unsigned long long)arg4 processing:(BOOL)arg5 ;
-(void)beginEditingNewArrayElementFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)stageState:(id)arg1 ;
-(void)commitState:(id)arg1 ;
-(void)commitMultipleState:(id)arg1 ;
-(void)completeEditing;
-(void)completeEditingWithTextAttachmentToEdit:(id)arg1 ;
-(void)requestTextEntry;
-(BOOL)textEntryShouldChangeText:(id)arg1 ;
-(void)textEntryDidCutWithOriginalBlock:(/*^block*/id)arg1 ;
-(void)textEntryDidCopyWithOriginalBlock:(/*^block*/id)arg1 ;
-(void)textEntryDidPasteWithOriginalBlock:(/*^block*/id)arg1 ;
-(void)sourceViewTintColorDidChange;
-(void)beginVariableMenuForSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1 ;
-(id)variableMenuInitialStateForSlotWithIdentifier:(id)arg1 ;
-(void)beginEditingTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2 sourceView:(id)arg3 ;
-(BOOL)canTypeAlongsideVariables;
-(id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2 ;
-(void)_beginEditingVariableAttachment:(id)arg1 withParentView:(id)arg2 ;
-(WFMultipleValueParameterState *)initialArrayState;
-(UIView*<WFSlotTemplateTextEntry>)textEntry;
-(WFTextTokenChooser *)variableChooser;
-(void)setVariableChooser:(WFTextTokenChooser *)arg1 ;
-(WFVariableAttachment *)editingVariableAttachment;
-(void)setEditingVariableAttachment:(WFVariableAttachment *)arg1 ;
-(BOOL)variableResponderSuspended;
-(void)setVariableResponderSuspended:(BOOL)arg1 ;
-(BOOL)returnToKeyboardOnComplete;
-(void)setReturnToKeyboardOnComplete:(BOOL)arg1 ;
@end

