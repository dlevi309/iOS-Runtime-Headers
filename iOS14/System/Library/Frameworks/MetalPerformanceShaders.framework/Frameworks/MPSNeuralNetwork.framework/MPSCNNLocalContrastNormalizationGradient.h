/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNLocalContrastNormalizationGradient : MPSCNNGradientKernel {

	float _alpha;
	float _beta;
	float _delta;
	float _p0;
	float _pm;
	float _ps;

}

@property (assign,nonatomic) float alpha;              //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;               //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;              //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) float p0;                 //@synthesize p0=_p0 - In the implementation block
@property (assign,nonatomic) float pm;                 //@synthesize pm=_pm - In the implementation block
@property (assign,nonatomic) float ps;                 //@synthesize ps=_ps - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)p0;
-(float)pm;
-(float)ps;
-(float)beta;
-(float)alpha;
-(void)setP0:(float)arg1 ;
-(void)setPm:(float)arg1 ;
-(void)setPs:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(float)delta;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setDelta:(float)arg1 ;
-(void)setBeta:(float)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(void)setAlpha:(float)arg1 ;
@end

