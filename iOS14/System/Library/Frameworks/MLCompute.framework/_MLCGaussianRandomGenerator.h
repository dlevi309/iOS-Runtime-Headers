/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@interface _MLCGaussianRandomGenerator : NSObject {

	BOOL _seeded;
	double _mean;
	double _scale;
	unsigned long long _seedValue;

}

@property (nonatomic,readonly) double mean;                               //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL seeded;                               //@synthesize seeded=_seeded - In the implementation block
@property (nonatomic,readonly) unsigned long long seedValue;              //@synthesize seedValue=_seedValue - In the implementation block
+(id)zeroMeanGaussianRandomGenerator;
+(id)zeroMeanGaussianRandomGeneratorWithSeed:(unsigned long long)arg1 ;
-(double)mean;
-(double)sample;
-(double)scale;
-(BOOL)seeded;
-(id)initWithMean:(double)arg1 scale:(double)arg2 seeded:(BOOL)arg3 seedValue:(unsigned long long)arg4 ;
-(unsigned long long)seedValue;
@end

