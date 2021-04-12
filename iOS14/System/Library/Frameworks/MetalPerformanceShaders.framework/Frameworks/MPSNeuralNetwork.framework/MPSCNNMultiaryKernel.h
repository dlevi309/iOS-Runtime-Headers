/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MPSNNPadding, MPSImageAllocator;
@interface MPSCNNMultiaryKernel : MPSKernel {

	NNKernelSourceParams* _srcInfo;
	unsigned long long _srcCount;
	SCD_Struct_MP4 _clipRect;
	unsigned long long _destinationFeatureChannelOffset;
	BOOL _isBackwards;
	BOOL _supportsBroadcasting;
	id<MPSNNPadding> _padding;
	id<MPSImageAllocator> _destinationImageAllocator;
	int _checkFlags;
	/*function pointer*/void* _batchEncode;
	void* _encodeData;

}

@property (nonatomic,readonly) unsigned long long sourceCount;                                //@synthesize srcCount=_srcCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP4 clipRect;                                         //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long destinationFeatureChannelOffset;              //@synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset - In the implementation block
@property (nonatomic,readonly) BOOL isBackwards;                                              //@synthesize isBackwards=_isBackwards - In the implementation block
@property (nonatomic,readonly) BOOL isStateModified; 
@property (nonatomic,retain) id<MPSNNPadding> padding;                                        //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) id<MPSImageAllocator> destinationImageAllocator;                 //@synthesize destinationImageAllocator=_destinationImageAllocator - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)maxBatchSize;
-(void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inState:(id)arg3 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 ;
-(void)setOffset:(SCD_Struct_MP11)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)sourceCount;
-(void)setKernelWidth:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)kernelHeightAtIndex:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)strideInPixelsXatIndex:(unsigned long long)arg1 ;
-(void)setStrideInPixelsX:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)strideInPixelsYatIndex:(unsigned long long)arg1 ;
-(void)setStrideInPixelsY:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)dilationRateXatIndex:(unsigned long long)arg1 ;
-(void)setDilationRateX:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)dilationRateYatIndex:(unsigned long long)arg1 ;
-(void)setDilationRateY:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationState:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP11)offset;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(unsigned long long)sourceFeatureChannelMaxCount;
-(unsigned long long)destinationFeatureChannelOffset;
-(void)setSourceFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelMaxCount:(unsigned long long)arg1 ;
-(void)setDestinationImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(unsigned long long)sourceFeatureChannelOffset;
-(void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(id)arg3 ;
-(void)copyToGradientState:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateBatchForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id<MPSImageAllocator>)destinationImageAllocator;
-(void)setClipRect:(SCD_Struct_MP4)arg1 ;
-(BOOL)isStateModified;
-(BOOL)appendBatchBarrier;
-(void)setDilationRateX:(unsigned long long)arg1 ;
-(void)setDilationRateY:(unsigned long long)arg1 ;
-(void)setStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setStrideInPixelsY:(unsigned long long)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)setOffset:(SCD_Struct_MP11)arg1 ;
-(void)setDestinationFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id<MPSNNPadding>)padding;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(SCD_Struct_MP4)clipRect;
-(unsigned long long)edgeMode;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(void)setPadding:(id<MPSNNPadding>)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(unsigned long long)dilationRateX;
-(unsigned long long)dilationRateY;
-(BOOL)isBackwards;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(void)dealloc;
-(SCD_Struct_MP11)offsetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sourceFeatureChannelOffsetAtIndex:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)sourceFeatureChannelMaxCountAtIndex:(unsigned long long)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelMaxCount:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)edgeModeAtIndex:(unsigned long long)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)kernelWidthAtIndex:(unsigned long long)arg1 ;
@end

