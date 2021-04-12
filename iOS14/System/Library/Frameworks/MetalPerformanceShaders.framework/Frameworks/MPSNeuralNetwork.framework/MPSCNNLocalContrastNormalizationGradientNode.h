/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNLocalContrastNormalizationGradientNode : MPSNNGradientFilterNode {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	float _alpha;
	float _beta;
	float _delta;
	float _p0;
	float _pm;
	float _ps;

}

@property (assign,nonatomic) float alpha;                                    //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;                                     //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;                                    //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) float p0;                                       //@synthesize p0=_p0 - In the implementation block
@property (assign,nonatomic) float pm;                                       //@synthesize pm=_pm - In the implementation block
@property (assign,nonatomic) float ps;                                       //@synthesize ps=_ps - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 ;
-(float)p0;
-(float)pm;
-(float)ps;
-(float)beta;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 ;
-(float)alpha;
-(void)setP0:(float)arg1 ;
-(void)setPm:(float)arg1 ;
-(void)setPs:(float)arg1 ;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(void)setBeta:(float)arg1 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(void)setAlpha:(float)arg1 ;
@end

