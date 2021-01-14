/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)maxBatchSize;
-(unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)init;
-(void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)plugin;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)pluginSupportsBatchEncode;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP11)offset;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(unsigned long long)sourceFeatureChannelMaxCount;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 kernelOffset:(SCD_Struct_MP11*)arg5 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(unsigned long long)destinationFeatureChannelOffset;
-(void)setSourceFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelMaxCount:(unsigned long long)arg1 ;
-(void)setDestinationImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(unsigned long long)sourceFeatureChannelOffset;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(BOOL)filterHandlesPlugin;
-(id<MPSImageAllocator>)destinationImageAllocator;
-(void)setClipRect:(SCD_Struct_MP4)arg1 ;
-(BOOL)isStateModified;
-(BOOL)appendBatchBarrier;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateBatchForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned long long)batchEncodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 ;
-(void)setOffset:(SCD_Struct_MP11)arg1 ;
-(void)setDestinationFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceState:(id)arg3 destinationState:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id<MPSNNPadding>)padding;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationStates:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(SCD_Struct_MP4)clipRect;
-(unsigned long long)edgeMode;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(void)setPadding:(id<MPSNNPadding>)arg1 ;
-(BOOL)setPlugin:(id)arg1 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(unsigned long long)dilationRateX;
-(unsigned long long)dilationRateY;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 ;
-(BOOL)isBackwards;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 subBatchIndex:(unsigned long long)arg5 batchSize:(unsigned long long)arg6 ;
-(1)sourcePositionOfTopLeftCornerOfFilterWindow;
-(MPSRegion)sourceRegionForDestinationSize:(MPSImageCoordinate)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
@end

