/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNPadNode : MPSNNFilterNode {

	MPSImageCoordinate _paddingSizeBefore;
	MPSImageCoordinate _paddingSizeAfter;
	unsigned long long _edgeMode;
	float _fillValue;

}

@property (assign,nonatomic) float fillValue;              //@synthesize fillValue=_fillValue - In the implementation block
+(id)nodeWithSource:(id)arg1 paddingSizeBefore:(MPSImageCoordinate)arg2 paddingSizeAfter:(MPSImageCoordinate)arg3 edgeMode:(unsigned long long)arg4 ;
-(float)fillValue;
-(void)setFillValue:(float)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 paddingSizeBefore:(MPSImageCoordinate)arg2 paddingSizeAfter:(MPSImageCoordinate)arg3 edgeMode:(unsigned long long)arg4 ;
@end

