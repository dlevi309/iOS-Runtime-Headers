/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSParallelRandomMTGP32;

@interface MPSCNNDropout : MPSCNNKernel {

	float _keepProbability;
	unsigned long long _seed;
	MPSImageCoordinate _maskStrideInPixels;
	MPSParallelRandomMTGP32* _parallelGenerator;

}

@property (nonatomic,readonly) float keepProbability;                              //@synthesize keepProbability=_keepProbability - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                            //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate maskStrideInPixels;              //@synthesize maskStrideInPixels=_maskStrideInPixels - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)seed;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)resetSeedOnCommandBuffer:(id)arg1 seed:(unsigned long long)arg2 ;
-(id)privateResultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 commandBuffer:(id)arg4 isTemporary:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg1 keepProbability:(float)arg2 state:(id)arg3 maskStrideInPixels:(MPSImageCoordinate)arg4 ;
-(void)synchronizeRandomStateOnCommandBuffer:(id)arg1 ;
-(id)exportRandomState;
-(float)keepProbability;
-(MPSImageCoordinate)maskStrideInPixels;
-(id)resultStateBatchForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(MPSImageCoordinate)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)dealloc;
@end

