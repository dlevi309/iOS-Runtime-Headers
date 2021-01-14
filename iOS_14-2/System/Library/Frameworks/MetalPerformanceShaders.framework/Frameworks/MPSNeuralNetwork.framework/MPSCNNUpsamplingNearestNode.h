/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNUpsamplingNearestNode : MPSNNFilterNode {

	double _scaleFactorX;
	double _scaleFactorY;

}

@property (nonatomic,readonly) double scaleFactorX;              //@synthesize scaleFactorX=_scaleFactorX - In the implementation block
@property (nonatomic,readonly) double scaleFactorY;              //@synthesize scaleFactorY=_scaleFactorY - In the implementation block
+(id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(double)scaleFactorX;
-(double)scaleFactorY;
-(id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 ;
@end

