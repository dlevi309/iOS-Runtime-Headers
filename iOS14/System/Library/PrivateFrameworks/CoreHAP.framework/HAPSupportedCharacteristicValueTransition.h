/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVSignedNumberValue, HAPCharacteristicValueTransitionTypesWrapper, NSString;

@interface HAPSupportedCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVSignedNumberValue* _HAPInstanceID;
	HAPCharacteristicValueTransitionTypesWrapper* _transitionTypes;

}

@property (nonatomic,retain) HAPTLVSignedNumberValue * HAPInstanceID;                                     //@synthesize HAPInstanceID=_HAPInstanceID - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionTypesWrapper * transitionTypes;              //@synthesize transitionTypes=_transitionTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAPTLVSignedNumberValue *)HAPInstanceID;
-(HAPCharacteristicValueTransitionTypesWrapper *)transitionTypes;
-(void)setHAPInstanceID:(HAPTLVSignedNumberValue *)arg1 ;
-(void)setTransitionTypes:(HAPCharacteristicValueTransitionTypesWrapper *)arg1 ;
-(id)initWithHAPInstanceID:(id)arg1 transitionTypes:(id)arg2 ;
@end

