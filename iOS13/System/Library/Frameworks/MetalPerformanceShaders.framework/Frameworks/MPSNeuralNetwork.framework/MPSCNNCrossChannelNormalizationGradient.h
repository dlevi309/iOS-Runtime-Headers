/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNCrossChannelNormalizationGradient : MPSCNNGradientKernel {

	unsigned long long _kernelSize;
	float _alpha;
	float _beta;
	float _delta;

}

@property (assign,nonatomic) float alpha;                                  //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;                                   //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;                                  //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelSize;              //@synthesize kernelSize=_kernelSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(float)alpha;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setAlpha:(float)arg1 ;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(void)setBeta:(float)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(float)beta;
-(id)initWithDevice:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(unsigned long long)kernelSize;
@end

