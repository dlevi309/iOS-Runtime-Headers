/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFModuleSummaryEditor.h>

@class WFStringParameterState;

@interface WFVariableFieldParameterSummaryEditor : WFModuleSummaryEditor {

	BOOL _hasChangedText;
	WFStringParameterState* _stagedState;

}

@property (nonatomic,retain) WFStringParameterState * stagedState;              //@synthesize stagedState=_stagedState - In the implementation block
@property (assign,nonatomic) BOOL hasChangedText;                               //@synthesize hasChangedText=_hasChangedText - In the implementation block
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL*)arg2 ;
-(void)textEntryTextDidChange:(id)arg1 ;
-(void)textEntryDidFinish;
-(WFStringParameterState *)stagedState;
-(void)setStagedState:(WFStringParameterState *)arg1 ;
-(BOOL)hasChangedText;
-(void)setHasChangedText:(BOOL)arg1 ;
@end

