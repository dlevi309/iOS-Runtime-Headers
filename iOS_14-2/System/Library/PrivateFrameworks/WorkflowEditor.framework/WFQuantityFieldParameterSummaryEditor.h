/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFNumberFieldParameterSummaryEditor.h>

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

