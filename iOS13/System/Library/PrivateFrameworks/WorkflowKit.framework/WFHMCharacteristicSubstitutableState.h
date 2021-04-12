/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(NSString *)homeIdentifier;
-(HMCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)serializedCharacteristic;
-(void)setSerializedCharacteristic:(NSDictionary *)arg1 ;
@end

