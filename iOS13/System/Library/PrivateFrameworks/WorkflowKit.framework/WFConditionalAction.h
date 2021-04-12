/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFControlFlowAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>

@protocol WFVariableProvider;
@class NSString;

@interface WFConditionalAction : WFControlFlowAction <WFDynamicEnumerationDataSource, WFVariableDelegate> {

	id<WFVariableProvider> _parentVariableProvider;

}

@property (assign,nonatomic,__weak) id<WFVariableProvider> parentVariableProvider;              //@synthesize parentVariableProvider=_parentVariableProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializedParametersForHome:(id)arg1 ;
-(id)name;
-(BOOL)isDeletable;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(BOOL)inputRequired;
-(BOOL)skipsProcessingHiddenParameters;
-(BOOL)populatesInputFromInputParameter;
-(id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2 ;
-(id)actionProvidingVariableWithOutputUUID:(id)arg1 ;
-(id)actionsProvidingVariableName:(id)arg1 ;
-(id)copyForProcessing;
-(id)createAccompanyingActions;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)inputContentClasses;
-(BOOL)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2 ;
-(id)inputSourceInWorkflow:(id)arg1 ;
-(id)minimumSupportedClientVersion;
-(BOOL)inputPassthrough;
-(id)defaultOutputName;
-(void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(BOOL)truthWithVariableSource:(id)arg1 ;
-(void)variableDidChange:(id)arg1 ;
-(id)fileSizeForQuantityValue:(id)arg1 ;
-(id)timeIntervalForQuantityValue:(id)arg1 ;
-(id)measurementForQuantityValue:(id)arg1 ;
-(id)predicateForComparisonOperator:(long long)arg1 rightDate:(id)arg2 secondRightDate:(id)arg3 comparableTimeUnits:(unsigned long long)arg4 rightDurationValue:(id)arg5 ;
-(void)setTruth:(BOOL)arg1 withVariableSource:(id)arg2 ;
-(BOOL)groupContainsOtherwiseAction;
-(Class)settingsViewControllerClass;
-(void)reloadOpenActionInWorkflow:(id)arg1 ;
-(id)subjectState;
-(long long)subjectContentType;
-(void)updatePossibleOperators;
-(void)updateRightExpressionParameters;
-(BOOL)useLegacyComparisonBehavior;
-(void)clearLegacyComparisonBehaviorFlag;
-(id<WFVariableProvider>)parentVariableProvider;
-(void)setParentVariableProvider:(id<WFVariableProvider>)arg1 ;
@end

