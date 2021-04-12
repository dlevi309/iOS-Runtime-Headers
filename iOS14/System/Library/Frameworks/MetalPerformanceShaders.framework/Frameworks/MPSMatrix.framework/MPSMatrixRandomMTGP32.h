/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrixRandom.h>

@class MPSParallelRandomMTGP32;

@interface MPSMatrixRandomMTGP32 : MPSMatrixRandom {

	MPSParallelRandomMTGP32* _parallelFilter;

}
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)resetSeedOnCommandBuffer:(id)arg1 seed:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 ;
-(void)synchronizeStateOnCommandBuffer:(id)arg1 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg1 destinationVector:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationMatrix:(id)arg2 ;
@end

