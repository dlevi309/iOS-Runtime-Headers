/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFNumberFieldParameterSummaryEditor.h>

@class WFAlert;

@interface WFQuantityFieldParameterSummaryEditor : WFNumberFieldParameterSummaryEditor {

	WFAlert* _unitAlert;

}

@property (nonatomic,retain) WFAlert * unitAlert;              //@synthesize unitAlert=_unitAlert - In the implementation block
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1 ;
-(id)variableMenuInitialStateForSlotWithIdentifier:(id)arg1 ;
-(id)stateForEnteredText:(id)arg1 ;
-(id)stateForVariable:(id)arg1 ;
-(WFAlert *)unitAlert;
-(void)setUnitAlert:(WFAlert *)arg1 ;
@end

