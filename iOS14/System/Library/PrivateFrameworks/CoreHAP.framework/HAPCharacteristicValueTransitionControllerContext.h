/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, HAPTLVUnsignedNumberValue, HMDNaturalLightingActiveTransitionContext, NSString;

@interface HAPCharacteristicValueTransitionControllerContext : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _identifier;
	HAPTLVUnsignedNumberValue* _startTime;
	HAPTLVUnsignedNumberValue* _transitionChecksum;

}

@property (getter=isNaturalLightingEnabled,readonly) BOOL naturalLightingEnabled; 
@property (copy,readonly) HMDNaturalLightingActiveTransitionContext * activeTransitionContext; 
@property (nonatomic,retain) NSData * identifier;                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * transitionChecksum;                                //@synthesize transitionChecksum=_transitionChecksum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isNaturalLightingEnabled;
-(HMDNaturalLightingActiveTransitionContext *)activeTransitionContext;
-(id)init;
-(void)setStartTime:(HAPTLVUnsignedNumberValue *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(NSData *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HAPTLVUnsignedNumberValue *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(HAPTLVUnsignedNumberValue *)transitionChecksum;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithIdentifier:(id)arg1 startTime:(id)arg2 transitionChecksum:(id)arg3 ;
-(void)setTransitionChecksum:(HAPTLVUnsignedNumberValue *)arg1 ;
@end

