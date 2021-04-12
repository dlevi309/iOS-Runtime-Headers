/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRepeatAction.h>

@interface WFFiniteRepeatAction : WFRepeatAction {

	unsigned long long _numberOfLoops;

}
-(unsigned long long)numberOfLoops;
-(BOOL)shouldRepeatWithVariableSource:(id)arg1 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(void)runWithInput:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 variableSource:(id)arg4 workQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
-(id)repeatInputVariableName;
-(id)repeatCountVariableName;
-(void)setRepeatInput:(id)arg1 withVariableSource:(id)arg2 ;
-(id)repeatInputWithVariableSource:(id)arg1 ;
-(void)setRepeatCount:(long long)arg1 withVariableSource:(id)arg2 ;
-(long long)repeatCountWithVariableSource:(id)arg1 ;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
@end

