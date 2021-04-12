/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MPSNNPadding, MPSImageAllocator;
@class MPSExternalCNNUnary;

@interface MPSCNNKernel : MPSKernel {

	SCD_Struct_MP11 _offset;
	SCD_Struct_MP4 _clipRect;
	unsigned long long _destinationFeatureChannelOffset;
	unsigned long long _sourceFeatureChannelOffset;
	unsigned long long _sourceFeatureChannelMaxCount;
	MPSExternalCNNUnary* _plugin;
	BOOL _pluginSupportsBatchEncode;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _strideInPixelsX;
	unsigned long long _strideInPixelsY;
	unsigned long long _dilationRateX;
	unsigned long long _dilationRateY;
	id<MPSNNPadding> _padding;
	unsigned long long _maxBatchSize;
	BOOL _isBackwards;
	unsigned long long _edgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	/*function pointer*/void* _batchEncode;
	void* _encodeData;
	unsigned long long _pluginOptions;
	id<MPSImageAllocator> _destinationImageAllocator;

}

@property (assign,nonatomic) SCD_Struct_MP11 offset;                                          //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP4 clipRect;                                         //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long destinationFeatureChannelOffset;              //@synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long sourceFeatureChannelOffset;                   //@synthesize sourceFeatureChannelOffset=_sourceFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long sourceFeatureChannelMaxCount;                 //@synthesize sourceFeatureChannelMaxCount=_sourceFeatureChannelMaxCount - In the implementation block
@property (assign,nonatomic) unsigned long long edgeMode;                                     //@synthesize edgeMode=_edgeMode - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;                                //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;                               //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInPixelsX;                            //@synthesize strideInPixelsX=_strideInPixelsX - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInPixelsY;                            //@synthesize strideInPixelsY=_strideInPixelsY - In the implementation block
@property (nonatomic,readonly) unsigned long long dilationRateX;                              //@synthesize dilationRateX=_dilationRateX - In the implementation block
@property (nonatomic,readonly) unsigned long long dilationRateY;                              //@synthesize dilationRateY=_dilationRateY - In the implementation block
@property (nonatomic,readonly) BOOL isBackwards;                                              //@synthesize isBackwards=_isBackwards - In the implementation block
@property (nonatomic,readonly) BOOL isStateModified; 
@property (nonatomic,retain) id<MPSNNPadding> padding;                                        //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) id<MPSImageAllocator> destinationImageAllocator;                 //@synthesize destinationImageAllocator=_destinationImageAllocator - In the implementation block
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOffset:(SCD_Struct_MP11)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setClipRect:(SCD_Struct_MP4)arg1 ;
-(SCD_Struct_MP11)offset;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setPadding:(id<MPSNNPadding>)arg1 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(id<MPSNNPadding>)padding;
-(id)plugin;
-(BOOL)setPlugin:(id)arg1 ;
-(unsigned long long)maxBatchSize;
-(unsigned long long)edgeMode;
-(SCD_Struct_MP4)clipRect;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(MPSImageCoordinate)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(unsigned long long)sourceFeatureChannelMaxCount;
-(unsigned long long)destinationFeatureChannelOffset;
-(void)setDestinationFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelMaxCount:(unsigned long long)arg1 ;
-(void)setDestinationImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id)arg3 destinationImages:(id)arg4 ;
-(unsigned long long)sourceFeatureChannelOffset;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateBatchForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned long long)batchEncodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(BOOL)filterHandlesPlugin;
-(id<MPSImageAllocator>)destinationImageAllocator;
-(BOOL)isStateModified;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceState:(id)arg3 destinationState:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationStates:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 kernelOffset:(SCD_Struct_MP11*)arg5 ;
-(BOOL)appendBatchBarrier;
-(unsigned long long)dilationRateX;
-(unsigned long long)dilationRateY;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 ;
-(BOOL)pluginSupportsBatchEncode;
-(BOOL)isBackwards;
-(1)sourcePositionOfTopLeftCornerOfFilterWindow;
@end

