/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientState.h>

@interface MPSNNPermuteGradientState : MPSNNGradientState {

	MPSNNDimensionOrder _fwdPermuteOrder;
	MPSNNDimensionOrder _revPermuteOrder;

}
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
-(id)initWithResource:(id)arg1 ;
@end

