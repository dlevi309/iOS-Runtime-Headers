/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPCharacteristicValueTransition, HAPCharacteristicValueTransitionState, NSString;

@interface HAPCharacteristicValueTransitionControlResponse : NSObject <NSCopying, HAPTLVProtocol> {

	HAPCharacteristicValueTransition* _valueTransition;
	HAPCharacteristicValueTransitionState* _transitionState;

}

@property (nonatomic,retain) HAPCharacteristicValueTransition * valueTransition;                   //@synthesize valueTransition=_valueTransition - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionState * transitionState;              //@synthesize transitionState=_transitionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isNaturalLightingEnabledForCharacteristic:(id)arg1 ;
-(void)setTransitionState:(HAPCharacteristicValueTransitionState *)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HAPCharacteristicValueTransitionState *)transitionState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAPCharacteristicValueTransition *)valueTransition;
-(void)setValueTransition:(HAPCharacteristicValueTransition *)arg1 ;
-(id)initWithValueTransition:(id)arg1 transitionState:(id)arg2 ;
@end

