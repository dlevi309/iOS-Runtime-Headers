/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class NSNumber, NSString;

@interface WFConditionalSubjectParameterState : NSObject <WFParameterState> {

	BOOL _caseInsensitive;
	BOOL _irrational;
	BOOL _enumeration;
	NSNumber* _maximumLength;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	unsigned long long _tense;
	unsigned long long _displayableTimeUnits;
	unsigned long long _comparableTimeUnits;
	NSString* _unitType;
	NSString* _homeIdentifier;

}

@property (nonatomic,readonly) long long contentType; 
@property (nonatomic,readonly) NSNumber * maximumLength;                                   //@synthesize maximumLength=_maximumLength - In the implementation block
@property (getter=isCaseInsensitive,nonatomic,readonly) BOOL caseInsensitive;              //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,readonly) NSNumber * minimumValue;                                    //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                                    //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * stepValue;                                       //@synthesize stepValue=_stepValue - In the implementation block
@property (getter=isIrrational,nonatomic,readonly) BOOL irrational;                        //@synthesize irrational=_irrational - In the implementation block
@property (nonatomic,readonly) unsigned long long tense;                                   //@synthesize tense=_tense - In the implementation block
@property (nonatomic,readonly) unsigned long long displayableTimeUnits;                    //@synthesize displayableTimeUnits=_displayableTimeUnits - In the implementation block
@property (nonatomic,readonly) unsigned long long comparableTimeUnits;                     //@synthesize comparableTimeUnits=_comparableTimeUnits - In the implementation block
@property (nonatomic,readonly) NSString * unitType;                                        //@synthesize unitType=_unitType - In the implementation block
@property (getter=isEnumeration,nonatomic,readonly) BOOL enumeration;                      //@synthesize enumeration=_enumeration - In the implementation block
@property (nonatomic,copy) NSString * homeIdentifier;                                      //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
+(id)subjectType;
+(id)subjectClasses;
-(id)serializedRepresentation;
-(NSNumber *)stepValue;
-(unsigned long long)tense;
-(NSNumber *)maximumValue;
-(long long)contentType;
-(NSString *)unitType;
-(id)initWithVariable:(id)arg1 ;
-(NSString *)homeIdentifier;
-(void)setHomeIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)minimumValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)maximumLength;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEnumeration;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg1 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(unsigned long long)displayableTimeUnits;
-(BOOL)isCaseInsensitive;
-(unsigned long long)comparableTimeUnits;
-(id)initWithHomeIdentifier:(id)arg1 ;
-(id)supportedComparisonOperators;
-(BOOL)isIrrational;
@end

