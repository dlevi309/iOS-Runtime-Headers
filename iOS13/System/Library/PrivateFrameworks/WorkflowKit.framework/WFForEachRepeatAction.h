/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRepeatAction.h>

@interface WFForEachRepeatAction : WFRepeatAction {

	unsigned long long _numberOfLoops;

}
-(unsigned long long)numberOfLoops;
-(BOOL)shouldRepeatWithVariableSource:(id)arg1 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(id)providedVariableNames;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(id)itemVariableNameWithScopeLevel:(unsigned long long)arg1 ;
-(void)setRepeatCollection:(id)arg1 withVariableSource:(id)arg2 ;
-(id)repeatCollectionWithVariableSource:(id)arg1 ;
-(id)itemVariableName;
@end

