/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNLocalContrastNormalizationNode : MPSCNNNormalizationNode {

	float _pm;
	float _ps;
	float _p0;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;

}

@property (assign,nonatomic) float pm;                                     //@synthesize pm=_pm - In the implementation block
@property (assign,nonatomic) float ps;                                     //@synthesize ps=_ps - In the implementation block
@property (assign,nonatomic) float p0;                                     //@synthesize p0=_p0 - In the implementation block
@property (assign,nonatomic) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
+(id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(unsigned long long)kernelWidth;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(unsigned long long)kernelHeight;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(float)p0;
-(void)setPm:(float)arg1 ;
-(float)pm;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(void)setP0:(float)arg1 ;
-(float)ps;
-(void)setPs:(float)arg1 ;
-(id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
@end

