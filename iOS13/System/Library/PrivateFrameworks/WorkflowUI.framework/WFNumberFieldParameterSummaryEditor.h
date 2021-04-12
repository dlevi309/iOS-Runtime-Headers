/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/WFVariableUIDelegate.h>

@protocol WFParameterState;
@class WFVariableInputCoordinator, NSString;

@interface WFNumberFieldParameterSummaryEditor : WFModuleSummaryEditor <WFVariableUIDelegate> {

	BOOL _hasChangedText;
	BOOL _isPickingMagicVariable;
	WFVariableInputCoordinator* _variableCoordinator;
	id<WFParameterState> _stagedState;

}

@property (nonatomic,retain) WFVariableInputCoordinator * variableCoordinator;              //@synthesize variableCoordinator=_variableCoordinator - In the implementation block
@property (nonatomic,retain) id<WFParameterState> stagedState;                              //@synthesize stagedState=_stagedState - In the implementation block
@property (assign,nonatomic) BOOL hasChangedText;                                           //@synthesize hasChangedText=_hasChangedText - In the implementation block
@property (assign,nonatomic) BOOL isPickingMagicVariable;                                   //@synthesize isPickingMagicVariable=_isPickingMagicVariable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVariableProvider:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL*)arg2 ;
-(void)textEntryTextDidChange:(id)arg1 ;
-(void)textEntryDidFinish;
-(id<WFParameterState>)stagedState;
-(void)setStagedState:(id<WFParameterState>)arg1 ;
-(BOOL)hasChangedText;
-(void)setHasChangedText:(BOOL)arg1 ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(/*^block*/id)arg3 goBackHandler:(/*^block*/id)arg4 scrolledAwayHandler:(/*^block*/id)arg5 ;
-(void)setVariableUIDelegate:(id)arg1 ;
-(WFVariableInputCoordinator *)variableCoordinator;
-(void)setVariableCoordinator:(WFVariableInputCoordinator *)arg1 ;
-(BOOL)textEntryShouldChangeText:(id)arg1 ;
-(void)sourceViewTintColorDidChange;
-(id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2 ;
-(id)stateForEnteredText:(id)arg1 ;
-(id)stateForVariable:(id)arg1 ;
-(void)negateText;
-(BOOL)isPickingMagicVariable;
-(void)setIsPickingMagicVariable:(BOOL)arg1 ;
@end

