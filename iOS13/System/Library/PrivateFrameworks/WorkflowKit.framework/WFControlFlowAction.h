/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFControlFlowAction : WFAction {

	long long _mode;

}

@property (nonatomic,readonly) long long mode;              //@synthesize mode=_mode - In the implementation block
-(long long)mode;
-(BOOL)isDeletable;
-(id)icon;
-(BOOL)hasChildren;
-(id)shortName;
-(id)iconName;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(id)outputContentClasses;
-(id)serializedParameters;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(BOOL)inputTypePassthrough;
-(BOOL)inputPassthrough;
-(BOOL)snappingPassthrough;
-(BOOL)displaysParameterSummary;
-(id)createAccompanyingActionWithMode:(long long)arg1 ;
-(void)generateGroupingIdentifierIfNecessary;
-(id)outputIcon;
-(id)groupedOpenAction;
-(id)groupedCloseAction;
-(id)groupedIntermediaryActions;
@end

