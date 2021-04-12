/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVFloatNumberValue, HAPTLVUnsignedNumberValue, NSString;

@interface HAPCharacteristicValueLinearDerivedTransitionPoint : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVFloatNumberValue* _scale;
	HAPTLVFloatNumberValue* _offset;
	HAPTLVUnsignedNumberValue* _targetCompletionDuration;
	HAPTLVUnsignedNumberValue* _startDelayDuration;

}

@property (nonatomic,retain) HAPTLVFloatNumberValue * scale;                                    //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) HAPTLVFloatNumberValue * offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * targetCompletionDuration;              //@synthesize targetCompletionDuration=_targetCompletionDuration - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * startDelayDuration;                    //@synthesize startDelayDuration=_startDelayDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionPointWithMinimumBrightness:(long long)arg1 minimumBrightnessColorTemperature:(long long)arg2 maximumBrightness:(long long)arg3 maximumBrightnessColorTemperature:(long long)arg4 targetCompletionDuration:(unsigned long long)arg5 ;
+(id)transitionPointWithPreviousTransitionPoint:(id)arg1 nextTransitionPoint:(id)arg2 timeElapsedSincePreviousTransitionPoint:(unsigned long long)arg3 minimumBrightness:(long long)arg4 maximumBrightness:(long long)arg5 ;
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(long long)colorTemperatureForBrightness:(long long)arg1 ;
-(id)init;
-(HAPTLVFloatNumberValue *)scale;
-(HAPTLVFloatNumberValue *)offset;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setScale:(HAPTLVFloatNumberValue *)arg1 ;
-(void)setOffset:(HAPTLVFloatNumberValue *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAPTLVUnsignedNumberValue *)targetCompletionDuration;
-(id)initWithScale:(id)arg1 offset:(id)arg2 targetCompletionDuration:(id)arg3 startDelayDuration:(id)arg4 ;
-(void)setStartDelayDuration:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setTargetCompletionDuration:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)startDelayDuration;
@end

