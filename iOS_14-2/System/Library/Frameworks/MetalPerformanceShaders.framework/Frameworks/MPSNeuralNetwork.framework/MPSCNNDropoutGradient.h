/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNDropoutGradient : MPSCNNGradientKernel {

	float _keepProbability;
	unsigned long long _seed;
	MPSImageCoordinate _maskStrideInPixels;

}

@property (nonatomic,readonly) float keepProbability;                              //@synthesize keepProbability=_keepProbability - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                            //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate maskStrideInPixels;              //@synthesize maskStrideInPixels=_maskStrideInPixels - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)seed;
-(unsigned long long)maxBatchSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(float)keepProbability;
-(MPSImageCoordinate)maskStrideInPixels;
-(id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(MPSImageCoordinate)arg4 ;
@end

