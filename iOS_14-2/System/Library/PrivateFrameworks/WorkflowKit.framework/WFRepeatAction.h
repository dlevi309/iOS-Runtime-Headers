/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFControlFlowAction.h>

@interface WFRepeatAction : WFControlFlowAction {

	long long _currentIndex;

}

@property (nonatomic,readonly) long long currentIndex;                        //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLoops; 
-(long long)currentIndex;
-(unsigned long long)numberOfLoops;
-(id)name;
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

