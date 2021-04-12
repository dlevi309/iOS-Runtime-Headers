/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayInitialization.h>

@interface MPSNDArrayInitializationConstant : MPSNDArrayInitialization

@property (nonatomic,readonly) float constantValue; 
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(float)constantValue;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(id)initWithDevice:(id)arg1 constantValue:(float)arg2 ;
@end

