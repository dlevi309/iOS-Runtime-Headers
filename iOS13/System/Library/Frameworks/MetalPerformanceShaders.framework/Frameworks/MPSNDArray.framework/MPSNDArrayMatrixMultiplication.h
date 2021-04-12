/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@interface MPSNDArrayMatrixMultiplication : MPSNDArrayMultiaryKernel {

	double _alpha;
	double _beta;

}

@property (assign,nonatomic) double alpha;              //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double beta;               //@synthesize beta=_beta - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(double)alpha;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(void)setBeta:(double)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(double)beta;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(unsigned long long)maxSupportedDimensionsForSourceArrays:(id)arg1 destinationArray:(id)arg2 ;
-(1)dimensionsNotToBeBroadcast;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
@end

