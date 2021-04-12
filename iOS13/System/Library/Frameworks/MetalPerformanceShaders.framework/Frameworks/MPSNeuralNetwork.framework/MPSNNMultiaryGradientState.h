/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@protocol MPSNNPadding;
@interface MPSNNMultiaryGradientState : MPSState {

	unsigned long long _srcCount;
	NNKernelSourceParams* _srcInfo;
	MPSImageCoordinate* _srcSizes;
	SCD_Struct_MP4 _clipRect;
	MPSImageCoordinate _destSize;
	unsigned long long _destFeatureChannels;
	unsigned long long _destinationFeatureChannelOffset;
	id<MPSNNPadding> _padding;
	unsigned long long _maxBatchSize;
	BOOL _isBackwards;
	BOOL _initOnce;
	unsigned _provenance;

}
-(void)dealloc;
-(id)initWithSourceCount:(unsigned long long)arg1 ;
@end

