/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFControlFlowAction.h>

@interface WFRepeatAction : WFControlFlowAction {

	long long _currentIndex;

}

@property (nonatomic,readonly) long long currentIndex;                        //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLoops; 
-(id)name;
-(long long)currentIndex;
-(unsigned long long)numberOfLoops;
-(BOOL)shouldRepeatWithVariableSource:(id)arg1 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(id)createAccompanyingActions;
-(id)providedVariableNames;
-(BOOL)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2 ;
-(BOOL)displaysParameterSummary;
-(BOOL)outputsMultipleItems;
-(id)defaultOutputName;
-(id)indexVariableName;
-(id)indexVariableNameWithScopeLevel:(unsigned long long)arg1 ;
-(id)itemVariableNameWithScopeLevel:(unsigned long long)arg1 ;
@end

