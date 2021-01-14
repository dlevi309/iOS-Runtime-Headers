/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 transformProvider:(id)arg2 handle:(id)arg3 outputSize:(MPSImageCoordinate)arg4 scaleClass:(Class)arg5 ;
-(void)setLabel:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP1*)arg4 ;
-(void)dealloc;
-(void)setEdgeMode:(unsigned long long)arg1 ;
@end

