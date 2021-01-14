/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class HMCharacteristic, NSString, NSDictionary;

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState {

	HMCharacteristic* _characteristic;
	NSString* _homeIdentifier;
	NSDictionary* _serializedCharacteristic;

}

@property (nonatomic,retain) NSDictionary * serializedCharacteristic;              //@synthesize serializedCharacteristic=_serializedCharacteristic - In the implementation block
@property (nonatomic,readonly) NSString * homeIdentifier;                          //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * characteristic;                  //@synthesize characteristic=_characteristic - In the implementation block
-(id)serializedRepresentation;
-(NSString *)homeIdentifier;
-(unsigned long long)hash;
-(HMCharacteristic *)characteristic;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2 ;
-(NSDictionary *)serializedCharacteristic;
-(void)setSerializedCharacteristic:(NSDictionary *)arg1 ;
@end

