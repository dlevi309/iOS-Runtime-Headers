/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)maskData;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)dealloc;
@end

