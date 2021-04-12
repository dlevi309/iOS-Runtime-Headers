/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSImageTransformProvider;
@interface MPSNNScaleNode : MPSNNFilterNode {

	id<MPSImageTransformProvider> _transformProvider;
	MPSImageCoordinate _size;

}
+(id)nodeWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
+(id)nodeWithSource:(id)arg1 outputSize:(MPSImageCoordinate)arg2 ;
-(id)debugDescription;
-(id)initWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
-(id)initWithSource:(id)arg1 outputSize:(MPSImageCoordinate)arg2 ;
-(id)privateInitWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
-(void)dealloc;
@end

