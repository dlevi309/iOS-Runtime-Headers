/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayInitialization.h>

@interface MPSNDArrayInitializationRandomNormal : MPSNDArrayInitialization {

	float _mean;
	float _standardDeviation;

}

@property (nonatomic,readonly) float mean;                           //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) float standardDeviation;              //@synthesize standardDeviation=_standardDeviation - In the implementation block
-(float)mean;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(float)standardDeviation;
-(unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1 ;
-(id)initWithDevice:(id)arg1 mean:(float)arg2 standardDeviation:(float)arg3 seed:(unsigned long long)arg4 ;
@end

