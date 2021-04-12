/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNPoolingGradientNode.h>

@interface MPSCNNDilatedPoolingMaxGradientNode : MPSCNNPoolingGradientNode {

	unsigned long long _dilationRateX;
	unsigned long long _dilationRateY;

}

@property (nonatomic,readonly) unsigned long long dilationRateX;              //@synthesize dilationRateX=_dilationRateX - In the implementation block
@property (nonatomic,readonly) unsigned long long dilationRateY;              //@synthesize dilationRateY=_dilationRateY - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 dilationRateX:(unsigned long long)arg8 dilationRateY:(unsigned long long)arg9 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 dilationRateX:(unsigned long long)arg8 dilationRateY:(unsigned long long)arg9 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(unsigned long long)dilationRateX;
-(unsigned long long)dilationRateY;
@end

