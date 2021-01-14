/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryKernel.h>

@interface MPSNDArrayBandPart : MPSNDArrayUnaryKernel {

	long long _numLower;
	long long _numUpper;

}

@property (assign,nonatomic) long long numLower;              //@synthesize numLower=_numLower - In the implementation block
@property (assign,nonatomic) long long numUpper;              //@synthesize numUpper=_numUpper - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(long long)numLower;
-(void)setNumLower:(long long)arg1 ;
-(long long)numUpper;
-(void)setNumUpper:(long long)arg1 ;
@end

