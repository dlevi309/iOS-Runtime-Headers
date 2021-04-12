/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@protocol MPSNNPadding;
@interface MPSNNBinaryGradientState : MPSState {

	SCD_Struct_MP11 _primaryOffset;
	SCD_Struct_MP11 _secondaryOffset;
	SCD_Struct_MP4 _clipRect;
	MPSImageCoordinate _destSize;
	unsigned long long _destFeatureChannels;
	unsigned long long _destinationFeatureChannelOffset;
	unsigned long long _primarySourceFeatureChannelOffset;
	unsigned long long _secondarySourceFeatureChannelOffset;
	unsigned long long _primarySourceFeatureChannelMaxCount;
	unsigned long long _secondarySourceFeatureChannelMaxCount;
	unsigned long long _primaryKernelWidth;
	unsigned long long _primaryKernelHeight;
	unsigned long long _secondaryKernelWidth;
	unsigned long long _secondaryKernelHeight;
	unsigned long long _primaryStrideInPixelsX;
	unsigned long long _primaryStrideInPixelsY;
	unsigned long long _secondaryStrideInPixelsX;
	unsigned long long _secondaryStrideInPixelsY;
	unsigned long long _primaryDilationRateX;
	unsigned long long _primaryDilationRateY;
	unsigned long long _secondaryDilationRateX;
	unsigned long long _secondaryDilationRateY;
	id<MPSNNPadding> _padding;
	unsigned long long _maxBatchSize;
	BOOL _isBackwards;
	unsigned long long _primaryEdgeMode;
	unsigned long long _secondaryEdgeMode;
	MPSImageCoordinate _primarySrcSize;
	unsigned long long _primarySourceFeatureChannels;
	MPSImageCoordinate _secondarySrcSize;
	unsigned long long _secondarySourceFeatureChannels;
	BOOL _initOnce;
	unsigned _provenance;

}
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(void)dealloc;
@end

