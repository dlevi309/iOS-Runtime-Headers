/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@class MPSMatrixMultiplication;

@interface MPSNDArrayMatrixMultiplication : MPSNDArrayMultiaryKernel {

	MPSMatrixMultiplication* _mmul;
	double _alpha;
	double _beta;

}

@property (assign,nonatomic) double alpha;              //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double beta;               //@synthesize beta=_beta - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
+(unsigned long long)expectedVirtualSourceCount;
-(double)beta;
-(double)alpha;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setBeta:(double)arg1 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(void)dealloc;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
-(id)workloadStatisticsForSourceArrays:(id)arg1 destArrays:(id)arg2 kernel:(id)arg3 sourceState:(id)arg4 ;
@end

