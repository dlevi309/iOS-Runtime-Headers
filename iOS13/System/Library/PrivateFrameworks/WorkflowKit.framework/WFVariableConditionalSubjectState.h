/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class WFContentProperty, WFVariableParameterState, WFVariable;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState {

	WFContentProperty* _effectiveContentProperty;
	WFVariableParameterState* _variableState;

}

@property (nonatomic,readonly) WFVariableParameterState * variableState;                  //@synthesize variableState=_variableState - In the implementation block
@property (nonatomic,readonly) WFContentProperty * effectiveContentProperty;              //@synthesize effectiveContentProperty=_effectiveContentProperty - In the implementation block
@property (nonatomic,readonly) WFVariable * variable; 
+(id)subjectType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(WFVariable *)variable;
-(id)initWithVariable:(id)arg1 ;
-(long long)contentType;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEnumeration;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg1 ;
-(id)containedVariables;
-(id)unitType;
-(unsigned long long)displayableTimeUnits;
-(id)supportedComparisonOperators;
-(unsigned long long)comparableTimeUnits;
-(BOOL)isCaseInsensitive;
-(BOOL)isIrrational;
-(unsigned long long)tense;
-(id)initWithVariableState:(id)arg1 ;
-(Class)contentClassProvidingContentProperty;
-(WFContentProperty *)effectiveContentProperty;
-(WFVariableParameterState *)variableState;
@end

