/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPBiasedCoin : NSObject {

	double _bias;

}

@property (nonatomic,readonly) double bias;              //@synthesize bias=_bias - In the implementation block
+(id)coinWithBias:(double)arg1 ;
+(double)sanitizedProbability:(double)arg1 ;
-(id)init;
-(id)description;
-(double)bias;
-(BOOL)flip;
-(unsigned char)generateByte;
-(id)initWithBias:(double)arg1 ;
@end

