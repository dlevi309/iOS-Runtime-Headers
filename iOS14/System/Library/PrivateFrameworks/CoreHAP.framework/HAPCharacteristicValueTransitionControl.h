/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPCharacteristicValueTransitionFetch, HAPCharacteristicValueTransitionStart, NSString;

@interface HAPCharacteristicValueTransitionControl : NSObject <NSCopying, HAPTLVProtocol> {

	HAPCharacteristicValueTransitionFetch* _transitionFetch;
	HAPCharacteristicValueTransitionStart* _transitionStart;

}

@property (nonatomic,retain) HAPCharacteristicValueTransitionFetch * transitionFetch;              //@synthesize transitionFetch=_transitionFetch - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionStart * transitionStart;              //@synthesize transitionStart=_transitionStart - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1 ;
-(id)naturalLightingEnabledForCharacteristic:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTransitionStart:(HAPCharacteristicValueTransitionStart *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithTransitionFetch:(id)arg1 transitionStart:(id)arg2 ;
-(HAPCharacteristicValueTransitionStart *)transitionStart;
-(void)setTransitionFetch:(HAPCharacteristicValueTransitionFetch *)arg1 ;
-(HAPCharacteristicValueTransitionFetch *)transitionFetch;
@end

