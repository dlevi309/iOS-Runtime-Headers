/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFAppendVariableAction : WFAction
-(id)variableName;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)providedVariableNames;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(id)accessibilityName;
@end

