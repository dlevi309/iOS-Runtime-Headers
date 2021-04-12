/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class NSDictionary, WFHMServiceParameterState, WFHMCharacteristicSubstitutableState, NSFormatter, HMHome, HMService, HMCharacteristic;

@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState {

	BOOL _negatesValue;
	NSDictionary* _serializedWFHMServiceParameter;
	NSDictionary* _serializedWFHMCharacteristicSubstitutableState;
	WFHMServiceParameterState* _serviceParameterState;
	WFHMCharacteristicSubstitutableState* _characteristicSubstitutableState;
	NSFormatter* _characteristicValueFormatter;

}

@property (nonatomic,retain) NSDictionary * serializedWFHMServiceParameter;                                        //@synthesize serializedWFHMServiceParameter=_serializedWFHMServiceParameter - In the implementation block
@property (nonatomic,retain) NSDictionary * serializedWFHMCharacteristicSubstitutableState;                        //@synthesize serializedWFHMCharacteristicSubstitutableState=_serializedWFHMCharacteristicSubstitutableState - In the implementation block
@property (nonatomic,retain) WFHMServiceParameterState * serviceParameterState;                                    //@synthesize serviceParameterState=_serviceParameterState - In the implementation block
@property (nonatomic,retain) WFHMCharacteristicSubstitutableState * characteristicSubstitutableState;              //@synthesize characteristicSubstitutableState=_characteristicSubstitutableState - In the implementation block
@property (nonatomic,retain) NSFormatter * characteristicValueFormatter;                                           //@synthesize characteristicValueFormatter=_characteristicValueFormatter - In the implementation block
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) HMService * service; 
@property (nonatomic,readonly) HMCharacteristic * characteristic; 
@property (nonatomic,readonly) BOOL negatesValue;                                                                  //@synthesize negatesValue=_negatesValue - In the implementation block
+(id)subjectType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)unit;
-(long long)contentType;
-(id)serializedRepresentation;
-(HMHome *)home;
-(HMService *)service;
-(id)minimumValue;
-(id)maximumValue;
-(id)stepValue;
-(id)maximumLength;
-(HMCharacteristic *)characteristic;
-(id)initWithSerializedWFHMServiceParameter:(id)arg1 serializedWFHMCharacteristicSubstitutableState:(id)arg2 negatesValue:(BOOL)arg3 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithService:(id)arg1 characteristic:(id)arg2 homeIdentifier:(id)arg3 negatesValue:(BOOL)arg4 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WFHMServiceParameterState *)serviceParameterState;
-(WFHMCharacteristicSubstitutableState *)characteristicSubstitutableState;
-(BOOL)isEnumeration;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg1 ;
-(NSFormatter *)characteristicValueFormatter;
-(BOOL)negatesValue;
-(NSDictionary *)serializedWFHMServiceParameter;
-(void)setSerializedWFHMServiceParameter:(NSDictionary *)arg1 ;
-(NSDictionary *)serializedWFHMCharacteristicSubstitutableState;
-(void)setSerializedWFHMCharacteristicSubstitutableState:(NSDictionary *)arg1 ;
-(void)setServiceParameterState:(WFHMServiceParameterState *)arg1 ;
-(void)setCharacteristicSubstitutableState:(WFHMCharacteristicSubstitutableState *)arg1 ;
-(void)setCharacteristicValueFormatter:(NSFormatter *)arg1 ;
@end

