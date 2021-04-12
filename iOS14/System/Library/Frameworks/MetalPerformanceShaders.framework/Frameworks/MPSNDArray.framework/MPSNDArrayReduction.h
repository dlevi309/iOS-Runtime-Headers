/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryKernel.h>

@class NSArray, MPSKernelDAGObject;

@interface MPSNDArrayReduction : MPSNDArrayUnaryKernel {

	unsigned long long _axis;
	NSArray* axes;
	int _operation;
	MPSKernelDAGObject* _firstMultiPassDAG;
	MPSKernelDAGObject* _intermediateDAG;
	MPSKernelDAGObject* _finalPassDAG;
	 _inputKernelDAGHash;
	NSArray* _axes;

}

@property (nonatomic,readonly) int operation;                      //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) NSArray * axes;                       //@synthesize axes=_axes - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(NSArray *)axes;
-(int)operation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
-(void)setAxes:(NSArray *)arg1 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(1)dimensionsToBeRetained;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
-(id)workloadStatisticsForSourceArrays:(id)arg1 destArrays:(id)arg2 kernel:(id)arg3 sourceState:(id)arg4 ;
-(id)initWithDevice:(id)arg1 axis:(unsigned long long)arg2 operation:(int)arg3 ;
@end

