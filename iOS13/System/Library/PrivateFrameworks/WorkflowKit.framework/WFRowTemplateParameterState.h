/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class NSString, WFContentProperty, NSArray, WFVariableSubstitutableParameterState, WFVariableStringParameterState, WFBooleanSubstitutableState, WFNumberStringSubstitutableState, WFCalendarUnitSubstitutableState, WFByteCountUnitSubstitutableState, WFDateSubstitutableState;

@interface WFRowTemplateParameterState : NSObject <WFParameterState> {

	NSString* _propertyName;
	BOOL _variablesDisabled;
	BOOL _removable;
	BOOL _bounded;
	BOOL _hidden;
	Class _contentItemClass;
	WFContentProperty* _contentProperty;
	NSArray* _contentProperties;
	long long _comparisonOperator;
	WFVariableSubstitutableParameterState* _enumerationValue;
	WFVariableStringParameterState* _stringValue;
	WFBooleanSubstitutableState* _booleanValue;
	WFNumberStringSubstitutableState* _numberValue;
	WFVariableStringParameterState* _phoneValue;
	WFVariableStringParameterState* _emailValue;
	WFCalendarUnitSubstitutableState* _calendarUnitValue;
	WFByteCountUnitSubstitutableState* _byteCountUnitValue;
	WFDateSubstitutableState* _dateValue;
	WFDateSubstitutableState* _anotherDateValue;

}

@property (nonatomic,readonly) Class contentItemClass;                                                //@synthesize contentItemClass=_contentItemClass - In the implementation block
@property (nonatomic,readonly) WFContentProperty * contentProperty;                                   //@synthesize contentProperty=_contentProperty - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentProperties;                                      //@synthesize contentProperties=_contentProperties - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filterableProperties; 
@property (nonatomic,readonly) BOOL variablesDisabled;                                                //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,readonly) long long comparisonOperator;                                          //@synthesize comparisonOperator=_comparisonOperator - In the implementation block
@property (nonatomic,readonly) BOOL removable;                                                        //@synthesize removable=_removable - In the implementation block
@property (nonatomic,readonly) BOOL bounded;                                                          //@synthesize bounded=_bounded - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                                                           //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) WFVariableSubstitutableParameterState * enumerationValue;              //@synthesize enumerationValue=_enumerationValue - In the implementation block
@property (nonatomic,readonly) WFVariableStringParameterState * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) WFBooleanSubstitutableState * booleanValue;                            //@synthesize booleanValue=_booleanValue - In the implementation block
@property (nonatomic,readonly) WFNumberStringSubstitutableState * numberValue;                        //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,readonly) WFVariableStringParameterState * phoneValue;                           //@synthesize phoneValue=_phoneValue - In the implementation block
@property (nonatomic,readonly) WFVariableStringParameterState * emailValue;                           //@synthesize emailValue=_emailValue - In the implementation block
@property (nonatomic,readonly) WFCalendarUnitSubstitutableState * calendarUnitValue;                  //@synthesize calendarUnitValue=_calendarUnitValue - In the implementation block
@property (nonatomic,readonly) WFByteCountUnitSubstitutableState * byteCountUnitValue;                //@synthesize byteCountUnitValue=_byteCountUnitValue - In the implementation block
@property (nonatomic,readonly) WFDateSubstitutableState * dateValue;                                  //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) WFDateSubstitutableState * anotherDateValue;                           //@synthesize anotherDateValue=_anotherDateValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WFVariableStringParameterState *)stringValue;
-(id)serializedRepresentation;
-(WFDateSubstitutableState *)dateValue;
-(BOOL)hidden;
-(WFNumberStringSubstitutableState *)numberValue;
-(WFBooleanSubstitutableState *)booleanValue;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(Class)contentItemClass;
-(long long)comparisonOperator;
-(BOOL)removable;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithPropertyName:(id)arg1 contentItemClass:(Class)arg2 comparisonOperator:(long long)arg3 removable:(BOOL)arg4 bounded:(BOOL)arg5 hidden:(BOOL)arg6 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 contentItemClass:(Class)arg4 variablesDisabled:(BOOL)arg5 ;
-(NSArray *)filterableProperties;
-(BOOL)isValueWithInfoDisplayed:(const WFRowTemplateValueInfo*)arg1 ;
-(id)defaultStateForInfo:(const WFRowTemplateValueInfo*)arg1 ;
-(void)getUserInputRequiredValue:(/*^block*/id)arg1 context:(id)arg2 ;
-(id)actualCopyWithZone:(NSZone*)arg1 propertyName:(id)arg2 ;
-(id)actualCopyWithZone:(NSZone*)arg1 ;
-(id)stateBySettingContentProperty:(id)arg1 ;
-(id)stateBySettingComparisonOperator:(long long)arg1 ;
-(id)stateBySettingVariablesDisabled:(BOOL)arg1 ;
-(id)stateBySettingEnumerationValue:(id)arg1 ;
-(id)stateBySettingStringValue:(id)arg1 ;
-(id)stateBySettingBooleanValue:(id)arg1 ;
-(id)stateBySettingNumberValue:(id)arg1 ;
-(id)stateBySettingPhoneValue:(id)arg1 ;
-(id)stateBySettingEmailValue:(id)arg1 ;
-(id)stateBySettingCalendarUnitValue:(id)arg1 ;
-(id)stateBySettingByteCountUnitValue:(id)arg1 ;
-(id)stateBySettingDateValue:(id)arg1 ;
-(id)stateBySettingAnotherDateValue:(id)arg1 ;
-(WFContentProperty *)contentProperty;
-(NSArray *)contentProperties;
-(BOOL)variablesDisabled;
-(BOOL)bounded;
-(WFVariableSubstitutableParameterState *)enumerationValue;
-(WFVariableStringParameterState *)phoneValue;
-(WFVariableStringParameterState *)emailValue;
-(WFCalendarUnitSubstitutableState *)calendarUnitValue;
-(WFByteCountUnitSubstitutableState *)byteCountUnitValue;
-(WFDateSubstitutableState *)anotherDateValue;
@end

