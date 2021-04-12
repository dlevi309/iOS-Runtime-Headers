/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)serializedRepresentation;
-(unsigned long long)tense;
-(long long)contentType;
-(id)unitType;
-(id)initWithVariable:(id)arg1 ;
-(unsigned long long)hash;
-(WFVariable *)variable;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEnumeration;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg1 ;
-(id)containedVariables;
-(unsigned long long)displayableTimeUnits;
-(BOOL)isCaseInsensitive;
-(unsigned long long)comparableTimeUnits;
-(id)supportedComparisonOperators;
-(BOOL)isIrrational;
-(id)initWithVariableState:(id)arg1 ;
-(Class)contentClassProvidingContentProperty;
-(WFContentProperty *)effectiveContentProperty;
-(WFVariableParameterState *)variableState;
@end

