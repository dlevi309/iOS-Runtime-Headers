/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNDropoutGradientNode : MPSNNGradientFilterNode {

	float _keepProbability;
	unsigned long long _seed;
	MPSImageCoordinate _maskStride;

}

@property (nonatomic,readonly) float keepProbability;                              //@synthesize keepProbability=_keepProbability - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                            //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate maskStrideInPixels;              //@synthesize maskStride=_maskStride - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 keepProbability:(float)arg4 seed:(unsigned long long)arg5 maskStrideInPixels:(MPSImageCoordinate)arg6 ;
-(unsigned long long)seed;
-(FilterGraphNode*)newFilterNode;
-(float)keepProbability;
-(MPSImageCoordinate)maskStrideInPixels;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 keepProbability:(float)arg4 seed:(unsigned long long)arg5 maskStrideInPixels:(MPSImageCoordinate)arg6 ;
@end

