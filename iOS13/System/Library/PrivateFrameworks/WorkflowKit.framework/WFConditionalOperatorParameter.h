/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFConditionalOperatorParameter : WFEnumerationParameter {

	BOOL _usingLegacyOperatorBehavior;
	NSArray* _possibleStates;
	NSArray* _possibleContentOperators;
	long long _contentType;
	unsigned long long _displayableTimeUnits;

}

@property (nonatomic,readonly) NSArray * possibleStates;                             //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,readonly) NSArray * possibleContentOperators;                   //@synthesize possibleContentOperators=_possibleContentOperators - In the implementation block
@property (nonatomic,readonly) long long contentType;                                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) unsigned long long displayableTimeUnits;              //@synthesize displayableTimeUnits=_displayableTimeUnits - In the implementation block
@property (nonatomic,readonly) BOOL usingLegacyOperatorBehavior;                     //@synthesize usingLegacyOperatorBehavior=_usingLegacyOperatorBehavior - In the implementation block
-(long long)contentType;
-(NSArray *)possibleStates;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(BOOL)allowsMultipleValues;
-(Class)stateClass;
-(BOOL)supportsImportQuestions;
-(unsigned long long)displayableTimeUnits;
-(void)setPossibleContentOperators:(id)arg1 withContentType:(long long)arg2 displayableTimeUnits:(unsigned long long)arg3 usingLegacyOperatorBehavior:(BOOL)arg4 ;
-(NSArray *)possibleContentOperators;
-(BOOL)usingLegacyOperatorBehavior;
@end

