/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSNDArrayConvolution2DDescriptor : NSObject <NSCopying> {

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

}

@property (assign,nonatomic) unsigned long long kernelWidth;                        //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;                       //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (assign,nonatomic) unsigned long long inputFeatureChannels;               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long outputFeatureChannels;              //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long strideInPixelsX;                    //@synthesize strideInPixelsX=_strideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long strideInPixelsY;                    //@synthesize strideInPixelsY=_strideInPixelsY - In the implementation block
@property (assign,nonatomic) unsigned long long groups;                             //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateInX;                    //@synthesize dilationRateInX=_dilationRateInX - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateInY;                    //@synthesize dilationRateInY=_dilationRateInY - In the implementation block
@property (assign,nonatomic) unsigned dataFormat;                                   //@synthesize dataFormat=_dataFormat - In the implementation block
@property (assign,nonatomic) unsigned weightsFormat;                                //@synthesize weightsFormat=_weightsFormat - In the implementation block
-(unsigned long long)outputFeatureChannels;
-(id)init;
-(unsigned)dataFormat;
-(void)setGroups:(unsigned long long)arg1 ;
-(unsigned long long)groups;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(void)setInputFeatureChannels:(unsigned long long)arg1 ;
-(void)setOutputFeatureChannels:(unsigned long long)arg1 ;
-(unsigned long long)inputFeatureChannels;
-(void)setStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setStrideInPixelsY:(unsigned long long)arg1 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)dilationRateInX;
-(unsigned long long)dilationRateInY;
-(void)setDilationRateInX:(unsigned long long)arg1 ;
-(void)setDilationRateInY:(unsigned long long)arg1 ;
-(void)setDataFormat:(unsigned)arg1 ;
-(unsigned)weightsFormat;
-(void)setWeightsFormat:(unsigned)arg1 ;
@end

