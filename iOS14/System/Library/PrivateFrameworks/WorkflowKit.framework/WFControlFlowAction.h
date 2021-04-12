/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFControlFlowAction : WFAction {

	long long _mode;

}

@property (nonatomic,readonly) long long mode;              //@synthesize mode=_mode - In the implementation block
-(long long)mode;
-(id)icon;
-(id)shortName;
-(BOOL)hasChildren;
-(id)serializedParameters;
-(BOOL)isDeletable;
-(id)iconName;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(id)outputContentClasses;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(BOOL)inputPassthrough;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(BOOL)displaysParameterSummary;
-(void)generateGroupingIdentifierIfNecessary;
-(id)createAccompanyingActionWithMode:(long long)arg1 ;
-(BOOL)snappingPassthrough;
-(BOOL)inputTypePassthrough;
-(id)outputIcon;
-(id)groupedOpenAction;
-(id)groupedCloseAction;
-(id)groupedIntermediaryActions;
@end

