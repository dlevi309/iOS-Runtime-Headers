/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@class MPSParallelRandomDistributionDescriptor, MPSParallelRandom;

@interface MPSNDArrayInitialization : MPSNDArrayMultiaryKernel {

	MPSParallelRandomDistributionDescriptor* _distribution;
	MPSParallelRandom* _generator;
	unsigned long long _seed;
	float _constantValue;

}
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationArray:(id)arg2 ;
-(unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 destinationDescriptor:(id)arg2 ;
@end

