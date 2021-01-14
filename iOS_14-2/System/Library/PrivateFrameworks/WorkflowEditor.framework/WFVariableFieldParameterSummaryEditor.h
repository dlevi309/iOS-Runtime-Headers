/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFModuleSummaryEditor.h>

@class WFStringParameterState;

@interface WFVariableFieldParameterSummaryEditor : WFModuleSummaryEditor {

	BOOL _hasChangedText;
	WFStringParameterState* _stagedState;

}

@property (nonatomic,retain) WFStringParameterState * stagedState;              //@synthesize stagedState=_stagedState - In the implementation block
@property (assign,nonatomic) BOOL hasChangedText;                               //@synthesize hasChangedText=_hasChangedText - In the implementation block
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)textEntryDidFinish;
-(void)textEntryTextDidChange:(id)arg1 ;
-(void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL*)arg2 ;
-(WFStringParameterState *)stagedState;
-(void)setStagedState:(WFStringParameterState *)arg1 ;
-(BOOL)hasChangedText;
-(void)setHasChangedText:(BOOL)arg1 ;
@end

