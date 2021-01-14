/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSRNNImageInferenceLayer : MPSCNNKernel {

	int* layerTypes;
	void* layers;
	void* forwardLayers;
	int* forwardLayerTypes;
	unsigned long long nForwardLayers;
	void* backwardLayers;
	int* backwardLayerTypes;
	unsigned long long nBackwardLayers;
	BOOL _recurrentOutputIsTemporary;
	BOOL _storeAllIntermediateStates;
	unsigned long long _numberOfLayers;
	unsigned long long _bidirectionalCombineMode;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;

}

@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;               //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLayers;                      //@synthesize numberOfLayers=_numberOfLayers - In the implementation block
@property (assign,nonatomic) BOOL recurrentOutputIsTemporary;                          //@synthesize recurrentOutputIsTemporary=_recurrentOutputIsTemporary - In the implementation block
@property (assign,nonatomic) BOOL storeAllIntermediateStates;                          //@synthesize storeAllIntermediateStates=_storeAllIntermediateStates - In the implementation block
@property (assign,nonatomic) unsigned long long bidirectionalCombineMode;              //@synthesize bidirectionalCombineMode=_bidirectionalCombineMode - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)outputFeatureChannels;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)inputFeatureChannels;
-(BOOL)storeAllIntermediateStates;
-(id)initWithDevice:(id)arg1 rnnDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 rnnDescriptors:(id)arg2 ;
-(void)encodeSequenceToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3 recurrentInputState:(id)arg4 recurrentOutputStates:(id)arg5 ;
-(void)encodeBidirectionalSequenceToCommandBuffer:(id)arg1 sourceSequence:(id)arg2 destinationForwardImages:(id)arg3 destinationBackwardImages:(id)arg4 ;
-(BOOL)recurrentOutputIsTemporary;
-(void)setRecurrentOutputIsTemporary:(BOOL)arg1 ;
-(void)setStoreAllIntermediateStates:(BOOL)arg1 ;
-(unsigned long long)bidirectionalCombineMode;
-(void)setBidirectionalCombineMode:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLayers;
-(void)dealloc;
@end

