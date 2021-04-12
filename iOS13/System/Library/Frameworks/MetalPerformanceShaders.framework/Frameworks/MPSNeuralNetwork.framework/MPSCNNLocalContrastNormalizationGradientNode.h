/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)alpha;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(void)setAlpha:(float)arg1 ;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(void)setBeta:(float)arg1 ;
-(float)p0;
-(void)setPm:(float)arg1 ;
-(float)pm;
-(float)beta;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(void)setP0:(float)arg1 ;
-(float)ps;
-(void)setPs:(float)arg1 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 ;
@end

