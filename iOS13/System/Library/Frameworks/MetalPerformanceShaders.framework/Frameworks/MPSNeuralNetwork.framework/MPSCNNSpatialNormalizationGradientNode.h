/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)alpha;
-(unsigned long long)kernelWidth;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(unsigned long long)kernelHeight;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(void)setBeta:(float)arg1 ;
-(float)beta;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelSize:(unsigned long long)arg4 ;
@end

