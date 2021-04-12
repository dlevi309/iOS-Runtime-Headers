/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNSpatialNormalizationGradientNode : MPSNNGradientFilterNode {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	float _alpha;
	float _beta;
	float _delta;

}

@property (assign,nonatomic) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (assign,nonatomic) float alpha;                                  //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;                                   //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;                                  //@synthesize delta=_delta - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelSize:(unsigned long long)arg4 ;
-(float)beta;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelSize:(unsigned long long)arg4 ;
-(float)alpha;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(void)setBeta:(float)arg1 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(void)setAlpha:(float)arg1 ;
@end

