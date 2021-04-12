/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientState.h>

@protocol MTLBuffer;
@interface MPSCNNDropoutGradientState : MPSNNGradientState {

	MPSImageCoordinate _maskStrideInPixels;
	float _keepProbability;
	unsigned long long _resourcePixelFormat;
	MPSImageCoordinate _resourceSize;
	unsigned long long _commonBufferOffsetBytes;
	id<MTLBuffer> _commonMaskBuffer;

}
-(id)init;
-(void)dealloc;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)maskData;
@end

