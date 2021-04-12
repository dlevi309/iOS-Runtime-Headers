/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, HAPTLVUnsignedNumberValue, HAPCharacteristicValueRange, NSString;

@interface HAPCharacteristicValueLinearDerivedTransition : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _transitionPoints;
	HAPTLVUnsignedNumberValue* _sourceHAPInstanceID;
	HAPCharacteristicValueRange* _sourceValueRange;

}

@property (nonatomic,retain) NSMutableArray * transitionPoints;                            //@synthesize transitionPoints=_transitionPoints - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * sourceHAPInstanceID;              //@synthesize sourceHAPInstanceID=_sourceHAPInstanceID - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueRange * sourceValueRange;               //@synthesize sourceValueRange=_sourceValueRange - In the implementation block
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
-(NSMutableArray *)transitionPoints;
-(id)initWithTransitionPoints:(id)arg1 sourceHAPInstanceID:(id)arg2 sourceValueRange:(id)arg3 ;
-(void)setTransitionPoints:(NSMutableArray *)arg1 ;
-(void)setSourceHAPInstanceID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setSourceValueRange:(HAPCharacteristicValueRange *)arg1 ;
-(HAPTLVUnsignedNumberValue *)sourceHAPInstanceID;
-(HAPCharacteristicValueRange *)sourceValueRange;
@end

