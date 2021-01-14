/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayBinaryKernel.h>

@interface MPSNDArrayGather : MPSNDArrayBinaryKernel {

	unsigned long long _axis;

}

@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 destinationArray:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
@end

