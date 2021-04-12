/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSImageTransformProvider, MPSHandle;
@class MPSImageScale;

@interface MPSNNScale : MPSCNNKernel {

	id<MPSImageTransformProvider> _transformProvider;
	MPSImageCoordinate _destSize;
	MPSImageScale* _filter;
	id<MPSHandle> _handle;

}
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP1*)arg4 ;
-(id)initWithDevice:(id)arg1 transformProvider:(id)arg2 handle:(id)arg3 outputSize:(MPSImageCoordinate)arg4 scaleClass:(Class)arg5 ;
@end

