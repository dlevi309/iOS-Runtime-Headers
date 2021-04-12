/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNPoolingGradient : MPSCNNGradientKernel {

	MPSImageCoordinate _sourceSize;

}

@property (assign,nonatomic) MPSImageCoordinate sourceSize;              //@synthesize sourceSize=_sourceSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInPixelsX:(unsigned long long)arg3 strideInPixelsY:(unsigned long long)arg4 ;
-(MPSImageCoordinate)sourceSize;
-(void)setSourceSize:(MPSImageCoordinate)arg1 ;
@end

