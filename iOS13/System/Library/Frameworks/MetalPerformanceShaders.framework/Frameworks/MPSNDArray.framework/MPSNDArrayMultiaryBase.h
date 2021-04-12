/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MPSNDArrayAllocator;
@interface MPSNDArrayMultiaryBase : MPSKernel {

	unsigned long long _srcCount;
	NDArraySrcInfo* _srcInfo;
	/*function pointer*/void* _encode;
	void* _encodeData;
	id<MPSNDArrayAllocator> _destinationArrayAllocator;

}

@property (nonatomic,retain) id<MPSNDArrayAllocator> destinationArrayAllocator;              //@synthesize destinationArrayAllocator=_destinationArrayAllocator - In the implementation block
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setDestinationArrayAllocator:(id<MPSNDArrayAllocator>)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(unsigned long long)maxSupportedDimensionsForSourceArrays:(id)arg1 destinationArray:(id)arg2 ;
-(1)dimensionsNotToBeBroadcast;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
-(1)dimensionsToBeRetained;
-(id)reshapeFitToTileToCommandBuffer:(id)arg1 currentSource:(id)arg2 kernelDimension:(unsigned long long)arg3 ;
-(unsigned long long)edgeModeAtSourceIndex:(unsigned long long)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 ;
-(SCD_Struct_MP1)offsetsAtSourceIndex:(unsigned long long)arg1 ;
-(void)setOffsets:(SCD_Struct_MP1)arg1 sourceIndex:(unsigned long long)arg2 ;
-(SCD_Struct_MP2)kernelSizesForSourceIndex:(unsigned long long)arg1 ;
-(void)setKernelSizes:(SCD_Struct_MP2)arg1 sourceIndex:(unsigned long long)arg2 ;
-(SCD_Struct_MP1)stridesForSourceIndex:(unsigned long long)arg1 ;
-(void)setStrides:(SCD_Struct_MP1)arg1 sourceIndex:(unsigned long long)arg2 ;
-(SCD_Struct_MP2)dilationRatesForSourceIndex:(unsigned long long)arg1 ;
-(void)copyToGradientState:(id)arg1 sourceArrays:(id)arg2 sourceStates:(id)arg3 destinationArray:(id)arg4 ;
-(id)resultStateForSourceArrays:(id)arg1 sourceStates:(id)arg2 destinationArray:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceStates:(id)arg3 destinationArray:(id)arg4 ;
-(void)setDilationRates:(SCD_Struct_MP2)arg1 sourceIndex:(unsigned long long)arg2 ;
-(id<MPSNDArrayAllocator>)destinationArrayAllocator;
@end

