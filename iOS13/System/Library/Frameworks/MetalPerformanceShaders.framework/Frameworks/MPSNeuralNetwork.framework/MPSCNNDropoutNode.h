/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNDropoutNode : MPSNNFilterNode {

	float _keepProbability;
	unsigned long long _seed;
	MPSImageCoordinate _maskStride;

}

@property (nonatomic,readonly) float keepProbability;                              //@synthesize keepProbability=_keepProbability - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                            //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate maskStrideInPixels;              //@synthesize maskStride=_maskStride - In the implementation block
+(id)nodeWithSource:(id)arg1 ;
+(id)nodeWithSource:(id)arg1 keepProbability:(float)arg2 ;
+(id)nodeWithSource:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(MPSImageCoordinate)arg4 ;
-(unsigned long long)seed;
-(id)initWithSource:(id)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(float)keepProbability;
-(MPSImageCoordinate)maskStrideInPixels;
-(id)initWithSource:(id)arg1 keepProbability:(float)arg2 ;
-(id)initWithSource:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(MPSImageCoordinate)arg4 ;
@end

