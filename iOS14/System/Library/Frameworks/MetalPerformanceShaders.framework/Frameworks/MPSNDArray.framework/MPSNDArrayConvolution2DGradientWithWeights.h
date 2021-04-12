/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayBinarySecondaryGradientKernel.h>

@interface MPSNDArrayConvolution2DGradientWithWeights : MPSNDArrayBinarySecondaryGradientKernel {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _strideInPixelsX;
	unsigned long long _strideInPixelsY;
	unsigned long long _groups;
	unsigned long long _dilationRateInX;
	unsigned long long _dilationRateInY;
	unsigned long long _channelMultiplier;
	unsigned _dataFormat;
	unsigned _weightsFormat;
	MPSNDArrayConvolutionOffsets _offsets;

}

@property (nonatomic,readonly) MPSNDArrayConvolutionSizes kernelSizes; 
@property (nonatomic,readonly) MPSNDArrayConvolutionSizes strideInPixels; 
@property (nonatomic,readonly) MPSNDArrayConvolutionSizes dilationRates; 
@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;               //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                              //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) unsigned long long channelMultiplier;                   //@synthesize channelMultiplier=_channelMultiplier - In the implementation block
@property (nonatomic,readonly) unsigned dataFormat;                                    //@synthesize dataFormat=_dataFormat - In the implementation block
@property (nonatomic,readonly) unsigned weightsFormat;                                 //@synthesize weightsFormat=_weightsFormat - In the implementation block
@property (assign,nonatomic) MPSNDArrayConvolutionOffsets offsets; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)channelMultiplier;
-(unsigned long long)outputFeatureChannels;
-(unsigned)dataFormat;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)groups;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)inputFeatureChannels;
-(MPSNDArrayConvolutionOffsets)offsets;
-(void)setOffsets:(MPSNDArrayConvolutionOffsets)arg1 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(1)dimensionsToBeRetained;
-(id)workloadStatisticsForSourceArrays:(id)arg1 destArrays:(id)arg2 kernel:(id)arg3 sourceState:(id)arg4 ;
-(2)stridesAtSourceIndex:(unsigned long long)arg1 ;
-(1)destinationStrides;
-(unsigned)weightsFormat;
-(MPSNDArrayConvolutionSizes)kernelSizes;
-(MPSNDArrayConvolutionSizes)strideInPixels;
-(MPSNDArrayConvolutionSizes)dilationRates;
-(id)initWithDevice:(id)arg1 ndArrayConvolution2DDescriptor:(id)arg2 ;
@end

